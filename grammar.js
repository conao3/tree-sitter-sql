function kw(keyword) {
  if (keyword.toUpperCase() != keyword) {
    throw new Error(`Expected upper case keyword got ${keyword}`);
  }
  const words = keyword.split(" ");
  const regExps = words.map(createCaseInsensitiveRegex);

  return regExps.length == 1
    ? alias(regExps[0], keyword)
    : alias(seq(...regExps), keyword.replace(/ /g, "_"));
}

function createCaseInsensitiveRegex(word) {
  return new RegExp(
    word
      .split("")
      .map(letter => `[${letter.toLowerCase()}${letter.toUpperCase()}]`)
      .join(""),
  );
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}

function sep(rule, separator) {
  return optional(sep1(rule, separator));
}

module.exports = grammar({
  name: 'sql',
  rules: {
    source_file: $ => repeat(seq($.statement, ";")),
    statement: $ => choice(
      $.create_statement,
    ),
    expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.boolean,
      $.null,
      $.array,
      $.object,
      $.function_call,
      $.binary_expression,
      $.unary_expression,
      $.cast_expression,
    ),
    create_statement: $ => choice(
      $.create_table_statement,
    ),
    create_table_statement: $ => seq(
      kw("CREATE"),
      optional(choice(kw("TEMPORARY"), kw("TEMP"))),
      kw("TABLE"),
      optional(kw("IF NOT EXISTS")),
      $.identifier,
      seq(
        "(",
        sep(
          choice(
            $.column_def,
            $.table_constraint,
          ),
          ","
        ),
        ")",
      )
    ),
    column_def: $ => seq(
      $.identifier,
      $.column_type,
      repeat($.column_constraint),
    ),
    table_constraint: $ => seq(
      optional(seq(kw("CONSTRAINT"), $.identifier)),
      choice(
        seq(kw("CHECK"), "(", $.expression, ")", optional(kw("NO INHERIT"))),
        seq(
          kw("UNIQUE"),
          optional(
            seq(kw("NULLS"), optional(kw("NOT")), kw("DISTINCT"))
          ),
          "(", sep1($.identifier, ","), ")",
          $.expression,
        ),
        seq(
          kw("PRIMARY KEY"),
          "(", sep1($.identifier, ","), ")",
        ),
        seq(
          kw("EXCLUDE"),
          optional(
            seq(kw("USING"), $.expression)
          )
        ),
        seq(
          kw("FOREIGN KEY"),
          "(", sep1($.identifier, ","), ")",
          kw("REFERENCES"),
          $.identifier,
          optional(seq("(", sep1($.identifier, ","), ")")),
          optional(choice(kw("MATCH FULL"), kw("MATCH PARTIAL"), kw("MATCH SIMPLE"))),
          optional(seq(kw("ON DELETE"), $.expression)),
          optional(seq(kw("ON UPDATE"), $.expression)),
        ),
      ),
      optional(choice(kw("DEFERRABLE"), kw("NOT DEFERRABLE"))),
      optional(choice(kw("INITIALLY DEFERRED"), kw("INITIALLY IMMEDIATE"))),
    ),
    column_constraint: $ => choice(
      kw("NOT NULL"),
      kw("NULL"),
      seq(kw("CHECK"), "(", $.expression, ")"),
      seq(kw("DEFAULT"), $.expression),
      seq(kw("GENERATED ALWAYS AS"), "(", $.expression, ")", kw("STORED")),
      seq(kw("GENERATED"), choice(kw("ALWAYS"), kw("BY DEFAULT")), kw("AS IDENTITY"), optional(seq("(", $.expression, ")"))),
      seq(kw("UNIQUE"), "(", sep1($.identifier, ","), ")"),
      kw("PRIMARY KEY"),
      seq(kw("REFERENCES"), $.identifier, optional(seq("(", $.identifier, ")"))),
    ),
    column_type: $ => seq(
      $._column_type, optional("[]"),
    ),
    _column_type: $ => choice(
      kw("BIGINT"), kw("INT8"),
      kw("BIGSERIAL"), kw("SERIAL8"),
      seq(kw("BIT"), optional(seq("(", $.number, ")"))),
      seq(kw("BIT VARYING"), optional(seq("(", $.number, ")"))), seq(kw("VARBIT"), optional(seq("(", $.number, ")"))),
      kw("BOOLEAN"), kw("BOOL"),
      kw("BOX"),
      kw("BYTEA"),
      seq(kw("CHARACTER"), optional(seq("(", $.number, ")"))), seq(kw("CHAR"), optional(seq("(", $.number, ")"))),
      seq(kw("CHARACTER VARYING"), optional(seq("(", $.number, ")"))), seq(kw("VARCHAR"), optional(seq("(", $.number, ")"))),
      kw("CIDR"),
      kw("CIRCLE"),
      kw("DATE"),
      kw("DOUBLE PRECISION"), kw("FLOAT8"),
      kw("INET"),
      kw("INTEGER"), kw("INT"), kw("INT4"),
      seq(kw("INTERVAL"), optional(seq("(", $.number, ")"))),
      kw("JSON"),
      kw("JSONB"),
      kw("LINE"),
      kw("LSEG"),
      kw("MACADDR"),
      kw("MACADDR8"),
      kw("MONEY"),
      seq(kw("NUMERIC"), optional(seq("(", $.number, ",", $.number, ")"))), seq(kw("DECIMAL"), optional(seq("(", $.number, ",", $.number, ")"))),
      kw("PATH"),
      kw("PG_LSN"),
      kw("POINT"),
      kw("POLYGON"),
      kw("REAL"), kw("FLOAT4"),
      kw("SMALLINT"), kw("INT2"),
      kw("SMALLSERIAL"), kw("SERIAL2"),
      kw("SERIAL"), kw("SERIAL4"),
      kw("TEXT"),
      seq(kw("TIME"), optional(seq("(", $.number, ")")), optional(kw("WITHOUT TIME ZONE"))),
      seq(kw("TIME"), optional(seq("(", $.number, ")")), kw("WITH TIME ZONE")),
      kw("TIMETZ"),
      seq(kw("TIMESTAMP"), optional(seq("(", $.number, ")")), optional(kw("WITHOUT TIME ZONE"))),
      seq(kw("TIMESTAMP"), optional(seq("(", $.number, ")")), kw("WITH TIME ZONE")),
      kw("TIMESTAMPTZ"),
      kw("TSQUERY"),
      kw("TSVECTOR"),
      kw("UUID"),
      kw("XML"),
    ),
    identifier: $ => choice(
      $._quoted_identifier,
      $._unquoted_identifier,
    ),
    _quoted_identifier: $ => seq(
      '"',
      repeat(choice(
        /[^"]/,
        '""',
      )),
      '"',
    ),
    _unquoted_identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: $ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(
        seq(
          choice(
            seq(digits, ".", optional(digits), optional(exponent)),
            seq(optional(digits), ".", digits, optional(exponent)),
            seq(digits, exponent),
            seq(digits),
          ),
        ),
      );
    },
    string: $ => seq(
      "'",
      repeat(choice(
        /[^']/,
        "''",
      )),
      "'",
    ),
    boolean: $ => choice(
      kw("TRUE"),
      kw("FALSE"),
    ),
    null: $ => kw("NULL"),
    array: $ => seq(
      "[",
      sep1($.expression, ","),
      "]",
    ),
    object: $ => seq(
      "{",
      sep1($.object_field, ","),
      "}",
    ),
    object_field: $ => seq(
      $.identifier,
      ":",
      $.expression,
    ),
    function_call: $ => seq(
      $.identifier,
      "(",
      sep($.expression, ","),
      ")",
    ),
    binary_expression: $ => choice(
      prec.left(2, seq($.expression, "*", $.expression)),
      prec.left(2, seq($.expression, "/", $.expression)),
      prec.left(1, seq($.expression, "+", $.expression)),
      prec.left(1, seq($.expression, "-", $.expression)),
    ),
    unary_expression: $ => prec(3, choice(
      seq("-", $.expression),
      seq("+", $.expression),
    )),
    cast_expression: $ => seq(
      $.expression,
      kw("::"),
      $.column_type,
    ),
  }
});
