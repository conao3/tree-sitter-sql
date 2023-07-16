#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 177
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 131
#define ALIAS_COUNT 4
#define TOKEN_COUNT 103
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 10

enum {
  anon_sym_SEMI = 1,
  aux_sym_create_table_statement_token1 = 2,
  aux_sym_create_table_statement_token2 = 3,
  aux_sym_create_table_statement_token3 = 4,
  aux_sym_create_table_statement_token4 = 5,
  aux_sym_create_table_statement_token5 = 6,
  aux_sym_create_table_statement_token6 = 7,
  aux_sym_create_table_statement_token7 = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  aux_sym_column_constraint_token1 = 12,
  aux_sym_column_constraint_token2 = 13,
  aux_sym_column_constraint_token3 = 14,
  aux_sym_column_constraint_token4 = 15,
  aux_sym_column_constraint_token5 = 16,
  aux_sym_column_constraint_token6 = 17,
  aux_sym_column_constraint_token7 = 18,
  aux_sym_column_constraint_token8 = 19,
  aux_sym_column_constraint_token9 = 20,
  aux_sym_column_constraint_token10 = 21,
  aux_sym_column_constraint_token11 = 22,
  aux_sym_column_constraint_token12 = 23,
  aux_sym_column_constraint_token13 = 24,
  aux_sym_column_type_token1 = 25,
  aux_sym_column_type_token2 = 26,
  aux_sym_column_type_token3 = 27,
  aux_sym_column_type_token4 = 28,
  aux_sym_column_type_token5 = 29,
  aux_sym_column_type_token6 = 30,
  aux_sym_column_type_token7 = 31,
  aux_sym_column_type_token8 = 32,
  aux_sym_column_type_token9 = 33,
  aux_sym_column_type_token10 = 34,
  aux_sym_column_type_token11 = 35,
  aux_sym_column_type_token12 = 36,
  aux_sym_column_type_token13 = 37,
  aux_sym_column_type_token14 = 38,
  aux_sym_column_type_token15 = 39,
  aux_sym_column_type_token16 = 40,
  aux_sym_column_type_token17 = 41,
  aux_sym_column_type_token18 = 42,
  aux_sym_column_type_token19 = 43,
  aux_sym_column_type_token20 = 44,
  aux_sym_column_type_token21 = 45,
  aux_sym_column_type_token22 = 46,
  aux_sym_column_type_token23 = 47,
  aux_sym_column_type_token24 = 48,
  aux_sym_column_type_token25 = 49,
  aux_sym_column_type_token26 = 50,
  aux_sym_column_type_token27 = 51,
  aux_sym_column_type_token28 = 52,
  aux_sym_column_type_token29 = 53,
  aux_sym_column_type_token30 = 54,
  aux_sym_column_type_token31 = 55,
  aux_sym_column_type_token32 = 56,
  aux_sym_column_type_token33 = 57,
  aux_sym_column_type_token34 = 58,
  aux_sym_column_type_token35 = 59,
  aux_sym_column_type_token36 = 60,
  aux_sym_column_type_token37 = 61,
  aux_sym_column_type_token38 = 62,
  aux_sym_column_type_token39 = 63,
  aux_sym_column_type_token40 = 64,
  aux_sym_column_type_token41 = 65,
  aux_sym_column_type_token42 = 66,
  aux_sym_column_type_token43 = 67,
  aux_sym_column_type_token44 = 68,
  aux_sym_column_type_token45 = 69,
  aux_sym_column_type_token46 = 70,
  aux_sym_column_type_token47 = 71,
  aux_sym_column_type_token48 = 72,
  aux_sym_column_type_token49 = 73,
  aux_sym_column_type_token50 = 74,
  aux_sym_column_type_token51 = 75,
  aux_sym_column_type_token52 = 76,
  aux_sym_column_type_token53 = 77,
  aux_sym_column_type_token54 = 78,
  aux_sym_column_type_token55 = 79,
  aux_sym_column_type_token56 = 80,
  aux_sym_column_type_token57 = 81,
  aux_sym_column_type_token58 = 82,
  anon_sym_DQUOTE = 83,
  aux_sym__quoted_identifier_token1 = 84,
  anon_sym_DQUOTE_DQUOTE = 85,
  sym__unquoted_identifier = 86,
  sym_number = 87,
  anon_sym_SQUOTE = 88,
  aux_sym_string_token1 = 89,
  anon_sym_SQUOTE_SQUOTE = 90,
  aux_sym_boolean_token1 = 91,
  aux_sym_boolean_token2 = 92,
  anon_sym_LBRACK = 93,
  anon_sym_RBRACK = 94,
  anon_sym_LBRACE = 95,
  anon_sym_RBRACE = 96,
  anon_sym_COLON = 97,
  anon_sym_STAR = 98,
  anon_sym_SLASH = 99,
  anon_sym_PLUS = 100,
  anon_sym_DASH = 101,
  aux_sym_cast_expression_token1 = 102,
  sym_source_file = 103,
  sym_statement = 104,
  sym_expression = 105,
  sym_create_statement = 106,
  sym_create_table_statement = 107,
  sym_column_def = 108,
  sym_column_constraint = 109,
  sym_column_type = 110,
  sym_identifier = 111,
  sym__quoted_identifier = 112,
  sym_string = 113,
  sym_boolean = 114,
  sym_null = 115,
  sym_array = 116,
  sym_object = 117,
  sym_object_field = 118,
  sym_function_call = 119,
  sym_binary_expression = 120,
  sym_unary_expression = 121,
  sym_cast_expression = 122,
  aux_sym_source_file_repeat1 = 123,
  aux_sym_create_table_statement_repeat1 = 124,
  aux_sym_column_def_repeat1 = 125,
  aux_sym_column_constraint_repeat1 = 126,
  aux_sym__quoted_identifier_repeat1 = 127,
  aux_sym_string_repeat1 = 128,
  aux_sym_array_repeat1 = 129,
  aux_sym_object_repeat1 = 130,
  anon_alias_sym_CHARACTER_VARYING = 131,
  anon_alias_sym_DEFAULT = 132,
  anon_alias_sym_GENERATED_ALWAYS_AS = 133,
  anon_alias_sym_NOT_NULL = 134,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_SEMI] = ";",
  [aux_sym_create_table_statement_token1] = "CREATE",
  [aux_sym_create_table_statement_token2] = "TEMPORARY",
  [aux_sym_create_table_statement_token3] = "TEMP",
  [aux_sym_create_table_statement_token4] = "TABLE",
  [aux_sym_create_table_statement_token5] = "IF_NOT_EXISTS",
  [aux_sym_create_table_statement_token6] = "IF_NOT_EXISTS",
  [aux_sym_create_table_statement_token7] = "IF_NOT_EXISTS",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_column_constraint_token1] = "NULL",
  [aux_sym_column_constraint_token2] = "CHECK",
  [aux_sym_column_constraint_token3] = "BY_DEFAULT",
  [aux_sym_column_constraint_token4] = "GENERATED",
  [aux_sym_column_constraint_token5] = "ALWAYS",
  [aux_sym_column_constraint_token6] = "AS_IDENTITY",
  [aux_sym_column_constraint_token7] = "STORED",
  [aux_sym_column_constraint_token8] = "BY_DEFAULT",
  [aux_sym_column_constraint_token9] = "AS_IDENTITY",
  [aux_sym_column_constraint_token10] = "UNIQUE",
  [aux_sym_column_constraint_token11] = "PRIMARY_KEY",
  [aux_sym_column_constraint_token12] = "PRIMARY_KEY",
  [aux_sym_column_constraint_token13] = "REFERENCES",
  [aux_sym_column_type_token1] = "BIGINT",
  [aux_sym_column_type_token2] = "INT8",
  [aux_sym_column_type_token3] = "BIGSERIAL",
  [aux_sym_column_type_token4] = "SERIAL8",
  [aux_sym_column_type_token5] = "BIT",
  [aux_sym_column_type_token6] = "BIT_VARYING",
  [aux_sym_column_type_token7] = "VARBIT",
  [aux_sym_column_type_token8] = "BOOLEAN",
  [aux_sym_column_type_token9] = "BOOL",
  [aux_sym_column_type_token10] = "BOX",
  [aux_sym_column_type_token11] = "BYTEA",
  [aux_sym_column_type_token12] = "CHARACTER",
  [aux_sym_column_type_token13] = "CHAR",
  [aux_sym_column_type_token14] = "VARCHAR",
  [aux_sym_column_type_token15] = "CIDR",
  [aux_sym_column_type_token16] = "CIRCLE",
  [aux_sym_column_type_token17] = "DATE",
  [aux_sym_column_type_token18] = "DOUBLE_PRECISION",
  [aux_sym_column_type_token19] = "DOUBLE_PRECISION",
  [aux_sym_column_type_token20] = "FLOAT8",
  [aux_sym_column_type_token21] = "INET",
  [aux_sym_column_type_token22] = "INTEGER",
  [aux_sym_column_type_token23] = "INT",
  [aux_sym_column_type_token24] = "INT4",
  [aux_sym_column_type_token25] = "INTERVAL",
  [aux_sym_column_type_token26] = "JSON",
  [aux_sym_column_type_token27] = "JSONB",
  [aux_sym_column_type_token28] = "LINE",
  [aux_sym_column_type_token29] = "LSEG",
  [aux_sym_column_type_token30] = "MACADDR",
  [aux_sym_column_type_token31] = "MACADDR8",
  [aux_sym_column_type_token32] = "MONEY",
  [aux_sym_column_type_token33] = "NUMERIC",
  [aux_sym_column_type_token34] = "DECIMAL",
  [aux_sym_column_type_token35] = "PATH",
  [aux_sym_column_type_token36] = "PG_LSN",
  [aux_sym_column_type_token37] = "POINT",
  [aux_sym_column_type_token38] = "POLYGON",
  [aux_sym_column_type_token39] = "REAL",
  [aux_sym_column_type_token40] = "FLOAT4",
  [aux_sym_column_type_token41] = "SMALLINT",
  [aux_sym_column_type_token42] = "INT2",
  [aux_sym_column_type_token43] = "SMALLSERIAL",
  [aux_sym_column_type_token44] = "SERIAL2",
  [aux_sym_column_type_token45] = "SERIAL",
  [aux_sym_column_type_token46] = "SERIAL4",
  [aux_sym_column_type_token47] = "TEXT",
  [aux_sym_column_type_token48] = "TIME",
  [aux_sym_column_type_token49] = "WITHOUT_TIME_ZONE",
  [aux_sym_column_type_token50] = "WITHOUT_TIME_ZONE",
  [aux_sym_column_type_token51] = "WITH_TIME_ZONE",
  [aux_sym_column_type_token52] = "TIMETZ",
  [aux_sym_column_type_token53] = "TIMESTAMP",
  [aux_sym_column_type_token54] = "TIMESTAMPTZ",
  [aux_sym_column_type_token55] = "TSQUERY",
  [aux_sym_column_type_token56] = "TSVECTOR",
  [aux_sym_column_type_token57] = "UUID",
  [aux_sym_column_type_token58] = "XML",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__quoted_identifier_token1] = "_quoted_identifier_token1",
  [anon_sym_DQUOTE_DQUOTE] = "\"\"",
  [sym__unquoted_identifier] = "_unquoted_identifier",
  [sym_number] = "number",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_SQUOTE_SQUOTE] = "''",
  [aux_sym_boolean_token1] = "TRUE",
  [aux_sym_boolean_token2] = "FALSE",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_cast_expression_token1] = "::",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_expression] = "expression",
  [sym_create_statement] = "create_statement",
  [sym_create_table_statement] = "create_table_statement",
  [sym_column_def] = "column_def",
  [sym_column_constraint] = "column_constraint",
  [sym_column_type] = "column_type",
  [sym_identifier] = "identifier",
  [sym__quoted_identifier] = "_quoted_identifier",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_null] = "null",
  [sym_array] = "array",
  [sym_object] = "object",
  [sym_object_field] = "object_field",
  [sym_function_call] = "function_call",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_cast_expression] = "cast_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_table_statement_repeat1] = "create_table_statement_repeat1",
  [aux_sym_column_def_repeat1] = "column_def_repeat1",
  [aux_sym_column_constraint_repeat1] = "column_constraint_repeat1",
  [aux_sym__quoted_identifier_repeat1] = "_quoted_identifier_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [anon_alias_sym_CHARACTER_VARYING] = "CHARACTER_VARYING",
  [anon_alias_sym_DEFAULT] = "DEFAULT",
  [anon_alias_sym_GENERATED_ALWAYS_AS] = "GENERATED_ALWAYS_AS",
  [anon_alias_sym_NOT_NULL] = "NOT_NULL",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_create_table_statement_token1] = aux_sym_create_table_statement_token1,
  [aux_sym_create_table_statement_token2] = aux_sym_create_table_statement_token2,
  [aux_sym_create_table_statement_token3] = aux_sym_create_table_statement_token3,
  [aux_sym_create_table_statement_token4] = aux_sym_create_table_statement_token4,
  [aux_sym_create_table_statement_token5] = aux_sym_create_table_statement_token5,
  [aux_sym_create_table_statement_token6] = aux_sym_create_table_statement_token5,
  [aux_sym_create_table_statement_token7] = aux_sym_create_table_statement_token5,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_column_constraint_token1] = aux_sym_column_constraint_token1,
  [aux_sym_column_constraint_token2] = aux_sym_column_constraint_token2,
  [aux_sym_column_constraint_token3] = aux_sym_column_constraint_token3,
  [aux_sym_column_constraint_token4] = aux_sym_column_constraint_token4,
  [aux_sym_column_constraint_token5] = aux_sym_column_constraint_token5,
  [aux_sym_column_constraint_token6] = aux_sym_column_constraint_token6,
  [aux_sym_column_constraint_token7] = aux_sym_column_constraint_token7,
  [aux_sym_column_constraint_token8] = aux_sym_column_constraint_token3,
  [aux_sym_column_constraint_token9] = aux_sym_column_constraint_token6,
  [aux_sym_column_constraint_token10] = aux_sym_column_constraint_token10,
  [aux_sym_column_constraint_token11] = aux_sym_column_constraint_token11,
  [aux_sym_column_constraint_token12] = aux_sym_column_constraint_token11,
  [aux_sym_column_constraint_token13] = aux_sym_column_constraint_token13,
  [aux_sym_column_type_token1] = aux_sym_column_type_token1,
  [aux_sym_column_type_token2] = aux_sym_column_type_token2,
  [aux_sym_column_type_token3] = aux_sym_column_type_token3,
  [aux_sym_column_type_token4] = aux_sym_column_type_token4,
  [aux_sym_column_type_token5] = aux_sym_column_type_token5,
  [aux_sym_column_type_token6] = aux_sym_column_type_token6,
  [aux_sym_column_type_token7] = aux_sym_column_type_token7,
  [aux_sym_column_type_token8] = aux_sym_column_type_token8,
  [aux_sym_column_type_token9] = aux_sym_column_type_token9,
  [aux_sym_column_type_token10] = aux_sym_column_type_token10,
  [aux_sym_column_type_token11] = aux_sym_column_type_token11,
  [aux_sym_column_type_token12] = aux_sym_column_type_token12,
  [aux_sym_column_type_token13] = aux_sym_column_type_token13,
  [aux_sym_column_type_token14] = aux_sym_column_type_token14,
  [aux_sym_column_type_token15] = aux_sym_column_type_token15,
  [aux_sym_column_type_token16] = aux_sym_column_type_token16,
  [aux_sym_column_type_token17] = aux_sym_column_type_token17,
  [aux_sym_column_type_token18] = aux_sym_column_type_token18,
  [aux_sym_column_type_token19] = aux_sym_column_type_token18,
  [aux_sym_column_type_token20] = aux_sym_column_type_token20,
  [aux_sym_column_type_token21] = aux_sym_column_type_token21,
  [aux_sym_column_type_token22] = aux_sym_column_type_token22,
  [aux_sym_column_type_token23] = aux_sym_column_type_token23,
  [aux_sym_column_type_token24] = aux_sym_column_type_token24,
  [aux_sym_column_type_token25] = aux_sym_column_type_token25,
  [aux_sym_column_type_token26] = aux_sym_column_type_token26,
  [aux_sym_column_type_token27] = aux_sym_column_type_token27,
  [aux_sym_column_type_token28] = aux_sym_column_type_token28,
  [aux_sym_column_type_token29] = aux_sym_column_type_token29,
  [aux_sym_column_type_token30] = aux_sym_column_type_token30,
  [aux_sym_column_type_token31] = aux_sym_column_type_token31,
  [aux_sym_column_type_token32] = aux_sym_column_type_token32,
  [aux_sym_column_type_token33] = aux_sym_column_type_token33,
  [aux_sym_column_type_token34] = aux_sym_column_type_token34,
  [aux_sym_column_type_token35] = aux_sym_column_type_token35,
  [aux_sym_column_type_token36] = aux_sym_column_type_token36,
  [aux_sym_column_type_token37] = aux_sym_column_type_token37,
  [aux_sym_column_type_token38] = aux_sym_column_type_token38,
  [aux_sym_column_type_token39] = aux_sym_column_type_token39,
  [aux_sym_column_type_token40] = aux_sym_column_type_token40,
  [aux_sym_column_type_token41] = aux_sym_column_type_token41,
  [aux_sym_column_type_token42] = aux_sym_column_type_token42,
  [aux_sym_column_type_token43] = aux_sym_column_type_token43,
  [aux_sym_column_type_token44] = aux_sym_column_type_token44,
  [aux_sym_column_type_token45] = aux_sym_column_type_token45,
  [aux_sym_column_type_token46] = aux_sym_column_type_token46,
  [aux_sym_column_type_token47] = aux_sym_column_type_token47,
  [aux_sym_column_type_token48] = aux_sym_column_type_token48,
  [aux_sym_column_type_token49] = aux_sym_column_type_token49,
  [aux_sym_column_type_token50] = aux_sym_column_type_token49,
  [aux_sym_column_type_token51] = aux_sym_column_type_token51,
  [aux_sym_column_type_token52] = aux_sym_column_type_token52,
  [aux_sym_column_type_token53] = aux_sym_column_type_token53,
  [aux_sym_column_type_token54] = aux_sym_column_type_token54,
  [aux_sym_column_type_token55] = aux_sym_column_type_token55,
  [aux_sym_column_type_token56] = aux_sym_column_type_token56,
  [aux_sym_column_type_token57] = aux_sym_column_type_token57,
  [aux_sym_column_type_token58] = aux_sym_column_type_token58,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__quoted_identifier_token1] = aux_sym__quoted_identifier_token1,
  [anon_sym_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE,
  [sym__unquoted_identifier] = sym__unquoted_identifier,
  [sym_number] = sym_number,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_SQUOTE_SQUOTE] = anon_sym_SQUOTE_SQUOTE,
  [aux_sym_boolean_token1] = aux_sym_boolean_token1,
  [aux_sym_boolean_token2] = aux_sym_boolean_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_cast_expression_token1] = aux_sym_cast_expression_token1,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_expression] = sym_expression,
  [sym_create_statement] = sym_create_statement,
  [sym_create_table_statement] = sym_create_table_statement,
  [sym_column_def] = sym_column_def,
  [sym_column_constraint] = sym_column_constraint,
  [sym_column_type] = sym_column_type,
  [sym_identifier] = sym_identifier,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_null] = sym_null,
  [sym_array] = sym_array,
  [sym_object] = sym_object,
  [sym_object_field] = sym_object_field,
  [sym_function_call] = sym_function_call,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_cast_expression] = sym_cast_expression,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_table_statement_repeat1] = aux_sym_create_table_statement_repeat1,
  [aux_sym_column_def_repeat1] = aux_sym_column_def_repeat1,
  [aux_sym_column_constraint_repeat1] = aux_sym_column_constraint_repeat1,
  [aux_sym__quoted_identifier_repeat1] = aux_sym__quoted_identifier_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [anon_alias_sym_CHARACTER_VARYING] = anon_alias_sym_CHARACTER_VARYING,
  [anon_alias_sym_DEFAULT] = anon_alias_sym_DEFAULT,
  [anon_alias_sym_GENERATED_ALWAYS_AS] = anon_alias_sym_GENERATED_ALWAYS_AS,
  [anon_alias_sym_NOT_NULL] = anon_alias_sym_NOT_NULL,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_table_statement_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_table_statement_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_table_statement_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_table_statement_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_table_statement_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_table_statement_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_create_table_statement_token7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_constraint_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token2] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token3] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token4] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token5] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token6] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token7] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token8] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token10] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token11] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token12] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token13] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token14] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token15] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token16] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token17] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token18] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token19] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token20] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token21] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token22] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token23] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token24] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token25] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token26] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token27] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token28] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token29] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token30] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token31] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token32] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token33] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token34] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token35] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token36] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token37] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token38] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token39] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token40] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token41] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token42] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token43] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token44] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token45] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token46] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token47] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token48] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token49] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token50] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token51] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token52] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token53] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token54] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token55] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token56] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token57] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_column_type_token58] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__quoted_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unquoted_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_boolean_token2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cast_expression_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_create_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_create_table_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_column_def] = {
    .visible = true,
    .named = true,
  },
  [sym_column_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_column_type] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__quoted_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_object_field] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_cast_expression] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_table_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_column_constraint_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_CHARACTER_VARYING] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_DEFAULT] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_GENERATED_ALWAYS_AS] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_NOT_NULL] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = aux_sym_column_type_token6,
  },
  [2] = {
    [0] = anon_alias_sym_CHARACTER_VARYING,
    [1] = anon_alias_sym_CHARACTER_VARYING,
  },
  [3] = {
    [0] = anon_alias_sym_NOT_NULL,
    [1] = anon_alias_sym_NOT_NULL,
  },
  [4] = {
    [0] = anon_alias_sym_DEFAULT,
  },
  [5] = {
    [2] = aux_sym_column_type_token49,
  },
  [6] = {
    [2] = aux_sym_column_type_token51,
    [3] = aux_sym_column_type_token51,
  },
  [7] = {
    [5] = aux_sym_column_type_token49,
  },
  [8] = {
    [5] = aux_sym_column_type_token51,
    [6] = aux_sym_column_type_token51,
  },
  [9] = {
    [0] = anon_alias_sym_GENERATED_ALWAYS_AS,
    [1] = anon_alias_sym_GENERATED_ALWAYS_AS,
    [2] = anon_alias_sym_GENERATED_ALWAYS_AS,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(269);
      if (lookahead == '"') ADVANCE(356);
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == ')') ADVANCE(281);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(387);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == ';') ADVANCE(270);
      if (lookahead == '[') ADVANCE(379);
      if (lookahead == ']') ADVANCE(380);
      if (lookahead == '{') ADVANCE(381);
      if (lookahead == '}') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(113);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(108);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(11);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(255);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(12);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(59);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(224);
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(61);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(13);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(18);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(64);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(14);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(16);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(190);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(358);
      if (lookahead != 0) ADVANCE(357);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '\'') ADVANCE(372);
      if (lookahead == ')') ADVANCE(281);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(387);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '[') ADVANCE(379);
      if (lookahead == ']') ADVANCE(380);
      if (lookahead == '{') ADVANCE(381);
      if (lookahead == '}') ADVANCE(382);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(360);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(369);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(366);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == ':') ADVANCE(383);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(362);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(373);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0) ADVANCE(374);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == ')') ADVANCE(281);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(387);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == ']') ADVANCE(380);
      if (lookahead == '}') ADVANCE(382);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(114);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(107);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(11);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(146);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(60);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(224);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(126);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(13);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(181);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(19);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(62);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(78);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(170);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(36);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(158);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(279);
      if (lookahead == ')') ADVANCE(281);
      if (lookahead == '*') ADVANCE(385);
      if (lookahead == '+') ADVANCE(387);
      if (lookahead == ',') ADVANCE(280);
      if (lookahead == '-') ADVANCE(388);
      if (lookahead == '/') ADVANCE(386);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ']') ADVANCE(380);
      if (lookahead == '}') ADVANCE(382);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(135);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(263);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(111);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(77);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(60);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(182);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(210);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(81);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(169);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(37);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '4') ADVANCE(336);
      if (lookahead == '8') ADVANCE(316);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(389);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(148);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(237);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(46);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(147);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(175);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(40);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(157);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(248);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(307);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(226);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(10);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(128);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(247);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(159);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(140);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(151);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(166);
      END_STATE();
    case 27:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(229);
      END_STATE();
    case 28:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(204);
      END_STATE();
    case 29:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 30:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 31:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(143);
      END_STATE();
    case 32:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(144);
      END_STATE();
    case 33:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(200);
      END_STATE();
    case 34:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 35:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 36:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(203);
      END_STATE();
    case 37:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 38:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(241);
      END_STATE();
    case 39:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(243);
      END_STATE();
    case 40:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(153);
      END_STATE();
    case 41:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 42:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(124);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(112);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 43:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(155);
      END_STATE();
    case 44:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(134);
      END_STATE();
    case 45:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(329);
      END_STATE();
    case 46:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(119);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 47:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 49:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(244);
      END_STATE();
    case 50:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(91);
      END_STATE();
    case 51:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(154);
      END_STATE();
    case 52:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(242);
      END_STATE();
    case 53:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(353);
      END_STATE();
    case 54:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(289);
      END_STATE();
    case 55:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(286);
      END_STATE();
    case 56:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(58);
      END_STATE();
    case 57:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(197);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(199);
      END_STATE();
    case 59:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(79);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(275);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(172);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 64:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(205);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(25);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 65:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(313);
      END_STATE();
    case 67:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(324);
      END_STATE();
    case 68:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(344);
      END_STATE();
    case 69:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(377);
      END_STATE();
    case 70:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(346);
      END_STATE();
    case 71:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(378);
      END_STATE();
    case 72:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(274);
      END_STATE();
    case 73:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 74:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 75:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(314);
      END_STATE();
    case 76:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(293);
      END_STATE();
    case 77:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 78:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(256);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(160);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(193);
      END_STATE();
    case 79:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 80:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 81:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 82:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 83:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 84:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(48);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 85:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 86:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(319);
      END_STATE();
    case 87:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 88:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 90:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 91:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 92:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 93:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 94:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 95:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 96:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 97:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 98:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 99:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 100:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 101:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(90);
      END_STATE();
    case 102:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(325);
      END_STATE();
    case 103:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 104:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(95);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(253);
      END_STATE();
    case 105:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(129);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(301);
      END_STATE();
    case 106:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(187);
      END_STATE();
    case 107:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(22);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 108:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(22);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(57);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(82);
      END_STATE();
    case 109:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(331);
      END_STATE();
    case 110:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(347);
      END_STATE();
    case 111:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(80);
      END_STATE();
    case 112:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(33);
      END_STATE();
    case 113:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(291);
      END_STATE();
    case 114:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(105);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(183);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(245);
      END_STATE();
    case 115:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(194);
      END_STATE();
    case 116:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 117:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 118:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 119:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(236);
      END_STATE();
    case 121:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(171);
      END_STATE();
    case 122:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 123:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 124:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(232);
      END_STATE();
    case 125:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 126:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(173);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(65);
      END_STATE();
    case 127:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 128:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(177);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 129:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(178);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(98);
      END_STATE();
    case 130:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 131:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(180);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(99);
      END_STATE();
    case 132:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 133:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 134:
      if (lookahead == 'K' ||
          lookahead == 'k') ADVANCE(284);
      END_STATE();
    case 135:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      END_STATE();
    case 136:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(254);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(288);
      END_STATE();
    case 137:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(354);
      END_STATE();
    case 138:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(305);
      END_STATE();
    case 139:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(282);
      END_STATE();
    case 140:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(335);
      END_STATE();
    case 141:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 142:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(330);
      END_STATE();
    case 143:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(321);
      END_STATE();
    case 144:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(299);
      END_STATE();
    case 145:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(339);
      END_STATE();
    case 146:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 147:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(223);
      END_STATE();
    case 148:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(220);
      END_STATE();
    case 149:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 150:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(139);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(97);
      END_STATE();
    case 151:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(156);
      END_STATE();
    case 152:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 153:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 154:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(73);
      END_STATE();
    case 155:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      END_STATE();
    case 156:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(131);
      END_STATE();
    case 157:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(191);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(228);
      END_STATE();
    case 158:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 159:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 160:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 161:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 162:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 163:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 164:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(322);
      END_STATE();
    case 165:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(332);
      END_STATE();
    case 166:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(304);
      END_STATE();
    case 167:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(334);
      END_STATE();
    case 168:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(315);
      END_STATE();
    case 169:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 170:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(115);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(116);
      END_STATE();
    case 171:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 172:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 173:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 174:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 175:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 176:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(246);
      END_STATE();
    case 177:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 178:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 179:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 180:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 181:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(150);
      END_STATE();
    case 182:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(225);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(149);
      END_STATE();
    case 183:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(138);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(306);
      END_STATE();
    case 184:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 185:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(211);
      END_STATE();
    case 186:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 187:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 188:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(168);
      END_STATE();
    case 189:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 190:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 191:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(273);
      END_STATE();
    case 192:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(349);
      END_STATE();
    case 193:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(250);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(87);
      END_STATE();
    case 194:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(251);
      END_STATE();
    case 195:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(42);
      END_STATE();
    case 196:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(309);
      END_STATE();
    case 197:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 198:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(318);
      END_STATE();
    case 199:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(326);
      END_STATE();
    case 200:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(310);
      END_STATE();
    case 201:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(352);
      END_STATE();
    case 202:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(308);
      END_STATE();
    case 203:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 204:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(259);
      END_STATE();
    case 205:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 206:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 207:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 208:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(123);
      END_STATE();
    case 209:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 210:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 211:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 212:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 213:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 214:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 215:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 216:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 217:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(287);
      END_STATE();
    case 218:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(278);
      END_STATE();
    case 219:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(296);
      END_STATE();
    case 220:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(165);
      END_STATE();
    case 221:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(238);
      END_STATE();
    case 222:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(130);
      END_STATE();
    case 223:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(71);
      END_STATE();
    case 224:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(184);
      END_STATE();
    case 225:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(277);
      END_STATE();
    case 226:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(109);
      END_STATE();
    case 227:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(317);
      END_STATE();
    case 228:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(343);
      END_STATE();
    case 229:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 230:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(333);
      END_STATE();
    case 231:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(297);
      END_STATE();
    case 232:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(303);
      END_STATE();
    case 233:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(285);
      END_STATE();
    case 234:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(345);
      END_STATE();
    case 235:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(337);
      END_STATE();
    case 236:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(110);
      END_STATE();
    case 237:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(66);
      END_STATE();
    case 238:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 239:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(261);
      END_STATE();
    case 240:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(23);
      END_STATE();
    case 241:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(74);
      END_STATE();
    case 242:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(96);
      END_STATE();
    case 243:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(88);
      END_STATE();
    case 244:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      END_STATE();
    case 245:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 246:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(125);
      END_STATE();
    case 247:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(152);
      END_STATE();
    case 248:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 249:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(234);
      END_STATE();
    case 250:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(94);
      END_STATE();
    case 251:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 252:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 253:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(31);
      END_STATE();
    case 254:
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(21);
      END_STATE();
    case 255:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(117);
      END_STATE();
    case 256:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(228);
      END_STATE();
    case 257:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(295);
      END_STATE();
    case 258:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(328);
      END_STATE();
    case 259:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(294);
      END_STATE();
    case 260:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(351);
      END_STATE();
    case 261:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(292);
      END_STATE();
    case 262:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(272);
      END_STATE();
    case 263:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(290);
      END_STATE();
    case 264:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(106);
      END_STATE();
    case 265:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(217);
      END_STATE();
    case 266:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 267:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(348);
      END_STATE();
    case 268:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(350);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token2);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(213);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token4);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token5);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token6);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token7);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_column_constraint_token1);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_column_constraint_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_column_constraint_token2);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_column_constraint_token3);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_column_constraint_token4);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_column_constraint_token5);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_column_constraint_token6);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_column_constraint_token7);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_column_constraint_token8);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_column_constraint_token8);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(92);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_column_constraint_token9);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_column_constraint_token10);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_column_constraint_token11);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_column_constraint_token12);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_column_constraint_token13);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_column_type_token1);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_column_type_token2);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_column_type_token3);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_column_type_token4);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_column_type_token5);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_column_type_token6);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_column_type_token7);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_column_type_token8);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_column_type_token9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_column_type_token10);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_column_type_token11);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_column_type_token12);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_column_type_token13);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_column_type_token14);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_column_type_token15);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_column_type_token16);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(aux_sym_column_type_token17);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(aux_sym_column_type_token18);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(aux_sym_column_type_token19);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_column_type_token20);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_column_type_token21);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_column_type_token22);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_column_type_token23);
      if (lookahead == '2') ADVANCE(338);
      if (lookahead == '4') ADVANCE(320);
      if (lookahead == '8') ADVANCE(298);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_column_type_token24);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_column_type_token25);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_column_type_token26);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(323);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_column_type_token27);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_column_type_token28);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_column_type_token29);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_column_type_token30);
      if (lookahead == '8') ADVANCE(327);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_column_type_token31);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_column_type_token32);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_column_type_token33);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_column_type_token34);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_column_type_token35);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_column_type_token36);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_column_type_token37);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_column_type_token38);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(aux_sym_column_type_token39);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(aux_sym_column_type_token40);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_column_type_token41);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_column_type_token42);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(aux_sym_column_type_token43);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_column_type_token44);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_column_type_token45);
      if (lookahead == '2') ADVANCE(340);
      if (lookahead == '4') ADVANCE(342);
      if (lookahead == '8') ADVANCE(300);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(aux_sym_column_type_token46);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_column_type_token47);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_column_type_token48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(240);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(267);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_column_type_token49);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_column_type_token50);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_column_type_token51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_column_type_token52);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_column_type_token53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(268);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_column_type_token54);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_column_type_token55);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_column_type_token56);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_column_type_token57);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_column_type_token58);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(359);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(357);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(370);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      if (lookahead == '\'') ADVANCE(376);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(374);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_SQUOTE_SQUOTE);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(aux_sym_boolean_token1);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(aux_sym_boolean_token2);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(aux_sym_cast_expression_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 7},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 7},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 7},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 7},
  [30] = {.lex_state = 7},
  [31] = {.lex_state = 7},
  [32] = {.lex_state = 7},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 7},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 7},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 7},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 3},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 3},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 5},
  [96] = {.lex_state = 3},
  [97] = {.lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 7},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 3},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [aux_sym_create_table_statement_token1] = ACTIONS(1),
    [aux_sym_create_table_statement_token2] = ACTIONS(1),
    [aux_sym_create_table_statement_token3] = ACTIONS(1),
    [aux_sym_create_table_statement_token4] = ACTIONS(1),
    [aux_sym_create_table_statement_token5] = ACTIONS(1),
    [aux_sym_create_table_statement_token6] = ACTIONS(1),
    [aux_sym_create_table_statement_token7] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_column_constraint_token1] = ACTIONS(1),
    [aux_sym_column_constraint_token2] = ACTIONS(1),
    [aux_sym_column_constraint_token3] = ACTIONS(1),
    [aux_sym_column_constraint_token4] = ACTIONS(1),
    [aux_sym_column_constraint_token5] = ACTIONS(1),
    [aux_sym_column_constraint_token6] = ACTIONS(1),
    [aux_sym_column_constraint_token7] = ACTIONS(1),
    [aux_sym_column_constraint_token8] = ACTIONS(1),
    [aux_sym_column_constraint_token9] = ACTIONS(1),
    [aux_sym_column_constraint_token10] = ACTIONS(1),
    [aux_sym_column_constraint_token11] = ACTIONS(1),
    [aux_sym_column_constraint_token12] = ACTIONS(1),
    [aux_sym_column_constraint_token13] = ACTIONS(1),
    [aux_sym_column_type_token1] = ACTIONS(1),
    [aux_sym_column_type_token2] = ACTIONS(1),
    [aux_sym_column_type_token3] = ACTIONS(1),
    [aux_sym_column_type_token4] = ACTIONS(1),
    [aux_sym_column_type_token5] = ACTIONS(1),
    [aux_sym_column_type_token6] = ACTIONS(1),
    [aux_sym_column_type_token7] = ACTIONS(1),
    [aux_sym_column_type_token8] = ACTIONS(1),
    [aux_sym_column_type_token9] = ACTIONS(1),
    [aux_sym_column_type_token10] = ACTIONS(1),
    [aux_sym_column_type_token11] = ACTIONS(1),
    [aux_sym_column_type_token12] = ACTIONS(1),
    [aux_sym_column_type_token13] = ACTIONS(1),
    [aux_sym_column_type_token14] = ACTIONS(1),
    [aux_sym_column_type_token15] = ACTIONS(1),
    [aux_sym_column_type_token16] = ACTIONS(1),
    [aux_sym_column_type_token17] = ACTIONS(1),
    [aux_sym_column_type_token18] = ACTIONS(1),
    [aux_sym_column_type_token19] = ACTIONS(1),
    [aux_sym_column_type_token20] = ACTIONS(1),
    [aux_sym_column_type_token21] = ACTIONS(1),
    [aux_sym_column_type_token22] = ACTIONS(1),
    [aux_sym_column_type_token23] = ACTIONS(1),
    [aux_sym_column_type_token24] = ACTIONS(1),
    [aux_sym_column_type_token25] = ACTIONS(1),
    [aux_sym_column_type_token26] = ACTIONS(1),
    [aux_sym_column_type_token27] = ACTIONS(1),
    [aux_sym_column_type_token28] = ACTIONS(1),
    [aux_sym_column_type_token29] = ACTIONS(1),
    [aux_sym_column_type_token30] = ACTIONS(1),
    [aux_sym_column_type_token31] = ACTIONS(1),
    [aux_sym_column_type_token32] = ACTIONS(1),
    [aux_sym_column_type_token33] = ACTIONS(1),
    [aux_sym_column_type_token34] = ACTIONS(1),
    [aux_sym_column_type_token35] = ACTIONS(1),
    [aux_sym_column_type_token36] = ACTIONS(1),
    [aux_sym_column_type_token37] = ACTIONS(1),
    [aux_sym_column_type_token38] = ACTIONS(1),
    [aux_sym_column_type_token39] = ACTIONS(1),
    [aux_sym_column_type_token40] = ACTIONS(1),
    [aux_sym_column_type_token41] = ACTIONS(1),
    [aux_sym_column_type_token42] = ACTIONS(1),
    [aux_sym_column_type_token43] = ACTIONS(1),
    [aux_sym_column_type_token44] = ACTIONS(1),
    [aux_sym_column_type_token45] = ACTIONS(1),
    [aux_sym_column_type_token46] = ACTIONS(1),
    [aux_sym_column_type_token47] = ACTIONS(1),
    [aux_sym_column_type_token48] = ACTIONS(1),
    [aux_sym_column_type_token49] = ACTIONS(1),
    [aux_sym_column_type_token50] = ACTIONS(1),
    [aux_sym_column_type_token51] = ACTIONS(1),
    [aux_sym_column_type_token52] = ACTIONS(1),
    [aux_sym_column_type_token53] = ACTIONS(1),
    [aux_sym_column_type_token54] = ACTIONS(1),
    [aux_sym_column_type_token55] = ACTIONS(1),
    [aux_sym_column_type_token56] = ACTIONS(1),
    [aux_sym_column_type_token57] = ACTIONS(1),
    [aux_sym_column_type_token58] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE_SQUOTE] = ACTIONS(1),
    [aux_sym_boolean_token1] = ACTIONS(1),
    [aux_sym_boolean_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_cast_expression_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(172),
    [sym_statement] = STATE(106),
    [sym_create_statement] = STATE(126),
    [sym_create_table_statement] = STATE(127),
    [aux_sym_create_table_statement_token1] = ACTIONS(3),
  },
  [2] = {
    [aux_sym_create_table_statement_token6] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(5),
    [anon_sym_COMMA] = ACTIONS(5),
    [anon_sym_RPAREN] = ACTIONS(5),
    [aux_sym_column_constraint_token1] = ACTIONS(5),
    [aux_sym_column_constraint_token2] = ACTIONS(5),
    [aux_sym_column_constraint_token3] = ACTIONS(5),
    [aux_sym_column_constraint_token4] = ACTIONS(5),
    [aux_sym_column_constraint_token10] = ACTIONS(5),
    [aux_sym_column_constraint_token11] = ACTIONS(5),
    [aux_sym_column_constraint_token13] = ACTIONS(5),
    [aux_sym_column_type_token1] = ACTIONS(5),
    [aux_sym_column_type_token2] = ACTIONS(5),
    [aux_sym_column_type_token3] = ACTIONS(5),
    [aux_sym_column_type_token4] = ACTIONS(5),
    [aux_sym_column_type_token5] = ACTIONS(5),
    [aux_sym_column_type_token7] = ACTIONS(5),
    [aux_sym_column_type_token8] = ACTIONS(5),
    [aux_sym_column_type_token9] = ACTIONS(7),
    [aux_sym_column_type_token10] = ACTIONS(5),
    [aux_sym_column_type_token11] = ACTIONS(5),
    [aux_sym_column_type_token12] = ACTIONS(5),
    [aux_sym_column_type_token13] = ACTIONS(7),
    [aux_sym_column_type_token14] = ACTIONS(5),
    [aux_sym_column_type_token15] = ACTIONS(5),
    [aux_sym_column_type_token16] = ACTIONS(5),
    [aux_sym_column_type_token17] = ACTIONS(5),
    [aux_sym_column_type_token18] = ACTIONS(5),
    [aux_sym_column_type_token20] = ACTIONS(5),
    [aux_sym_column_type_token21] = ACTIONS(5),
    [aux_sym_column_type_token22] = ACTIONS(5),
    [aux_sym_column_type_token23] = ACTIONS(7),
    [aux_sym_column_type_token24] = ACTIONS(5),
    [aux_sym_column_type_token25] = ACTIONS(5),
    [aux_sym_column_type_token26] = ACTIONS(7),
    [aux_sym_column_type_token27] = ACTIONS(5),
    [aux_sym_column_type_token28] = ACTIONS(5),
    [aux_sym_column_type_token29] = ACTIONS(5),
    [aux_sym_column_type_token30] = ACTIONS(7),
    [aux_sym_column_type_token31] = ACTIONS(5),
    [aux_sym_column_type_token32] = ACTIONS(5),
    [aux_sym_column_type_token33] = ACTIONS(5),
    [aux_sym_column_type_token34] = ACTIONS(5),
    [aux_sym_column_type_token35] = ACTIONS(5),
    [aux_sym_column_type_token36] = ACTIONS(5),
    [aux_sym_column_type_token37] = ACTIONS(5),
    [aux_sym_column_type_token38] = ACTIONS(5),
    [aux_sym_column_type_token39] = ACTIONS(5),
    [aux_sym_column_type_token40] = ACTIONS(5),
    [aux_sym_column_type_token41] = ACTIONS(5),
    [aux_sym_column_type_token42] = ACTIONS(5),
    [aux_sym_column_type_token43] = ACTIONS(5),
    [aux_sym_column_type_token44] = ACTIONS(5),
    [aux_sym_column_type_token45] = ACTIONS(7),
    [aux_sym_column_type_token46] = ACTIONS(5),
    [aux_sym_column_type_token47] = ACTIONS(5),
    [aux_sym_column_type_token48] = ACTIONS(7),
    [aux_sym_column_type_token52] = ACTIONS(5),
    [aux_sym_column_type_token53] = ACTIONS(7),
    [aux_sym_column_type_token54] = ACTIONS(5),
    [aux_sym_column_type_token55] = ACTIONS(5),
    [aux_sym_column_type_token56] = ACTIONS(5),
    [aux_sym_column_type_token57] = ACTIONS(5),
    [aux_sym_column_type_token58] = ACTIONS(5),
    [anon_sym_RBRACK] = ACTIONS(5),
    [anon_sym_RBRACE] = ACTIONS(5),
    [anon_sym_COLON] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(5),
    [anon_sym_DASH] = ACTIONS(5),
    [aux_sym_cast_expression_token1] = ACTIONS(5),
  },
  [3] = {
    [aux_sym_create_table_statement_token6] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(9),
    [anon_sym_COMMA] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [aux_sym_column_constraint_token1] = ACTIONS(9),
    [aux_sym_column_constraint_token2] = ACTIONS(9),
    [aux_sym_column_constraint_token3] = ACTIONS(9),
    [aux_sym_column_constraint_token4] = ACTIONS(9),
    [aux_sym_column_constraint_token10] = ACTIONS(9),
    [aux_sym_column_constraint_token11] = ACTIONS(9),
    [aux_sym_column_constraint_token13] = ACTIONS(9),
    [aux_sym_column_type_token1] = ACTIONS(9),
    [aux_sym_column_type_token2] = ACTIONS(9),
    [aux_sym_column_type_token3] = ACTIONS(9),
    [aux_sym_column_type_token4] = ACTIONS(9),
    [aux_sym_column_type_token5] = ACTIONS(9),
    [aux_sym_column_type_token7] = ACTIONS(9),
    [aux_sym_column_type_token8] = ACTIONS(9),
    [aux_sym_column_type_token9] = ACTIONS(11),
    [aux_sym_column_type_token10] = ACTIONS(9),
    [aux_sym_column_type_token11] = ACTIONS(9),
    [aux_sym_column_type_token12] = ACTIONS(9),
    [aux_sym_column_type_token13] = ACTIONS(11),
    [aux_sym_column_type_token14] = ACTIONS(9),
    [aux_sym_column_type_token15] = ACTIONS(9),
    [aux_sym_column_type_token16] = ACTIONS(9),
    [aux_sym_column_type_token17] = ACTIONS(9),
    [aux_sym_column_type_token18] = ACTIONS(9),
    [aux_sym_column_type_token20] = ACTIONS(9),
    [aux_sym_column_type_token21] = ACTIONS(9),
    [aux_sym_column_type_token22] = ACTIONS(9),
    [aux_sym_column_type_token23] = ACTIONS(11),
    [aux_sym_column_type_token24] = ACTIONS(9),
    [aux_sym_column_type_token25] = ACTIONS(9),
    [aux_sym_column_type_token26] = ACTIONS(11),
    [aux_sym_column_type_token27] = ACTIONS(9),
    [aux_sym_column_type_token28] = ACTIONS(9),
    [aux_sym_column_type_token29] = ACTIONS(9),
    [aux_sym_column_type_token30] = ACTIONS(11),
    [aux_sym_column_type_token31] = ACTIONS(9),
    [aux_sym_column_type_token32] = ACTIONS(9),
    [aux_sym_column_type_token33] = ACTIONS(9),
    [aux_sym_column_type_token34] = ACTIONS(9),
    [aux_sym_column_type_token35] = ACTIONS(9),
    [aux_sym_column_type_token36] = ACTIONS(9),
    [aux_sym_column_type_token37] = ACTIONS(9),
    [aux_sym_column_type_token38] = ACTIONS(9),
    [aux_sym_column_type_token39] = ACTIONS(9),
    [aux_sym_column_type_token40] = ACTIONS(9),
    [aux_sym_column_type_token41] = ACTIONS(9),
    [aux_sym_column_type_token42] = ACTIONS(9),
    [aux_sym_column_type_token43] = ACTIONS(9),
    [aux_sym_column_type_token44] = ACTIONS(9),
    [aux_sym_column_type_token45] = ACTIONS(11),
    [aux_sym_column_type_token46] = ACTIONS(9),
    [aux_sym_column_type_token47] = ACTIONS(9),
    [aux_sym_column_type_token48] = ACTIONS(11),
    [aux_sym_column_type_token52] = ACTIONS(9),
    [aux_sym_column_type_token53] = ACTIONS(11),
    [aux_sym_column_type_token54] = ACTIONS(9),
    [aux_sym_column_type_token55] = ACTIONS(9),
    [aux_sym_column_type_token56] = ACTIONS(9),
    [aux_sym_column_type_token57] = ACTIONS(9),
    [aux_sym_column_type_token58] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_RBRACE] = ACTIONS(9),
    [anon_sym_COLON] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(9),
    [anon_sym_SLASH] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [aux_sym_cast_expression_token1] = ACTIONS(9),
  },
  [4] = {
    [aux_sym_create_table_statement_token6] = ACTIONS(13),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_COMMA] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(13),
    [aux_sym_column_constraint_token1] = ACTIONS(13),
    [aux_sym_column_constraint_token2] = ACTIONS(13),
    [aux_sym_column_constraint_token3] = ACTIONS(13),
    [aux_sym_column_constraint_token4] = ACTIONS(13),
    [aux_sym_column_constraint_token10] = ACTIONS(13),
    [aux_sym_column_constraint_token11] = ACTIONS(13),
    [aux_sym_column_constraint_token13] = ACTIONS(13),
    [aux_sym_column_type_token1] = ACTIONS(13),
    [aux_sym_column_type_token2] = ACTIONS(13),
    [aux_sym_column_type_token3] = ACTIONS(13),
    [aux_sym_column_type_token4] = ACTIONS(13),
    [aux_sym_column_type_token5] = ACTIONS(13),
    [aux_sym_column_type_token7] = ACTIONS(13),
    [aux_sym_column_type_token8] = ACTIONS(13),
    [aux_sym_column_type_token9] = ACTIONS(15),
    [aux_sym_column_type_token10] = ACTIONS(13),
    [aux_sym_column_type_token11] = ACTIONS(13),
    [aux_sym_column_type_token12] = ACTIONS(13),
    [aux_sym_column_type_token13] = ACTIONS(15),
    [aux_sym_column_type_token14] = ACTIONS(13),
    [aux_sym_column_type_token15] = ACTIONS(13),
    [aux_sym_column_type_token16] = ACTIONS(13),
    [aux_sym_column_type_token17] = ACTIONS(13),
    [aux_sym_column_type_token18] = ACTIONS(13),
    [aux_sym_column_type_token20] = ACTIONS(13),
    [aux_sym_column_type_token21] = ACTIONS(13),
    [aux_sym_column_type_token22] = ACTIONS(13),
    [aux_sym_column_type_token23] = ACTIONS(15),
    [aux_sym_column_type_token24] = ACTIONS(13),
    [aux_sym_column_type_token25] = ACTIONS(13),
    [aux_sym_column_type_token26] = ACTIONS(15),
    [aux_sym_column_type_token27] = ACTIONS(13),
    [aux_sym_column_type_token28] = ACTIONS(13),
    [aux_sym_column_type_token29] = ACTIONS(13),
    [aux_sym_column_type_token30] = ACTIONS(15),
    [aux_sym_column_type_token31] = ACTIONS(13),
    [aux_sym_column_type_token32] = ACTIONS(13),
    [aux_sym_column_type_token33] = ACTIONS(13),
    [aux_sym_column_type_token34] = ACTIONS(13),
    [aux_sym_column_type_token35] = ACTIONS(13),
    [aux_sym_column_type_token36] = ACTIONS(13),
    [aux_sym_column_type_token37] = ACTIONS(13),
    [aux_sym_column_type_token38] = ACTIONS(13),
    [aux_sym_column_type_token39] = ACTIONS(13),
    [aux_sym_column_type_token40] = ACTIONS(13),
    [aux_sym_column_type_token41] = ACTIONS(13),
    [aux_sym_column_type_token42] = ACTIONS(13),
    [aux_sym_column_type_token43] = ACTIONS(13),
    [aux_sym_column_type_token44] = ACTIONS(13),
    [aux_sym_column_type_token45] = ACTIONS(15),
    [aux_sym_column_type_token46] = ACTIONS(13),
    [aux_sym_column_type_token47] = ACTIONS(13),
    [aux_sym_column_type_token48] = ACTIONS(15),
    [aux_sym_column_type_token52] = ACTIONS(13),
    [aux_sym_column_type_token53] = ACTIONS(15),
    [aux_sym_column_type_token54] = ACTIONS(13),
    [aux_sym_column_type_token55] = ACTIONS(13),
    [aux_sym_column_type_token56] = ACTIONS(13),
    [aux_sym_column_type_token57] = ACTIONS(13),
    [aux_sym_column_type_token58] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(13),
    [anon_sym_RBRACE] = ACTIONS(13),
    [anon_sym_COLON] = ACTIONS(15),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(13),
    [anon_sym_DASH] = ACTIONS(13),
    [aux_sym_cast_expression_token1] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(19), 1,
      aux_sym_column_type_token5,
    ACTIONS(25), 1,
      aux_sym_column_type_token12,
    ACTIONS(27), 1,
      aux_sym_column_type_token13,
    ACTIONS(29), 1,
      aux_sym_column_type_token18,
    STATE(55), 1,
      sym_column_type,
    ACTIONS(31), 2,
      aux_sym_column_type_token33,
      aux_sym_column_type_token34,
    ACTIONS(33), 2,
      aux_sym_column_type_token48,
      aux_sym_column_type_token53,
    ACTIONS(21), 3,
      aux_sym_column_type_token7,
      aux_sym_column_type_token14,
      aux_sym_column_type_token25,
    ACTIONS(23), 5,
      aux_sym_column_type_token9,
      aux_sym_column_type_token23,
      aux_sym_column_type_token26,
      aux_sym_column_type_token30,
      aux_sym_column_type_token45,
    ACTIONS(17), 37,
      aux_sym_column_type_token1,
      aux_sym_column_type_token2,
      aux_sym_column_type_token3,
      aux_sym_column_type_token4,
      aux_sym_column_type_token8,
      aux_sym_column_type_token10,
      aux_sym_column_type_token11,
      aux_sym_column_type_token15,
      aux_sym_column_type_token16,
      aux_sym_column_type_token17,
      aux_sym_column_type_token20,
      aux_sym_column_type_token21,
      aux_sym_column_type_token22,
      aux_sym_column_type_token24,
      aux_sym_column_type_token27,
      aux_sym_column_type_token28,
      aux_sym_column_type_token29,
      aux_sym_column_type_token31,
      aux_sym_column_type_token32,
      aux_sym_column_type_token35,
      aux_sym_column_type_token36,
      aux_sym_column_type_token37,
      aux_sym_column_type_token38,
      aux_sym_column_type_token39,
      aux_sym_column_type_token40,
      aux_sym_column_type_token41,
      aux_sym_column_type_token42,
      aux_sym_column_type_token43,
      aux_sym_column_type_token44,
      aux_sym_column_type_token46,
      aux_sym_column_type_token47,
      aux_sym_column_type_token52,
      aux_sym_column_type_token54,
      aux_sym_column_type_token55,
      aux_sym_column_type_token56,
      aux_sym_column_type_token57,
      aux_sym_column_type_token58,
  [75] = 10,
    ACTIONS(19), 1,
      aux_sym_column_type_token5,
    ACTIONS(25), 1,
      aux_sym_column_type_token12,
    ACTIONS(27), 1,
      aux_sym_column_type_token13,
    ACTIONS(29), 1,
      aux_sym_column_type_token18,
    STATE(30), 1,
      sym_column_type,
    ACTIONS(31), 2,
      aux_sym_column_type_token33,
      aux_sym_column_type_token34,
    ACTIONS(33), 2,
      aux_sym_column_type_token48,
      aux_sym_column_type_token53,
    ACTIONS(21), 3,
      aux_sym_column_type_token7,
      aux_sym_column_type_token14,
      aux_sym_column_type_token25,
    ACTIONS(23), 5,
      aux_sym_column_type_token9,
      aux_sym_column_type_token23,
      aux_sym_column_type_token26,
      aux_sym_column_type_token30,
      aux_sym_column_type_token45,
    ACTIONS(17), 37,
      aux_sym_column_type_token1,
      aux_sym_column_type_token2,
      aux_sym_column_type_token3,
      aux_sym_column_type_token4,
      aux_sym_column_type_token8,
      aux_sym_column_type_token10,
      aux_sym_column_type_token11,
      aux_sym_column_type_token15,
      aux_sym_column_type_token16,
      aux_sym_column_type_token17,
      aux_sym_column_type_token20,
      aux_sym_column_type_token21,
      aux_sym_column_type_token22,
      aux_sym_column_type_token24,
      aux_sym_column_type_token27,
      aux_sym_column_type_token28,
      aux_sym_column_type_token29,
      aux_sym_column_type_token31,
      aux_sym_column_type_token32,
      aux_sym_column_type_token35,
      aux_sym_column_type_token36,
      aux_sym_column_type_token37,
      aux_sym_column_type_token38,
      aux_sym_column_type_token39,
      aux_sym_column_type_token40,
      aux_sym_column_type_token41,
      aux_sym_column_type_token42,
      aux_sym_column_type_token43,
      aux_sym_column_type_token44,
      aux_sym_column_type_token46,
      aux_sym_column_type_token47,
      aux_sym_column_type_token52,
      aux_sym_column_type_token54,
      aux_sym_column_type_token55,
      aux_sym_column_type_token56,
      aux_sym_column_type_token57,
      aux_sym_column_type_token58,
  [150] = 14,
    ACTIONS(35), 1,
      anon_sym_RPAREN,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(70), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [203] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(69), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [253] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(76), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [303] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(73), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [353] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(71), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [403] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(32), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [453] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(74), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [503] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(54), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [553] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(75), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [603] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(37), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [653] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(41), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [703] = 13,
    ACTIONS(37), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_SQUOTE,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(51), 1,
      anon_sym_LBRACE,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(26), 1,
      sym_identifier,
    STATE(72), 1,
      sym_expression,
    ACTIONS(47), 2,
      aux_sym_boolean_token1,
      aux_sym_boolean_token2,
    ACTIONS(53), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    STATE(46), 9,
      sym_string,
      sym_boolean,
      sym_null,
      sym_array,
      sym_object,
      sym_function_call,
      sym_binary_expression,
      sym_unary_expression,
      sym_cast_expression,
  [753] = 4,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(59), 1,
      aux_sym_column_type_token49,
    ACTIONS(61), 1,
      aux_sym_column_type_token51,
    ACTIONS(55), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [782] = 3,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      aux_sym_column_type_token6,
    ACTIONS(55), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [808] = 3,
    ACTIONS(69), 1,
      aux_sym_column_type_token49,
    ACTIONS(71), 1,
      aux_sym_column_type_token51,
    ACTIONS(67), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [834] = 3,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 1,
      aux_sym_column_type_token6,
    ACTIONS(55), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [860] = 2,
    ACTIONS(77), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [883] = 2,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    ACTIONS(79), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [906] = 2,
    ACTIONS(83), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [929] = 2,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(85), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [952] = 2,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [975] = 1,
    ACTIONS(55), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [995] = 1,
    ACTIONS(89), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1015] = 1,
    ACTIONS(91), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1035] = 1,
    ACTIONS(93), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1055] = 1,
    ACTIONS(95), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1075] = 1,
    ACTIONS(97), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1095] = 1,
    ACTIONS(99), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1115] = 1,
    ACTIONS(101), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1135] = 1,
    ACTIONS(67), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1155] = 1,
    ACTIONS(103), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1175] = 1,
    ACTIONS(105), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1195] = 1,
    ACTIONS(107), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1215] = 1,
    ACTIONS(109), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1235] = 2,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(103), 15,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1257] = 1,
    ACTIONS(113), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1277] = 1,
    ACTIONS(115), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1297] = 1,
    ACTIONS(117), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1317] = 1,
    ACTIONS(119), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1337] = 1,
    ACTIONS(85), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1357] = 1,
    ACTIONS(121), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1377] = 1,
    ACTIONS(123), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1397] = 1,
    ACTIONS(125), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1417] = 1,
    ACTIONS(127), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1437] = 1,
    ACTIONS(129), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1457] = 1,
    ACTIONS(131), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1477] = 1,
    ACTIONS(133), 17,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
      anon_sym_RBRACK,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PLUS,
      anon_sym_DASH,
      aux_sym_cast_expression_token1,
  [1497] = 4,
    ACTIONS(139), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(135), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1521] = 10,
    ACTIONS(141), 1,
      aux_sym_create_table_statement_token6,
    ACTIONS(145), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(147), 1,
      aux_sym_column_constraint_token2,
    ACTIONS(149), 1,
      aux_sym_column_constraint_token3,
    ACTIONS(151), 1,
      aux_sym_column_constraint_token4,
    ACTIONS(153), 1,
      aux_sym_column_constraint_token10,
    ACTIONS(155), 1,
      aux_sym_column_constraint_token11,
    ACTIONS(157), 1,
      aux_sym_column_constraint_token13,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(57), 2,
      sym_column_constraint,
      aux_sym_column_def_repeat1,
  [1554] = 10,
    ACTIONS(159), 1,
      aux_sym_create_table_statement_token6,
    ACTIONS(164), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(167), 1,
      aux_sym_column_constraint_token2,
    ACTIONS(170), 1,
      aux_sym_column_constraint_token3,
    ACTIONS(173), 1,
      aux_sym_column_constraint_token4,
    ACTIONS(176), 1,
      aux_sym_column_constraint_token10,
    ACTIONS(179), 1,
      aux_sym_column_constraint_token11,
    ACTIONS(182), 1,
      aux_sym_column_constraint_token13,
    ACTIONS(162), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(56), 2,
      sym_column_constraint,
      aux_sym_column_def_repeat1,
  [1587] = 10,
    ACTIONS(141), 1,
      aux_sym_create_table_statement_token6,
    ACTIONS(145), 1,
      aux_sym_column_constraint_token1,
    ACTIONS(147), 1,
      aux_sym_column_constraint_token2,
    ACTIONS(149), 1,
      aux_sym_column_constraint_token3,
    ACTIONS(151), 1,
      aux_sym_column_constraint_token4,
    ACTIONS(153), 1,
      aux_sym_column_constraint_token10,
    ACTIONS(155), 1,
      aux_sym_column_constraint_token11,
    ACTIONS(157), 1,
      aux_sym_column_constraint_token13,
    ACTIONS(185), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(56), 2,
      sym_column_constraint,
      aux_sym_column_def_repeat1,
  [1620] = 2,
    ACTIONS(189), 1,
      anon_sym_LPAREN,
    ACTIONS(187), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1636] = 2,
    ACTIONS(193), 1,
      anon_sym_LPAREN,
    ACTIONS(191), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1652] = 2,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    ACTIONS(195), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1668] = 1,
    ACTIONS(195), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1681] = 1,
    ACTIONS(187), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1694] = 1,
    ACTIONS(199), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1707] = 1,
    ACTIONS(201), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1720] = 1,
    ACTIONS(191), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1733] = 1,
    ACTIONS(203), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1746] = 1,
    ACTIONS(205), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1759] = 1,
    ACTIONS(207), 10,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_column_constraint_token1,
      aux_sym_column_constraint_token2,
      aux_sym_column_constraint_token3,
      aux_sym_column_constraint_token4,
      aux_sym_column_constraint_token10,
      aux_sym_column_constraint_token11,
      aux_sym_column_constraint_token13,
  [1772] = 4,
    ACTIONS(139), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(209), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1789] = 6,
    ACTIONS(139), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(108), 1,
      aux_sym_array_repeat1,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1810] = 6,
    ACTIONS(139), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(100), 1,
      aux_sym_array_repeat1,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1831] = 4,
    ACTIONS(139), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(217), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [1847] = 4,
    ACTIONS(139), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1862] = 4,
    ACTIONS(139), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1877] = 4,
    ACTIONS(139), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1892] = 4,
    ACTIONS(139), 1,
      aux_sym_cast_expression_token1,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(137), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
  [1907] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(102), 1,
      sym_column_def,
  [1923] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(113), 1,
      sym_object_field,
    STATE(153), 1,
      sym_identifier,
  [1939] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(117), 1,
      sym_column_def,
  [1955] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(123), 1,
      sym_column_def,
  [1971] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(114), 1,
      sym_column_def,
  [1987] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(229), 1,
      aux_sym_create_table_statement_token5,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(142), 1,
      sym_identifier,
  [2003] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(5), 1,
      sym_identifier,
    STATE(115), 1,
      sym_column_def,
  [2019] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(130), 1,
      sym_object_field,
    STATE(153), 1,
      sym_identifier,
  [2035] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym__unquoted_identifier,
    ACTIONS(231), 1,
      aux_sym_create_table_statement_token5,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(139), 1,
      sym_identifier,
  [2051] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(158), 1,
      sym_identifier,
  [2064] = 4,
    ACTIONS(233), 1,
      anon_sym_SQUOTE,
    ACTIONS(235), 1,
      aux_sym_string_token1,
    ACTIONS(237), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(95), 1,
      aux_sym_string_repeat1,
  [2077] = 4,
    ACTIONS(3), 1,
      aux_sym_create_table_statement_token1,
    STATE(121), 1,
      sym_statement,
    STATE(126), 1,
      sym_create_statement,
    STATE(127), 1,
      sym_create_table_statement,
  [2090] = 3,
    ACTIONS(239), 1,
      anon_sym_COMMA,
    STATE(89), 1,
      aux_sym_array_repeat1,
    ACTIONS(209), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [2101] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(128), 1,
      sym_identifier,
  [2114] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(59), 1,
      sym_identifier,
  [2127] = 4,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(244), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(246), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(94), 1,
      aux_sym__quoted_identifier_repeat1,
  [2140] = 4,
    ACTIONS(248), 1,
      anon_sym_SQUOTE,
    ACTIONS(250), 1,
      aux_sym_string_token1,
    ACTIONS(252), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(87), 1,
      aux_sym_string_repeat1,
  [2153] = 4,
    ACTIONS(254), 1,
      anon_sym_DQUOTE,
    ACTIONS(256), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(258), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(99), 1,
      aux_sym__quoted_identifier_repeat1,
  [2166] = 4,
    ACTIONS(260), 1,
      anon_sym_SQUOTE,
    ACTIONS(262), 1,
      aux_sym_string_token1,
    ACTIONS(265), 1,
      anon_sym_SQUOTE_SQUOTE,
    STATE(95), 1,
      aux_sym_string_repeat1,
  [2179] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(148), 1,
      sym_identifier,
  [2192] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(119), 1,
      sym_identifier,
  [2205] = 4,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym__quoted_identifier,
    STATE(135), 1,
      sym_identifier,
  [2218] = 4,
    ACTIONS(268), 1,
      anon_sym_DQUOTE,
    ACTIONS(270), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(273), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(99), 1,
      aux_sym__quoted_identifier_repeat1,
  [2231] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(276), 1,
      anon_sym_RBRACK,
    STATE(89), 1,
      aux_sym_array_repeat1,
  [2241] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(280), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_table_statement_repeat1,
  [2251] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(101), 1,
      aux_sym_create_table_statement_repeat1,
  [2261] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_table_statement_repeat1,
  [2271] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(282), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_table_statement_repeat1,
  [2281] = 3,
    ACTIONS(286), 1,
      anon_sym_COMMA,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_table_statement_repeat1,
  [2291] = 3,
    ACTIONS(291), 1,
      ts_builtin_sym_end,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    STATE(111), 1,
      aux_sym_source_file_repeat1,
  [2301] = 3,
    ACTIONS(295), 1,
      anon_sym_COMMA,
    ACTIONS(298), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_column_constraint_repeat1,
  [2311] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    STATE(89), 1,
      aux_sym_array_repeat1,
  [2321] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(105), 1,
      aux_sym_create_table_statement_repeat1,
  [2331] = 3,
    ACTIONS(304), 1,
      anon_sym_COMMA,
    ACTIONS(307), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_object_repeat1,
  [2341] = 3,
    ACTIONS(293), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
    STATE(118), 1,
      aux_sym_source_file_repeat1,
  [2351] = 3,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
    STATE(107), 1,
      aux_sym_column_constraint_repeat1,
  [2361] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(317), 1,
      anon_sym_RBRACE,
    STATE(120), 1,
      aux_sym_object_repeat1,
  [2371] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(302), 1,
      anon_sym_RPAREN,
    STATE(103), 1,
      aux_sym_create_table_statement_repeat1,
  [2381] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(319), 1,
      anon_sym_RPAREN,
    STATE(109), 1,
      aux_sym_create_table_statement_repeat1,
  [2391] = 3,
    ACTIONS(321), 1,
      aux_sym_create_table_statement_token2,
    ACTIONS(323), 1,
      aux_sym_create_table_statement_token3,
    ACTIONS(325), 1,
      aux_sym_create_table_statement_token4,
  [2401] = 3,
    ACTIONS(278), 1,
      anon_sym_COMMA,
    ACTIONS(327), 1,
      anon_sym_RPAREN,
    STATE(104), 1,
      aux_sym_create_table_statement_repeat1,
  [2411] = 3,
    ACTIONS(329), 1,
      ts_builtin_sym_end,
    ACTIONS(331), 1,
      anon_sym_SEMI,
    STATE(118), 1,
      aux_sym_source_file_repeat1,
  [2421] = 3,
    ACTIONS(219), 1,
      anon_sym_RPAREN,
    ACTIONS(311), 1,
      anon_sym_COMMA,
    STATE(112), 1,
      aux_sym_column_constraint_repeat1,
  [2431] = 3,
    ACTIONS(315), 1,
      anon_sym_COMMA,
    ACTIONS(334), 1,
      anon_sym_RBRACE,
    STATE(110), 1,
      aux_sym_object_repeat1,
  [2441] = 1,
    ACTIONS(329), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2446] = 1,
    ACTIONS(336), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2451] = 1,
    ACTIONS(289), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2456] = 1,
    ACTIONS(338), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2461] = 1,
    ACTIONS(340), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2466] = 1,
    ACTIONS(342), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2471] = 1,
    ACTIONS(344), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2476] = 1,
    ACTIONS(298), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2481] = 1,
    ACTIONS(346), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2486] = 1,
    ACTIONS(307), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2491] = 2,
    ACTIONS(348), 1,
      aux_sym_column_constraint_token5,
    ACTIONS(350), 1,
      aux_sym_column_constraint_token8,
  [2498] = 1,
    ACTIONS(352), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2503] = 1,
    ACTIONS(354), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [2508] = 2,
    ACTIONS(356), 1,
      anon_sym_LPAREN,
    ACTIONS(358), 1,
      aux_sym_column_constraint_token9,
  [2515] = 1,
    ACTIONS(313), 1,
      anon_sym_RPAREN,
  [2519] = 1,
    ACTIONS(360), 1,
      sym_number,
  [2523] = 1,
    ACTIONS(362), 1,
      aux_sym_create_table_statement_token7,
  [2527] = 1,
    ACTIONS(364), 1,
      sym_number,
  [2531] = 1,
    ACTIONS(366), 1,
      anon_sym_LPAREN,
  [2535] = 1,
    ACTIONS(368), 1,
      aux_sym_create_table_statement_token6,
  [2539] = 1,
    ACTIONS(370), 1,
      aux_sym_column_constraint_token3,
  [2543] = 1,
    ACTIONS(372), 1,
      anon_sym_LPAREN,
  [2547] = 1,
    ACTIONS(374), 1,
      aux_sym_column_type_token50,
  [2551] = 1,
    ACTIONS(376), 1,
      aux_sym_create_table_statement_token6,
  [2555] = 1,
    ACTIONS(378), 1,
      aux_sym_column_constraint_token12,
  [2559] = 1,
    ACTIONS(380), 1,
      aux_sym_column_constraint_token9,
  [2563] = 1,
    ACTIONS(382), 1,
      aux_sym_column_type_token50,
  [2567] = 1,
    ACTIONS(384), 1,
      anon_sym_LPAREN,
  [2571] = 1,
    ACTIONS(386), 1,
      anon_sym_LPAREN,
  [2575] = 1,
    ACTIONS(388), 1,
      aux_sym_column_type_token50,
  [2579] = 1,
    ACTIONS(390), 1,
      aux_sym_column_type_token50,
  [2583] = 1,
    ACTIONS(392), 1,
      aux_sym_column_constraint_token6,
  [2587] = 1,
    ACTIONS(394), 1,
      anon_sym_COLON,
  [2591] = 1,
    ACTIONS(396), 1,
      anon_sym_RPAREN,
  [2595] = 1,
    ACTIONS(398), 1,
      anon_sym_LPAREN,
  [2599] = 1,
    ACTIONS(400), 1,
      aux_sym_column_constraint_token6,
  [2603] = 1,
    ACTIONS(402), 1,
      anon_sym_COMMA,
  [2607] = 1,
    ACTIONS(404), 1,
      anon_sym_LPAREN,
  [2611] = 1,
    ACTIONS(406), 1,
      aux_sym_column_constraint_token1,
  [2615] = 1,
    ACTIONS(408), 1,
      anon_sym_RPAREN,
  [2619] = 1,
    ACTIONS(410), 1,
      aux_sym_column_type_token48,
  [2623] = 1,
    ACTIONS(412), 1,
      aux_sym_create_table_statement_token4,
  [2627] = 1,
    ACTIONS(414), 1,
      aux_sym_column_type_token48,
  [2631] = 1,
    ACTIONS(416), 1,
      aux_sym_column_type_token48,
  [2635] = 1,
    ACTIONS(418), 1,
      sym_number,
  [2639] = 1,
    ACTIONS(420), 1,
      sym_number,
  [2643] = 1,
    ACTIONS(422), 1,
      aux_sym_column_type_token48,
  [2647] = 1,
    ACTIONS(424), 1,
      anon_sym_RPAREN,
  [2651] = 1,
    ACTIONS(426), 1,
      anon_sym_RPAREN,
  [2655] = 1,
    ACTIONS(428), 1,
      aux_sym_column_constraint_token7,
  [2659] = 1,
    ACTIONS(430), 1,
      sym_number,
  [2663] = 1,
    ACTIONS(432), 1,
      ts_builtin_sym_end,
  [2667] = 1,
    ACTIONS(434), 1,
      sym_number,
  [2671] = 1,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
  [2675] = 1,
    ACTIONS(438), 1,
      aux_sym_create_table_statement_token7,
  [2679] = 1,
    ACTIONS(440), 1,
      aux_sym_column_type_token19,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 75,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 203,
  [SMALL_STATE(9)] = 253,
  [SMALL_STATE(10)] = 303,
  [SMALL_STATE(11)] = 353,
  [SMALL_STATE(12)] = 403,
  [SMALL_STATE(13)] = 453,
  [SMALL_STATE(14)] = 503,
  [SMALL_STATE(15)] = 553,
  [SMALL_STATE(16)] = 603,
  [SMALL_STATE(17)] = 653,
  [SMALL_STATE(18)] = 703,
  [SMALL_STATE(19)] = 753,
  [SMALL_STATE(20)] = 782,
  [SMALL_STATE(21)] = 808,
  [SMALL_STATE(22)] = 834,
  [SMALL_STATE(23)] = 860,
  [SMALL_STATE(24)] = 883,
  [SMALL_STATE(25)] = 906,
  [SMALL_STATE(26)] = 929,
  [SMALL_STATE(27)] = 952,
  [SMALL_STATE(28)] = 975,
  [SMALL_STATE(29)] = 995,
  [SMALL_STATE(30)] = 1015,
  [SMALL_STATE(31)] = 1035,
  [SMALL_STATE(32)] = 1055,
  [SMALL_STATE(33)] = 1075,
  [SMALL_STATE(34)] = 1095,
  [SMALL_STATE(35)] = 1115,
  [SMALL_STATE(36)] = 1135,
  [SMALL_STATE(37)] = 1155,
  [SMALL_STATE(38)] = 1175,
  [SMALL_STATE(39)] = 1195,
  [SMALL_STATE(40)] = 1215,
  [SMALL_STATE(41)] = 1235,
  [SMALL_STATE(42)] = 1257,
  [SMALL_STATE(43)] = 1277,
  [SMALL_STATE(44)] = 1297,
  [SMALL_STATE(45)] = 1317,
  [SMALL_STATE(46)] = 1337,
  [SMALL_STATE(47)] = 1357,
  [SMALL_STATE(48)] = 1377,
  [SMALL_STATE(49)] = 1397,
  [SMALL_STATE(50)] = 1417,
  [SMALL_STATE(51)] = 1437,
  [SMALL_STATE(52)] = 1457,
  [SMALL_STATE(53)] = 1477,
  [SMALL_STATE(54)] = 1497,
  [SMALL_STATE(55)] = 1521,
  [SMALL_STATE(56)] = 1554,
  [SMALL_STATE(57)] = 1587,
  [SMALL_STATE(58)] = 1620,
  [SMALL_STATE(59)] = 1636,
  [SMALL_STATE(60)] = 1652,
  [SMALL_STATE(61)] = 1668,
  [SMALL_STATE(62)] = 1681,
  [SMALL_STATE(63)] = 1694,
  [SMALL_STATE(64)] = 1707,
  [SMALL_STATE(65)] = 1720,
  [SMALL_STATE(66)] = 1733,
  [SMALL_STATE(67)] = 1746,
  [SMALL_STATE(68)] = 1759,
  [SMALL_STATE(69)] = 1772,
  [SMALL_STATE(70)] = 1789,
  [SMALL_STATE(71)] = 1810,
  [SMALL_STATE(72)] = 1831,
  [SMALL_STATE(73)] = 1847,
  [SMALL_STATE(74)] = 1862,
  [SMALL_STATE(75)] = 1877,
  [SMALL_STATE(76)] = 1892,
  [SMALL_STATE(77)] = 1907,
  [SMALL_STATE(78)] = 1923,
  [SMALL_STATE(79)] = 1939,
  [SMALL_STATE(80)] = 1955,
  [SMALL_STATE(81)] = 1971,
  [SMALL_STATE(82)] = 1987,
  [SMALL_STATE(83)] = 2003,
  [SMALL_STATE(84)] = 2019,
  [SMALL_STATE(85)] = 2035,
  [SMALL_STATE(86)] = 2051,
  [SMALL_STATE(87)] = 2064,
  [SMALL_STATE(88)] = 2077,
  [SMALL_STATE(89)] = 2090,
  [SMALL_STATE(90)] = 2101,
  [SMALL_STATE(91)] = 2114,
  [SMALL_STATE(92)] = 2127,
  [SMALL_STATE(93)] = 2140,
  [SMALL_STATE(94)] = 2153,
  [SMALL_STATE(95)] = 2166,
  [SMALL_STATE(96)] = 2179,
  [SMALL_STATE(97)] = 2192,
  [SMALL_STATE(98)] = 2205,
  [SMALL_STATE(99)] = 2218,
  [SMALL_STATE(100)] = 2231,
  [SMALL_STATE(101)] = 2241,
  [SMALL_STATE(102)] = 2251,
  [SMALL_STATE(103)] = 2261,
  [SMALL_STATE(104)] = 2271,
  [SMALL_STATE(105)] = 2281,
  [SMALL_STATE(106)] = 2291,
  [SMALL_STATE(107)] = 2301,
  [SMALL_STATE(108)] = 2311,
  [SMALL_STATE(109)] = 2321,
  [SMALL_STATE(110)] = 2331,
  [SMALL_STATE(111)] = 2341,
  [SMALL_STATE(112)] = 2351,
  [SMALL_STATE(113)] = 2361,
  [SMALL_STATE(114)] = 2371,
  [SMALL_STATE(115)] = 2381,
  [SMALL_STATE(116)] = 2391,
  [SMALL_STATE(117)] = 2401,
  [SMALL_STATE(118)] = 2411,
  [SMALL_STATE(119)] = 2421,
  [SMALL_STATE(120)] = 2431,
  [SMALL_STATE(121)] = 2441,
  [SMALL_STATE(122)] = 2446,
  [SMALL_STATE(123)] = 2451,
  [SMALL_STATE(124)] = 2456,
  [SMALL_STATE(125)] = 2461,
  [SMALL_STATE(126)] = 2466,
  [SMALL_STATE(127)] = 2471,
  [SMALL_STATE(128)] = 2476,
  [SMALL_STATE(129)] = 2481,
  [SMALL_STATE(130)] = 2486,
  [SMALL_STATE(131)] = 2491,
  [SMALL_STATE(132)] = 2498,
  [SMALL_STATE(133)] = 2503,
  [SMALL_STATE(134)] = 2508,
  [SMALL_STATE(135)] = 2515,
  [SMALL_STATE(136)] = 2519,
  [SMALL_STATE(137)] = 2523,
  [SMALL_STATE(138)] = 2527,
  [SMALL_STATE(139)] = 2531,
  [SMALL_STATE(140)] = 2535,
  [SMALL_STATE(141)] = 2539,
  [SMALL_STATE(142)] = 2543,
  [SMALL_STATE(143)] = 2547,
  [SMALL_STATE(144)] = 2551,
  [SMALL_STATE(145)] = 2555,
  [SMALL_STATE(146)] = 2559,
  [SMALL_STATE(147)] = 2563,
  [SMALL_STATE(148)] = 2567,
  [SMALL_STATE(149)] = 2571,
  [SMALL_STATE(150)] = 2575,
  [SMALL_STATE(151)] = 2579,
  [SMALL_STATE(152)] = 2583,
  [SMALL_STATE(153)] = 2587,
  [SMALL_STATE(154)] = 2591,
  [SMALL_STATE(155)] = 2595,
  [SMALL_STATE(156)] = 2599,
  [SMALL_STATE(157)] = 2603,
  [SMALL_STATE(158)] = 2607,
  [SMALL_STATE(159)] = 2611,
  [SMALL_STATE(160)] = 2615,
  [SMALL_STATE(161)] = 2619,
  [SMALL_STATE(162)] = 2623,
  [SMALL_STATE(163)] = 2627,
  [SMALL_STATE(164)] = 2631,
  [SMALL_STATE(165)] = 2635,
  [SMALL_STATE(166)] = 2639,
  [SMALL_STATE(167)] = 2643,
  [SMALL_STATE(168)] = 2647,
  [SMALL_STATE(169)] = 2651,
  [SMALL_STATE(170)] = 2655,
  [SMALL_STATE(171)] = 2659,
  [SMALL_STATE(172)] = 2663,
  [SMALL_STATE(173)] = 2667,
  [SMALL_STATE(174)] = 2671,
  [SMALL_STATE(175)] = 2675,
  [SMALL_STATE(176)] = 2679,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [7] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 2, .production_id = 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 2, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 5, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cast_expression, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 4, .production_id = 6),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 4, .production_id = 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 5, .production_id = 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 6),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 7, .production_id = 7),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 7, .production_id = 8),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_null, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 2, .production_id = 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_def, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_def_repeat1, 2), SHIFT_REPEAT(159),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_def_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_def_repeat1, 2), SHIFT_REPEAT(63),
  [167] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_def_repeat1, 2), SHIFT_REPEAT(155),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_def_repeat1, 2), SHIFT_REPEAT(14),
  [173] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_def_repeat1, 2), SHIFT_REPEAT(131),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_def_repeat1, 2), SHIFT_REPEAT(149),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_def_repeat1, 2), SHIFT_REPEAT(145),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_def_repeat1, 2), SHIFT_REPEAT(91),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_def, 3),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 5),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 4),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 1),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 2, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 7, .production_id = 9),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_constraint, 7),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object_field, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(8),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(95),
  [265] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(95),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_identifier_repeat1, 2),
  [270] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_identifier_repeat1, 2), SHIFT_REPEAT(99),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_identifier_repeat1, 2), SHIFT_REPEAT(99),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_statement_repeat1, 2), SHIFT_REPEAT(80),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_statement_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_column_constraint_repeat1, 2), SHIFT_REPEAT(90),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_column_constraint_repeat1, 2),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [304] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2), SHIFT_REPEAT(84),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 11),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 10),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 7),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 6),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 8),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 9),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [432] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_sql(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
