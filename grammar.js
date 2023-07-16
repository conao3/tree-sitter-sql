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

module.exports = grammar({
  name: 'sql',
  rules: {
    source_file: $ => sep1($.statement, ";"),
    statement: $ => choice(
      $.create_statement,
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
        sep1($.column_def, ","),
        ")",
      )
    ),
    column_def: $ => seq(
      $.identifier,
      $.column_type,
      optional(kw("NOT NULL")),
    ),
    column_type: $ => choice(
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
    number: $ => /\d+/,
  }
});
