#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 94
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 1
#define TOKEN_COUNT 76
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 11
#define PRODUCTION_ID_COUNT 8

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
  aux_sym_column_def_token1 = 12,
  aux_sym_column_type_token1 = 13,
  aux_sym_column_type_token2 = 14,
  aux_sym_column_type_token3 = 15,
  aux_sym_column_type_token4 = 16,
  aux_sym_column_type_token5 = 17,
  aux_sym_column_type_token6 = 18,
  aux_sym_column_type_token7 = 19,
  aux_sym_column_type_token8 = 20,
  aux_sym_column_type_token9 = 21,
  aux_sym_column_type_token10 = 22,
  aux_sym_column_type_token11 = 23,
  aux_sym_column_type_token12 = 24,
  aux_sym_column_type_token13 = 25,
  aux_sym_column_type_token14 = 26,
  aux_sym_column_type_token15 = 27,
  aux_sym_column_type_token16 = 28,
  aux_sym_column_type_token17 = 29,
  aux_sym_column_type_token18 = 30,
  aux_sym_column_type_token19 = 31,
  aux_sym_column_type_token20 = 32,
  aux_sym_column_type_token21 = 33,
  aux_sym_column_type_token22 = 34,
  aux_sym_column_type_token23 = 35,
  aux_sym_column_type_token24 = 36,
  aux_sym_column_type_token25 = 37,
  aux_sym_column_type_token26 = 38,
  aux_sym_column_type_token27 = 39,
  aux_sym_column_type_token28 = 40,
  aux_sym_column_type_token29 = 41,
  aux_sym_column_type_token30 = 42,
  aux_sym_column_type_token31 = 43,
  aux_sym_column_type_token32 = 44,
  aux_sym_column_type_token33 = 45,
  aux_sym_column_type_token34 = 46,
  aux_sym_column_type_token35 = 47,
  aux_sym_column_type_token36 = 48,
  aux_sym_column_type_token37 = 49,
  aux_sym_column_type_token38 = 50,
  aux_sym_column_type_token39 = 51,
  aux_sym_column_type_token40 = 52,
  aux_sym_column_type_token41 = 53,
  aux_sym_column_type_token42 = 54,
  aux_sym_column_type_token43 = 55,
  aux_sym_column_type_token44 = 56,
  aux_sym_column_type_token45 = 57,
  aux_sym_column_type_token46 = 58,
  aux_sym_column_type_token47 = 59,
  aux_sym_column_type_token48 = 60,
  aux_sym_column_type_token49 = 61,
  aux_sym_column_type_token50 = 62,
  aux_sym_column_type_token51 = 63,
  aux_sym_column_type_token52 = 64,
  aux_sym_column_type_token53 = 65,
  aux_sym_column_type_token54 = 66,
  aux_sym_column_type_token55 = 67,
  aux_sym_column_type_token56 = 68,
  aux_sym_column_type_token57 = 69,
  aux_sym_column_type_token58 = 70,
  anon_sym_DQUOTE = 71,
  aux_sym__quoted_identifier_token1 = 72,
  anon_sym_DQUOTE_DQUOTE = 73,
  sym__unquoted_identifier = 74,
  sym_number = 75,
  sym_source_file = 76,
  sym_statement = 77,
  sym_create_statement = 78,
  sym_create_table_statement = 79,
  sym_column_def = 80,
  sym_column_type = 81,
  sym_identifier = 82,
  sym__quoted_identifier = 83,
  aux_sym_source_file_repeat1 = 84,
  aux_sym_create_table_statement_repeat1 = 85,
  aux_sym__quoted_identifier_repeat1 = 86,
  anon_alias_sym_CHARACTER_VARYING = 87,
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
  [aux_sym_column_def_token1] = "NOT_NULL",
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
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_create_statement] = "create_statement",
  [sym_create_table_statement] = "create_table_statement",
  [sym_column_def] = "column_def",
  [sym_column_type] = "column_type",
  [sym_identifier] = "identifier",
  [sym__quoted_identifier] = "_quoted_identifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_create_table_statement_repeat1] = "create_table_statement_repeat1",
  [aux_sym__quoted_identifier_repeat1] = "_quoted_identifier_repeat1",
  [anon_alias_sym_CHARACTER_VARYING] = "CHARACTER_VARYING",
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
  [aux_sym_column_def_token1] = aux_sym_column_def_token1,
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
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_create_statement] = sym_create_statement,
  [sym_create_table_statement] = sym_create_table_statement,
  [sym_column_def] = sym_column_def,
  [sym_column_type] = sym_column_type,
  [sym_identifier] = sym_identifier,
  [sym__quoted_identifier] = sym__quoted_identifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_create_table_statement_repeat1] = aux_sym_create_table_statement_repeat1,
  [aux_sym__quoted_identifier_repeat1] = aux_sym__quoted_identifier_repeat1,
  [anon_alias_sym_CHARACTER_VARYING] = anon_alias_sym_CHARACTER_VARYING,
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
  [aux_sym_column_def_token1] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_create_table_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__quoted_identifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_CHARACTER_VARYING] = {
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
    [2] = aux_sym_column_def_token1,
  },
  [4] = {
    [2] = aux_sym_column_type_token49,
  },
  [5] = {
    [2] = aux_sym_column_type_token51,
    [3] = aux_sym_column_type_token51,
  },
  [6] = {
    [5] = aux_sym_column_type_token49,
  },
  [7] = {
    [5] = aux_sym_column_type_token51,
    [6] = aux_sym_column_type_token51,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(186);
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '(') ADVANCE(196);
      if (lookahead == ')') ADVANCE(198);
      if (lookahead == ',') ADVANCE(197);
      if (lookahead == ';') ADVANCE(187);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(74);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(72);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(179);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(100);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(64);
      if (lookahead == 'J' ||
          lookahead == 'j') ADVANCE(155);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(75);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(9);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(127);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(14);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(51);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(41);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(6);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(174);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(10);
      if (lookahead == 'W' ||
          lookahead == 'w') ADVANCE(81);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(109);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(132);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(259);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0) ADVANCE(260);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(258);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 4:
      if (lookahead == '4') ADVANCE(239);
      if (lookahead == '8') ADVANCE(219);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(101);
      END_STATE();
    case 6:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(108);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(111);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(135);
      END_STATE();
    case 7:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(210);
      END_STATE();
    case 8:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(169);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(31);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(177);
      END_STATE();
    case 9:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 10:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(136);
      END_STATE();
    case 11:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(137);
      END_STATE();
    case 13:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 14:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(157);
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(5);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(79);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 15:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 16:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(115);
      END_STATE();
    case 17:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(103);
      END_STATE();
    case 18:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 19:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 20:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(145);
      END_STATE();
    case 22:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(96);
      END_STATE();
    case 23:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 24:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 25:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(99);
      END_STATE();
    case 26:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 27:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(84);
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(73);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(82);
      END_STATE();
    case 29:
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(106);
      END_STATE();
    case 30:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(232);
      END_STATE();
    case 31:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 32:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 34:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(167);
      END_STATE();
    case 35:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 36:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 37:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(256);
      END_STATE();
    case 38:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(40);
      END_STATE();
    case 39:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(138);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 40:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(140);
      END_STATE();
    case 41:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(146);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 44:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 45:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 46:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 47:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 48:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 49:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 50:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 51:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(180);
      END_STATE();
    case 53:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 55:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(158);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(222);
      END_STATE();
    case 57:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(144);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 59:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 60:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(147);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 63:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 64:
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(192);
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 65:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 66:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 67:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(58);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 68:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(85);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(204);
      END_STATE();
    case 69:
      if (lookahead == 'G' ||
          lookahead == 'g') ADVANCE(129);
      END_STATE();
    case 70:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(234);
      END_STATE();
    case 71:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 72:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(12);
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(39);
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 73:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(19);
      END_STATE();
    case 74:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(68);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(126);
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(173);
      END_STATE();
    case 75:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(119);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(42);
      END_STATE();
    case 76:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 77:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(153);
      END_STATE();
    case 78:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 79:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(122);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 80:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(154);
      END_STATE();
    case 81:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(166);
      END_STATE();
    case 82:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 83:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 84:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 85:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(123);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(62);
      END_STATE();
    case 86:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 87:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(124);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(63);
      END_STATE();
    case 88:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 90:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 91:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(257);
      END_STATE();
    case 92:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(208);
      END_STATE();
    case 93:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 94:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(238);
      END_STATE();
    case 95:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(244);
      END_STATE();
    case 96:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(233);
      END_STATE();
    case 97:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(224);
      END_STATE();
    case 98:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 99:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 100:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 101:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 102:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(93);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(61);
      END_STATE();
    case 103:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 105:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 106:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(50);
      END_STATE();
    case 107:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(87);
      END_STATE();
    case 108:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(133);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(159);
      END_STATE();
    case 109:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(91);
      END_STATE();
    case 110:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 111:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 112:
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 113:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(225);
      END_STATE();
    case 114:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(235);
      END_STATE();
    case 115:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(207);
      END_STATE();
    case 116:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(237);
      END_STATE();
    case 117:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 118:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 119:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 120:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 121:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(46);
      END_STATE();
    case 122:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(161);
      END_STATE();
    case 123:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 124:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 125:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(113);
      END_STATE();
    case 126:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(92);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(209);
      END_STATE();
    case 127:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(156);
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 128:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 129:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(116);
      END_STATE();
    case 130:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 131:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(142);
      END_STATE();
    case 132:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(121);
      END_STATE();
    case 133:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(190);
      END_STATE();
    case 134:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(252);
      END_STATE();
    case 135:
      if (lookahead == 'Q' ||
          lookahead == 'q') ADVANCE(175);
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(54);
      END_STATE();
    case 136:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 137:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 138:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(214);
      END_STATE();
    case 139:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(221);
      END_STATE();
    case 140:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(229);
      END_STATE();
    case 141:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 142:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(255);
      END_STATE();
    case 143:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 144:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 145:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(182);
      END_STATE();
    case 146:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(86);
      END_STATE();
    case 147:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(83);
      END_STATE();
    case 148:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 149:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 150:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 151:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(195);
      END_STATE();
    case 152:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(114);
      END_STATE();
    case 153:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(168);
      END_STATE();
    case 154:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(88);
      END_STATE();
    case 155:
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(125);
      END_STATE();
    case 156:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(194);
      END_STATE();
    case 157:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(70);
      END_STATE();
    case 158:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(220);
      END_STATE();
    case 159:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 160:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(4);
      END_STATE();
    case 161:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(236);
      END_STATE();
    case 162:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(200);
      END_STATE();
    case 163:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(206);
      END_STATE();
    case 164:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(248);
      END_STATE();
    case 165:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(240);
      END_STATE();
    case 166:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(71);
      END_STATE();
    case 167:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(131);
      END_STATE();
    case 168:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(151);
      END_STATE();
    case 169:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(43);
      END_STATE();
    case 170:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 171:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(49);
      END_STATE();
    case 172:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(59);
      END_STATE();
    case 173:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(55);
      END_STATE();
    case 174:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 175:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(57);
      END_STATE();
    case 176:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 177:
      if (lookahead == 'U' ||
          lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 178:
      if (lookahead == 'V' ||
          lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 179:
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(77);
      END_STATE();
    case 180:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(231);
      END_STATE();
    case 181:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(254);
      END_STATE();
    case 182:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(189);
      END_STATE();
    case 183:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(69);
      END_STATE();
    case 184:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(251);
      END_STATE();
    case 185:
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(253);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token1);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token2);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token3);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(148);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token4);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token5);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token6);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_create_table_statement_token7);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_column_def_token1);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_column_type_token1);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_column_type_token2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_column_type_token3);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_column_type_token4);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_column_type_token5);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_column_type_token6);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_column_type_token7);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_column_type_token8);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_column_type_token9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_column_type_token10);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_column_type_token11);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_column_type_token12);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_column_type_token13);
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_column_type_token14);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_column_type_token15);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_column_type_token16);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_column_type_token17);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_column_type_token18);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_column_type_token19);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_column_type_token20);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_column_type_token21);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_column_type_token22);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_column_type_token23);
      if (lookahead == '2') ADVANCE(241);
      if (lookahead == '4') ADVANCE(223);
      if (lookahead == '8') ADVANCE(201);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_column_type_token24);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_column_type_token25);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_column_type_token26);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(226);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_column_type_token27);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_column_type_token28);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_column_type_token29);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_column_type_token30);
      if (lookahead == '8') ADVANCE(230);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_column_type_token31);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_column_type_token32);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_column_type_token33);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_column_type_token34);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_column_type_token35);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_column_type_token36);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_column_type_token37);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_column_type_token38);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_column_type_token39);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_column_type_token40);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_column_type_token41);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_column_type_token42);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_column_type_token43);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_column_type_token44);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_column_type_token45);
      if (lookahead == '2') ADVANCE(243);
      if (lookahead == '4') ADVANCE(245);
      if (lookahead == '8') ADVANCE(203);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_column_type_token46);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_column_type_token47);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_column_type_token48);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(170);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(184);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_column_type_token49);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_column_type_token50);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_column_type_token51);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(176);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_column_type_token52);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_column_type_token53);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(185);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_column_type_token54);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_column_type_token55);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_column_type_token56);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_column_type_token57);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_column_type_token58);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym__quoted_identifier_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(260);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (lookahead == 'F' ||
          lookahead == 'f') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__unquoted_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(264);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
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
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
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
    [aux_sym_column_def_token1] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(92),
    [sym_statement] = STATE(46),
    [sym_create_statement] = STATE(53),
    [sym_create_table_statement] = STATE(54),
    [aux_sym_create_table_statement_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_column_type] = STATE(39),
    [aux_sym_column_type_token1] = ACTIONS(5),
    [aux_sym_column_type_token2] = ACTIONS(5),
    [aux_sym_column_type_token3] = ACTIONS(5),
    [aux_sym_column_type_token4] = ACTIONS(5),
    [aux_sym_column_type_token5] = ACTIONS(7),
    [aux_sym_column_type_token7] = ACTIONS(9),
    [aux_sym_column_type_token8] = ACTIONS(5),
    [aux_sym_column_type_token9] = ACTIONS(11),
    [aux_sym_column_type_token10] = ACTIONS(5),
    [aux_sym_column_type_token11] = ACTIONS(5),
    [aux_sym_column_type_token12] = ACTIONS(13),
    [aux_sym_column_type_token13] = ACTIONS(15),
    [aux_sym_column_type_token14] = ACTIONS(9),
    [aux_sym_column_type_token15] = ACTIONS(5),
    [aux_sym_column_type_token16] = ACTIONS(5),
    [aux_sym_column_type_token17] = ACTIONS(5),
    [aux_sym_column_type_token18] = ACTIONS(17),
    [aux_sym_column_type_token20] = ACTIONS(5),
    [aux_sym_column_type_token21] = ACTIONS(5),
    [aux_sym_column_type_token22] = ACTIONS(5),
    [aux_sym_column_type_token23] = ACTIONS(11),
    [aux_sym_column_type_token24] = ACTIONS(5),
    [aux_sym_column_type_token25] = ACTIONS(9),
    [aux_sym_column_type_token26] = ACTIONS(11),
    [aux_sym_column_type_token27] = ACTIONS(5),
    [aux_sym_column_type_token28] = ACTIONS(5),
    [aux_sym_column_type_token29] = ACTIONS(5),
    [aux_sym_column_type_token30] = ACTIONS(11),
    [aux_sym_column_type_token31] = ACTIONS(5),
    [aux_sym_column_type_token32] = ACTIONS(5),
    [aux_sym_column_type_token33] = ACTIONS(19),
    [aux_sym_column_type_token34] = ACTIONS(19),
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
    [aux_sym_column_type_token45] = ACTIONS(11),
    [aux_sym_column_type_token46] = ACTIONS(5),
    [aux_sym_column_type_token47] = ACTIONS(5),
    [aux_sym_column_type_token48] = ACTIONS(21),
    [aux_sym_column_type_token52] = ACTIONS(5),
    [aux_sym_column_type_token53] = ACTIONS(21),
    [aux_sym_column_type_token54] = ACTIONS(5),
    [aux_sym_column_type_token55] = ACTIONS(5),
    [aux_sym_column_type_token56] = ACTIONS(5),
    [aux_sym_column_type_token57] = ACTIONS(5),
    [aux_sym_column_type_token58] = ACTIONS(5),
  },
  [3] = {
    [anon_sym_LPAREN] = ACTIONS(23),
    [aux_sym_column_type_token1] = ACTIONS(23),
    [aux_sym_column_type_token2] = ACTIONS(23),
    [aux_sym_column_type_token3] = ACTIONS(23),
    [aux_sym_column_type_token4] = ACTIONS(23),
    [aux_sym_column_type_token5] = ACTIONS(23),
    [aux_sym_column_type_token7] = ACTIONS(23),
    [aux_sym_column_type_token8] = ACTIONS(23),
    [aux_sym_column_type_token9] = ACTIONS(25),
    [aux_sym_column_type_token10] = ACTIONS(23),
    [aux_sym_column_type_token11] = ACTIONS(23),
    [aux_sym_column_type_token12] = ACTIONS(23),
    [aux_sym_column_type_token13] = ACTIONS(25),
    [aux_sym_column_type_token14] = ACTIONS(23),
    [aux_sym_column_type_token15] = ACTIONS(23),
    [aux_sym_column_type_token16] = ACTIONS(23),
    [aux_sym_column_type_token17] = ACTIONS(23),
    [aux_sym_column_type_token18] = ACTIONS(23),
    [aux_sym_column_type_token20] = ACTIONS(23),
    [aux_sym_column_type_token21] = ACTIONS(23),
    [aux_sym_column_type_token22] = ACTIONS(23),
    [aux_sym_column_type_token23] = ACTIONS(25),
    [aux_sym_column_type_token24] = ACTIONS(23),
    [aux_sym_column_type_token25] = ACTIONS(23),
    [aux_sym_column_type_token26] = ACTIONS(25),
    [aux_sym_column_type_token27] = ACTIONS(23),
    [aux_sym_column_type_token28] = ACTIONS(23),
    [aux_sym_column_type_token29] = ACTIONS(23),
    [aux_sym_column_type_token30] = ACTIONS(25),
    [aux_sym_column_type_token31] = ACTIONS(23),
    [aux_sym_column_type_token32] = ACTIONS(23),
    [aux_sym_column_type_token33] = ACTIONS(23),
    [aux_sym_column_type_token34] = ACTIONS(23),
    [aux_sym_column_type_token35] = ACTIONS(23),
    [aux_sym_column_type_token36] = ACTIONS(23),
    [aux_sym_column_type_token37] = ACTIONS(23),
    [aux_sym_column_type_token38] = ACTIONS(23),
    [aux_sym_column_type_token39] = ACTIONS(23),
    [aux_sym_column_type_token40] = ACTIONS(23),
    [aux_sym_column_type_token41] = ACTIONS(23),
    [aux_sym_column_type_token42] = ACTIONS(23),
    [aux_sym_column_type_token43] = ACTIONS(23),
    [aux_sym_column_type_token44] = ACTIONS(23),
    [aux_sym_column_type_token45] = ACTIONS(25),
    [aux_sym_column_type_token46] = ACTIONS(23),
    [aux_sym_column_type_token47] = ACTIONS(23),
    [aux_sym_column_type_token48] = ACTIONS(25),
    [aux_sym_column_type_token52] = ACTIONS(23),
    [aux_sym_column_type_token53] = ACTIONS(25),
    [aux_sym_column_type_token54] = ACTIONS(23),
    [aux_sym_column_type_token55] = ACTIONS(23),
    [aux_sym_column_type_token56] = ACTIONS(23),
    [aux_sym_column_type_token57] = ACTIONS(23),
    [aux_sym_column_type_token58] = ACTIONS(23),
  },
  [4] = {
    [anon_sym_LPAREN] = ACTIONS(27),
    [aux_sym_column_type_token1] = ACTIONS(27),
    [aux_sym_column_type_token2] = ACTIONS(27),
    [aux_sym_column_type_token3] = ACTIONS(27),
    [aux_sym_column_type_token4] = ACTIONS(27),
    [aux_sym_column_type_token5] = ACTIONS(27),
    [aux_sym_column_type_token7] = ACTIONS(27),
    [aux_sym_column_type_token8] = ACTIONS(27),
    [aux_sym_column_type_token9] = ACTIONS(29),
    [aux_sym_column_type_token10] = ACTIONS(27),
    [aux_sym_column_type_token11] = ACTIONS(27),
    [aux_sym_column_type_token12] = ACTIONS(27),
    [aux_sym_column_type_token13] = ACTIONS(29),
    [aux_sym_column_type_token14] = ACTIONS(27),
    [aux_sym_column_type_token15] = ACTIONS(27),
    [aux_sym_column_type_token16] = ACTIONS(27),
    [aux_sym_column_type_token17] = ACTIONS(27),
    [aux_sym_column_type_token18] = ACTIONS(27),
    [aux_sym_column_type_token20] = ACTIONS(27),
    [aux_sym_column_type_token21] = ACTIONS(27),
    [aux_sym_column_type_token22] = ACTIONS(27),
    [aux_sym_column_type_token23] = ACTIONS(29),
    [aux_sym_column_type_token24] = ACTIONS(27),
    [aux_sym_column_type_token25] = ACTIONS(27),
    [aux_sym_column_type_token26] = ACTIONS(29),
    [aux_sym_column_type_token27] = ACTIONS(27),
    [aux_sym_column_type_token28] = ACTIONS(27),
    [aux_sym_column_type_token29] = ACTIONS(27),
    [aux_sym_column_type_token30] = ACTIONS(29),
    [aux_sym_column_type_token31] = ACTIONS(27),
    [aux_sym_column_type_token32] = ACTIONS(27),
    [aux_sym_column_type_token33] = ACTIONS(27),
    [aux_sym_column_type_token34] = ACTIONS(27),
    [aux_sym_column_type_token35] = ACTIONS(27),
    [aux_sym_column_type_token36] = ACTIONS(27),
    [aux_sym_column_type_token37] = ACTIONS(27),
    [aux_sym_column_type_token38] = ACTIONS(27),
    [aux_sym_column_type_token39] = ACTIONS(27),
    [aux_sym_column_type_token40] = ACTIONS(27),
    [aux_sym_column_type_token41] = ACTIONS(27),
    [aux_sym_column_type_token42] = ACTIONS(27),
    [aux_sym_column_type_token43] = ACTIONS(27),
    [aux_sym_column_type_token44] = ACTIONS(27),
    [aux_sym_column_type_token45] = ACTIONS(29),
    [aux_sym_column_type_token46] = ACTIONS(27),
    [aux_sym_column_type_token47] = ACTIONS(27),
    [aux_sym_column_type_token48] = ACTIONS(29),
    [aux_sym_column_type_token52] = ACTIONS(27),
    [aux_sym_column_type_token53] = ACTIONS(29),
    [aux_sym_column_type_token54] = ACTIONS(27),
    [aux_sym_column_type_token55] = ACTIONS(27),
    [aux_sym_column_type_token56] = ACTIONS(27),
    [aux_sym_column_type_token57] = ACTIONS(27),
    [aux_sym_column_type_token58] = ACTIONS(27),
  },
  [5] = {
    [anon_sym_LPAREN] = ACTIONS(31),
    [aux_sym_column_type_token1] = ACTIONS(31),
    [aux_sym_column_type_token2] = ACTIONS(31),
    [aux_sym_column_type_token3] = ACTIONS(31),
    [aux_sym_column_type_token4] = ACTIONS(31),
    [aux_sym_column_type_token5] = ACTIONS(31),
    [aux_sym_column_type_token7] = ACTIONS(31),
    [aux_sym_column_type_token8] = ACTIONS(31),
    [aux_sym_column_type_token9] = ACTIONS(33),
    [aux_sym_column_type_token10] = ACTIONS(31),
    [aux_sym_column_type_token11] = ACTIONS(31),
    [aux_sym_column_type_token12] = ACTIONS(31),
    [aux_sym_column_type_token13] = ACTIONS(33),
    [aux_sym_column_type_token14] = ACTIONS(31),
    [aux_sym_column_type_token15] = ACTIONS(31),
    [aux_sym_column_type_token16] = ACTIONS(31),
    [aux_sym_column_type_token17] = ACTIONS(31),
    [aux_sym_column_type_token18] = ACTIONS(31),
    [aux_sym_column_type_token20] = ACTIONS(31),
    [aux_sym_column_type_token21] = ACTIONS(31),
    [aux_sym_column_type_token22] = ACTIONS(31),
    [aux_sym_column_type_token23] = ACTIONS(33),
    [aux_sym_column_type_token24] = ACTIONS(31),
    [aux_sym_column_type_token25] = ACTIONS(31),
    [aux_sym_column_type_token26] = ACTIONS(33),
    [aux_sym_column_type_token27] = ACTIONS(31),
    [aux_sym_column_type_token28] = ACTIONS(31),
    [aux_sym_column_type_token29] = ACTIONS(31),
    [aux_sym_column_type_token30] = ACTIONS(33),
    [aux_sym_column_type_token31] = ACTIONS(31),
    [aux_sym_column_type_token32] = ACTIONS(31),
    [aux_sym_column_type_token33] = ACTIONS(31),
    [aux_sym_column_type_token34] = ACTIONS(31),
    [aux_sym_column_type_token35] = ACTIONS(31),
    [aux_sym_column_type_token36] = ACTIONS(31),
    [aux_sym_column_type_token37] = ACTIONS(31),
    [aux_sym_column_type_token38] = ACTIONS(31),
    [aux_sym_column_type_token39] = ACTIONS(31),
    [aux_sym_column_type_token40] = ACTIONS(31),
    [aux_sym_column_type_token41] = ACTIONS(31),
    [aux_sym_column_type_token42] = ACTIONS(31),
    [aux_sym_column_type_token43] = ACTIONS(31),
    [aux_sym_column_type_token44] = ACTIONS(31),
    [aux_sym_column_type_token45] = ACTIONS(33),
    [aux_sym_column_type_token46] = ACTIONS(31),
    [aux_sym_column_type_token47] = ACTIONS(31),
    [aux_sym_column_type_token48] = ACTIONS(33),
    [aux_sym_column_type_token52] = ACTIONS(31),
    [aux_sym_column_type_token53] = ACTIONS(33),
    [aux_sym_column_type_token54] = ACTIONS(31),
    [aux_sym_column_type_token55] = ACTIONS(31),
    [aux_sym_column_type_token56] = ACTIONS(31),
    [aux_sym_column_type_token57] = ACTIONS(31),
    [aux_sym_column_type_token58] = ACTIONS(31),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(37), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      aux_sym_column_type_token49,
    ACTIONS(41), 1,
      aux_sym_column_type_token51,
    ACTIONS(35), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [15] = 5,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(4), 1,
      sym__quoted_identifier,
    STATE(29), 1,
      sym_column_def,
  [31] = 5,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(4), 1,
      sym__quoted_identifier,
    STATE(35), 1,
      sym_column_def,
  [47] = 5,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(4), 1,
      sym__quoted_identifier,
    STATE(33), 1,
      sym_column_def,
  [63] = 3,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_column_type_token6,
    ACTIONS(35), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [75] = 3,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(51), 1,
      aux_sym_column_type_token6,
    ACTIONS(35), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [87] = 5,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      aux_sym_create_table_statement_token5,
    ACTIONS(55), 1,
      sym__unquoted_identifier,
    STATE(4), 1,
      sym__quoted_identifier,
    STATE(83), 1,
      sym_identifier,
  [103] = 5,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(4), 1,
      sym__quoted_identifier,
    STATE(56), 1,
      sym_column_def,
  [119] = 5,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      sym__unquoted_identifier,
    ACTIONS(57), 1,
      aux_sym_create_table_statement_token5,
    STATE(4), 1,
      sym__quoted_identifier,
    STATE(79), 1,
      sym_identifier,
  [135] = 5,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__unquoted_identifier,
    STATE(2), 1,
      sym_identifier,
    STATE(4), 1,
      sym__quoted_identifier,
    STATE(32), 1,
      sym_column_def,
  [151] = 3,
    ACTIONS(61), 1,
      aux_sym_column_type_token49,
    ACTIONS(63), 1,
      aux_sym_column_type_token51,
    ACTIONS(59), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [163] = 4,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(69), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(23), 1,
      aux_sym__quoted_identifier_repeat1,
  [176] = 2,
    ACTIONS(71), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [185] = 2,
    ACTIONS(75), 1,
      anon_sym_LPAREN,
    ACTIONS(73), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [194] = 2,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(35), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [203] = 4,
    ACTIONS(3), 1,
      aux_sym_create_table_statement_token1,
    STATE(52), 1,
      sym_statement,
    STATE(53), 1,
      sym_create_statement,
    STATE(54), 1,
      sym_create_table_statement,
  [216] = 4,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__unquoted_identifier,
    STATE(4), 1,
      sym__quoted_identifier,
    STATE(70), 1,
      sym_identifier,
  [229] = 4,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(81), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(24), 1,
      aux_sym__quoted_identifier_repeat1,
  [242] = 4,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      aux_sym__quoted_identifier_token1,
    ACTIONS(88), 1,
      anon_sym_DQUOTE_DQUOTE,
    STATE(24), 1,
      aux_sym__quoted_identifier_repeat1,
  [255] = 2,
    ACTIONS(93), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [264] = 4,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      sym__unquoted_identifier,
    STATE(4), 1,
      sym__quoted_identifier,
    STATE(73), 1,
      sym_identifier,
  [277] = 3,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
  [287] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_create_table_statement_repeat1,
  [297] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      aux_sym_create_table_statement_repeat1,
  [307] = 1,
    ACTIONS(106), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [313] = 1,
    ACTIONS(59), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [319] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      aux_sym_create_table_statement_repeat1,
  [329] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(42), 1,
      aux_sym_create_table_statement_repeat1,
  [339] = 3,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      aux_sym_source_file_repeat1,
  [349] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_create_table_statement_repeat1,
  [359] = 1,
    ACTIONS(116), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [365] = 1,
    ACTIONS(118), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [371] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_create_table_statement_repeat1,
  [381] = 2,
    ACTIONS(120), 1,
      aux_sym_create_table_statement_token6,
    ACTIONS(122), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [389] = 1,
    ACTIONS(124), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [395] = 1,
    ACTIONS(126), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [401] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_create_table_statement_repeat1,
  [411] = 1,
    ACTIONS(130), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [417] = 3,
    ACTIONS(132), 1,
      aux_sym_create_table_statement_token2,
    ACTIONS(134), 1,
      aux_sym_create_table_statement_token3,
    ACTIONS(136), 1,
      aux_sym_create_table_statement_token4,
  [427] = 1,
    ACTIONS(138), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [433] = 3,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(140), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      aux_sym_source_file_repeat1,
  [443] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(142), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_create_table_statement_repeat1,
  [453] = 1,
    ACTIONS(35), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [459] = 3,
    ACTIONS(144), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(49), 1,
      aux_sym_create_table_statement_repeat1,
  [469] = 1,
    ACTIONS(149), 3,
      aux_sym_create_table_statement_token6,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [475] = 1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [480] = 1,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [485] = 1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [490] = 1,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [495] = 1,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [500] = 1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [505] = 1,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [510] = 1,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [515] = 1,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [520] = 1,
    ACTIONS(165), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [525] = 1,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_SEMI,
  [530] = 1,
    ACTIONS(169), 1,
      aux_sym_column_type_token19,
  [534] = 1,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
  [538] = 1,
    ACTIONS(173), 1,
      sym_number,
  [542] = 1,
    ACTIONS(175), 1,
      sym_number,
  [546] = 1,
    ACTIONS(177), 1,
      anon_sym_COMMA,
  [550] = 1,
    ACTIONS(179), 1,
      anon_sym_RPAREN,
  [554] = 1,
    ACTIONS(181), 1,
      aux_sym_column_type_token50,
  [558] = 1,
    ACTIONS(183), 1,
      aux_sym_column_type_token50,
  [562] = 1,
    ACTIONS(185), 1,
      anon_sym_LPAREN,
  [566] = 1,
    ACTIONS(187), 1,
      aux_sym_column_def_token1,
  [570] = 1,
    ACTIONS(189), 1,
      aux_sym_column_type_token48,
  [574] = 1,
    ACTIONS(191), 1,
      anon_sym_LPAREN,
  [578] = 1,
    ACTIONS(193), 1,
      aux_sym_create_table_statement_token7,
  [582] = 1,
    ACTIONS(195), 1,
      anon_sym_RPAREN,
  [586] = 1,
    ACTIONS(197), 1,
      anon_sym_RPAREN,
  [590] = 1,
    ACTIONS(199), 1,
      sym_number,
  [594] = 1,
    ACTIONS(201), 1,
      aux_sym_create_table_statement_token7,
  [598] = 1,
    ACTIONS(203), 1,
      anon_sym_LPAREN,
  [602] = 1,
    ACTIONS(205), 1,
      aux_sym_create_table_statement_token6,
  [606] = 1,
    ACTIONS(207), 1,
      aux_sym_column_type_token48,
  [610] = 1,
    ACTIONS(209), 1,
      sym_number,
  [614] = 1,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
  [618] = 1,
    ACTIONS(213), 1,
      aux_sym_create_table_statement_token6,
  [622] = 1,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
  [626] = 1,
    ACTIONS(217), 1,
      aux_sym_column_type_token48,
  [630] = 1,
    ACTIONS(219), 1,
      aux_sym_column_type_token48,
  [634] = 1,
    ACTIONS(221), 1,
      sym_number,
  [638] = 1,
    ACTIONS(223), 1,
      aux_sym_create_table_statement_token4,
  [642] = 1,
    ACTIONS(225), 1,
      aux_sym_column_type_token50,
  [646] = 1,
    ACTIONS(227), 1,
      aux_sym_column_type_token50,
  [650] = 1,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
  [654] = 1,
    ACTIONS(231), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 15,
  [SMALL_STATE(8)] = 31,
  [SMALL_STATE(9)] = 47,
  [SMALL_STATE(10)] = 63,
  [SMALL_STATE(11)] = 75,
  [SMALL_STATE(12)] = 87,
  [SMALL_STATE(13)] = 103,
  [SMALL_STATE(14)] = 119,
  [SMALL_STATE(15)] = 135,
  [SMALL_STATE(16)] = 151,
  [SMALL_STATE(17)] = 163,
  [SMALL_STATE(18)] = 176,
  [SMALL_STATE(19)] = 185,
  [SMALL_STATE(20)] = 194,
  [SMALL_STATE(21)] = 203,
  [SMALL_STATE(22)] = 216,
  [SMALL_STATE(23)] = 229,
  [SMALL_STATE(24)] = 242,
  [SMALL_STATE(25)] = 255,
  [SMALL_STATE(26)] = 264,
  [SMALL_STATE(27)] = 277,
  [SMALL_STATE(28)] = 287,
  [SMALL_STATE(29)] = 297,
  [SMALL_STATE(30)] = 307,
  [SMALL_STATE(31)] = 313,
  [SMALL_STATE(32)] = 319,
  [SMALL_STATE(33)] = 329,
  [SMALL_STATE(34)] = 339,
  [SMALL_STATE(35)] = 349,
  [SMALL_STATE(36)] = 359,
  [SMALL_STATE(37)] = 365,
  [SMALL_STATE(38)] = 371,
  [SMALL_STATE(39)] = 381,
  [SMALL_STATE(40)] = 389,
  [SMALL_STATE(41)] = 395,
  [SMALL_STATE(42)] = 401,
  [SMALL_STATE(43)] = 411,
  [SMALL_STATE(44)] = 417,
  [SMALL_STATE(45)] = 427,
  [SMALL_STATE(46)] = 433,
  [SMALL_STATE(47)] = 443,
  [SMALL_STATE(48)] = 453,
  [SMALL_STATE(49)] = 459,
  [SMALL_STATE(50)] = 469,
  [SMALL_STATE(51)] = 475,
  [SMALL_STATE(52)] = 480,
  [SMALL_STATE(53)] = 485,
  [SMALL_STATE(54)] = 490,
  [SMALL_STATE(55)] = 495,
  [SMALL_STATE(56)] = 500,
  [SMALL_STATE(57)] = 505,
  [SMALL_STATE(58)] = 510,
  [SMALL_STATE(59)] = 515,
  [SMALL_STATE(60)] = 520,
  [SMALL_STATE(61)] = 525,
  [SMALL_STATE(62)] = 530,
  [SMALL_STATE(63)] = 534,
  [SMALL_STATE(64)] = 538,
  [SMALL_STATE(65)] = 542,
  [SMALL_STATE(66)] = 546,
  [SMALL_STATE(67)] = 550,
  [SMALL_STATE(68)] = 554,
  [SMALL_STATE(69)] = 558,
  [SMALL_STATE(70)] = 562,
  [SMALL_STATE(71)] = 566,
  [SMALL_STATE(72)] = 570,
  [SMALL_STATE(73)] = 574,
  [SMALL_STATE(74)] = 578,
  [SMALL_STATE(75)] = 582,
  [SMALL_STATE(76)] = 586,
  [SMALL_STATE(77)] = 590,
  [SMALL_STATE(78)] = 594,
  [SMALL_STATE(79)] = 598,
  [SMALL_STATE(80)] = 602,
  [SMALL_STATE(81)] = 606,
  [SMALL_STATE(82)] = 610,
  [SMALL_STATE(83)] = 614,
  [SMALL_STATE(84)] = 618,
  [SMALL_STATE(85)] = 622,
  [SMALL_STATE(86)] = 626,
  [SMALL_STATE(87)] = 630,
  [SMALL_STATE(88)] = 634,
  [SMALL_STATE(89)] = 638,
  [SMALL_STATE(90)] = 642,
  [SMALL_STATE(91)] = 646,
  [SMALL_STATE(92)] = 650,
  [SMALL_STATE(93)] = 654,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__quoted_identifier, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__quoted_identifier, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 4),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 2, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__quoted_identifier_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__quoted_identifier_repeat1, 2), SHIFT_REPEAT(24),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__quoted_identifier_repeat1, 2), SHIFT_REPEAT(24),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 2, .production_id = 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 5, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 4, .production_id = 4),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 7, .production_id = 7),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_def, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 5, .production_id = 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 7, .production_id = 6),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_create_table_statement_repeat1, 2), SHIFT_REPEAT(13),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_create_table_statement_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_type, 4, .production_id = 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 7),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_statement, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 11),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 10),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 9),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_column_def, 4, .production_id = 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_create_table_statement, 8),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [229] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
