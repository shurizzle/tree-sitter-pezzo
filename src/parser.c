#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 20

enum {
  anon_sym_rule = 1,
  sym_askpass = 2,
  sym_keepenv = 3,
  sym_origin = 4,
  sym_target = 5,
  sym_timeout = 6,
  sym_setenv = 7,
  sym_exe = 8,
  sym_colon = 9,
  sym_semicolon = 10,
  sym_assign = 11,
  sym_assign_imm = 12,
  sym_or = 13,
  sym_minus = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  sym_brace_open = 17,
  sym_brace_close = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  sym_u64 = 21,
  aux_sym_user_token1 = 22,
  sym__variable_name_imm = 23,
  sym_glob = 24,
  anon_sym_COMMA = 25,
  sym_str = 26,
  anon_sym_DOLLAR = 27,
  anon_sym_DOLLAR_LBRACE = 28,
  anon_sym_RBRACE = 29,
  anon_sym_DQUOTE = 30,
  sym_comment = 31,
  sym_source_file = 32,
  sym_exec_rule = 33,
  sym_exec_body = 34,
  sym__exec_statement = 35,
  sym_askpass_statement = 36,
  sym_keepenv_statement = 37,
  sym_origin_statement = 38,
  sym_target_statement = 39,
  sym_timeout_statement = 40,
  sym_setenv_statement = 41,
  sym_exe_statement = 42,
  sym_bool = 43,
  sym_user = 44,
  sym_group = 45,
  sym__variable_name = 46,
  sym_exe_expr = 47,
  sym_glob_or = 48,
  sym_environment = 49,
  sym_copy_variable = 50,
  sym_remove_variable = 51,
  sym_string_expansion = 52,
  sym_string = 53,
  sym_set_variable = 54,
  sym_target_expression = 55,
  sym_target_match_or = 56,
  sym_target_match = 57,
  sym_origin_expression = 58,
  sym__origin_expression = 59,
  sym_origin_or = 60,
  sym_user_expression = 61,
  sym_group_expression = 62,
  sym_user_or = 63,
  sym_group_or = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_exec_body_repeat1 = 66,
  aux_sym_environment_repeat1 = 67,
  aux_sym_string_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_rule] = "rule",
  [sym_askpass] = "askpass",
  [sym_keepenv] = "keepenv",
  [sym_origin] = "origin",
  [sym_target] = "target",
  [sym_timeout] = "timeout",
  [sym_setenv] = "setenv",
  [sym_exe] = "exe",
  [sym_colon] = "colon",
  [sym_semicolon] = "semicolon",
  [sym_assign] = "assign",
  [sym_assign_imm] = "assign",
  [sym_or] = "or",
  [sym_minus] = "minus",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_brace_open] = "brace_open",
  [sym_brace_close] = "brace_close",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_u64] = "u64",
  [aux_sym_user_token1] = "user_token1",
  [sym__variable_name_imm] = "variable_name",
  [sym_glob] = "glob",
  [anon_sym_COMMA] = ",",
  [sym_str] = "str",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DQUOTE] = "\"",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_exec_rule] = "exec_rule",
  [sym_exec_body] = "exec_body",
  [sym__exec_statement] = "_exec_statement",
  [sym_askpass_statement] = "statement",
  [sym_keepenv_statement] = "statement",
  [sym_origin_statement] = "statement",
  [sym_target_statement] = "statement",
  [sym_timeout_statement] = "statement",
  [sym_setenv_statement] = "statement",
  [sym_exe_statement] = "statement",
  [sym_bool] = "bool",
  [sym_user] = "user",
  [sym_group] = "group",
  [sym__variable_name] = "variable_name",
  [sym_exe_expr] = "exe_expr",
  [sym_glob_or] = "or_expression",
  [sym_environment] = "environment",
  [sym_copy_variable] = "copy_variable",
  [sym_remove_variable] = "remove_variable",
  [sym_string_expansion] = "string_expansion",
  [sym_string] = "string",
  [sym_set_variable] = "set_variable",
  [sym_target_expression] = "target_expression",
  [sym_target_match_or] = "or_expression",
  [sym_target_match] = "target_match",
  [sym_origin_expression] = "origin_expression",
  [sym__origin_expression] = "_origin_expression",
  [sym_origin_or] = "or_expression",
  [sym_user_expression] = "user_expression",
  [sym_group_expression] = "group_expression",
  [sym_user_or] = "or_expression",
  [sym_group_or] = "or_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_exec_body_repeat1] = "exec_body_repeat1",
  [aux_sym_environment_repeat1] = "environment_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_rule] = anon_sym_rule,
  [sym_askpass] = sym_askpass,
  [sym_keepenv] = sym_keepenv,
  [sym_origin] = sym_origin,
  [sym_target] = sym_target,
  [sym_timeout] = sym_timeout,
  [sym_setenv] = sym_setenv,
  [sym_exe] = sym_exe,
  [sym_colon] = sym_colon,
  [sym_semicolon] = sym_semicolon,
  [sym_assign] = sym_assign,
  [sym_assign_imm] = sym_assign,
  [sym_or] = sym_or,
  [sym_minus] = sym_minus,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_brace_open] = sym_brace_open,
  [sym_brace_close] = sym_brace_close,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_u64] = sym_u64,
  [aux_sym_user_token1] = aux_sym_user_token1,
  [sym__variable_name_imm] = sym__variable_name_imm,
  [sym_glob] = sym_glob,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_str] = sym_str,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_exec_rule] = sym_exec_rule,
  [sym_exec_body] = sym_exec_body,
  [sym__exec_statement] = sym__exec_statement,
  [sym_askpass_statement] = sym_askpass_statement,
  [sym_keepenv_statement] = sym_askpass_statement,
  [sym_origin_statement] = sym_askpass_statement,
  [sym_target_statement] = sym_askpass_statement,
  [sym_timeout_statement] = sym_askpass_statement,
  [sym_setenv_statement] = sym_askpass_statement,
  [sym_exe_statement] = sym_askpass_statement,
  [sym_bool] = sym_bool,
  [sym_user] = sym_user,
  [sym_group] = sym_group,
  [sym__variable_name] = sym__variable_name_imm,
  [sym_exe_expr] = sym_exe_expr,
  [sym_glob_or] = sym_glob_or,
  [sym_environment] = sym_environment,
  [sym_copy_variable] = sym_copy_variable,
  [sym_remove_variable] = sym_remove_variable,
  [sym_string_expansion] = sym_string_expansion,
  [sym_string] = sym_string,
  [sym_set_variable] = sym_set_variable,
  [sym_target_expression] = sym_target_expression,
  [sym_target_match_or] = sym_glob_or,
  [sym_target_match] = sym_target_match,
  [sym_origin_expression] = sym_origin_expression,
  [sym__origin_expression] = sym__origin_expression,
  [sym_origin_or] = sym_glob_or,
  [sym_user_expression] = sym_user_expression,
  [sym_group_expression] = sym_group_expression,
  [sym_user_or] = sym_glob_or,
  [sym_group_or] = sym_glob_or,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_exec_body_repeat1] = aux_sym_exec_body_repeat1,
  [aux_sym_environment_repeat1] = aux_sym_environment_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [sym_askpass] = {
    .visible = true,
    .named = true,
  },
  [sym_keepenv] = {
    .visible = true,
    .named = true,
  },
  [sym_origin] = {
    .visible = true,
    .named = true,
  },
  [sym_target] = {
    .visible = true,
    .named = true,
  },
  [sym_timeout] = {
    .visible = true,
    .named = true,
  },
  [sym_setenv] = {
    .visible = true,
    .named = true,
  },
  [sym_exe] = {
    .visible = true,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_semicolon] = {
    .visible = true,
    .named = true,
  },
  [sym_assign] = {
    .visible = true,
    .named = true,
  },
  [sym_assign_imm] = {
    .visible = true,
    .named = true,
  },
  [sym_or] = {
    .visible = true,
    .named = true,
  },
  [sym_minus] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_brace_open] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_u64] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_user_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__variable_name_imm] = {
    .visible = true,
    .named = true,
  },
  [sym_glob] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_str] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_exec_body] = {
    .visible = true,
    .named = true,
  },
  [sym__exec_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_askpass_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_keepenv_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_origin_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_target_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_timeout_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_setenv_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_exe_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_user] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym__variable_name] = {
    .visible = true,
    .named = true,
  },
  [sym_exe_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_glob_or] = {
    .visible = true,
    .named = true,
  },
  [sym_environment] = {
    .visible = true,
    .named = true,
  },
  [sym_copy_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_remove_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_string_expansion] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_set_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_target_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_target_match_or] = {
    .visible = true,
    .named = true,
  },
  [sym_target_match] = {
    .visible = true,
    .named = true,
  },
  [sym_origin_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__origin_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_origin_or] = {
    .visible = true,
    .named = true,
  },
  [sym_user_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_group_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_user_or] = {
    .visible = true,
    .named = true,
  },
  [sym_group_or] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_exec_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_environment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_brace_close = 2,
  field_brace_open = 3,
  field_end = 4,
  field_group_separator = 5,
  field_groups = 6,
  field_key = 7,
  field_left = 8,
  field_minus = 9,
  field_name = 10,
  field_operator = 11,
  field_right = 12,
  field_users = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_brace_close] = "brace_close",
  [field_brace_open] = "brace_open",
  [field_end] = "end",
  [field_group_separator] = "group_separator",
  [field_groups] = "groups",
  [field_key] = "key",
  [field_left] = "left",
  [field_minus] = "minus",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
  [field_users] = "users",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 4},
  [6] = {.index = 10, .length = 2},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 3},
  [9] = {.index = 16, .length = 3},
  [10] = {.index = 19, .length = 3},
  [11] = {.index = 22, .length = 2},
  [12] = {.index = 24, .length = 4},
  [13] = {.index = 28, .length = 3},
  [14] = {.index = 31, .length = 2},
  [15] = {.index = 33, .length = 5},
  [16] = {.index = 38, .length = 5},
  [17] = {.index = 43, .length = 2},
  [18] = {.index = 45, .length = 1},
  [19] = {.index = 46, .length = 7},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
  [1] =
    {field_brace_close, 1},
    {field_brace_open, 0},
  [3] =
    {field_brace_close, 2},
    {field_brace_open, 0},
  [5] =
    {field_users, 0},
  [6] =
    {field_end, 3},
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
  [10] =
    {field_group_separator, 0},
    {field_groups, 1},
  [12] =
    {field_name, 0},
  [13] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [16] =
    {field_users, 0},
    {field_users, 1},
    {field_users, 2},
  [19] =
    {field_group_separator, 1},
    {field_groups, 2},
    {field_users, 0},
  [22] =
    {field_minus, 0},
    {field_name, 1},
  [24] =
    {field_group_separator, 0},
    {field_groups, 1},
    {field_groups, 2},
    {field_groups, 3},
  [28] =
    {field_name, 0},
    {field_operator, 1},
    {field_value, 2},
  [31] =
    {field_brace_close, 3},
    {field_brace_open, 0},
  [33] =
    {field_group_separator, 3},
    {field_groups, 4},
    {field_users, 0},
    {field_users, 1},
    {field_users, 2},
  [38] =
    {field_group_separator, 1},
    {field_groups, 2},
    {field_groups, 3},
    {field_groups, 4},
    {field_users, 0},
  [43] =
    {field_brace_close, 4},
    {field_brace_open, 0},
  [45] =
    {field_name, 1},
  [46] =
    {field_group_separator, 3},
    {field_groups, 4},
    {field_groups, 5},
    {field_groups, 6},
    {field_users, 0},
    {field_users, 1},
    {field_users, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '\r') SKIP(59)
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == '1') ADVANCE(105);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(241);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 'k') ADVANCE(223);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'r') ADVANCE(248);
      if (lookahead == 's') ADVANCE(214);
      if (lookahead == 't') ADVANCE(212);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '}') ADVANCE(266);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(103);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(58);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(1);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(3);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'k') ADVANCE(35);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(13);
      END_STATE();
    case 52:
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(262);
      END_STATE();
    case 53:
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(259);
      if (lookahead == '\r') ADVANCE(259);
      if (lookahead == ' ') SKIP(53)
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(257);
      END_STATE();
    case 54:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(54)
      if (lookahead == '\r') SKIP(54)
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == '}') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 55:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead == '\r') ADVANCE(263);
      if (lookahead == '"') ADVANCE(267);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '$') ADVANCE(264);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 56:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\r') SKIP(56)
      if (lookahead == '#') ADVANCE(269);
      END_STATE();
    case 57:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\r') SKIP(56)
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '}') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 59:
      if (eof) ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(59)
      if (lookahead == '\r') SKIP(59)
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == '1') ADVANCE(105);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == ';') ADVANCE(88);
      if (lookahead == '=') ADVANCE(89);
      if (lookahead == 'a') ADVANCE(197);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead == 'f') ADVANCE(167);
      if (lookahead == 'k') ADVANCE(179);
      if (lookahead == 'o') ADVANCE(195);
      if (lookahead == 'r') ADVANCE(204);
      if (lookahead == 's') ADVANCE(170);
      if (lookahead == 't') ADVANCE(168);
      if (lookahead == '{') ADVANCE(95);
      if (lookahead == '|') ADVANCE(91);
      if (lookahead == '}') ADVANCE(96);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 60:
      if (eof) ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '\r') SKIP(61)
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == '=') ADVANCE(90);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'k') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '}') ADVANCE(96);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(61)
      if (lookahead == '\r') SKIP(61)
      if (lookahead == '#') ADVANCE(269);
      if (lookahead == ',') ADVANCE(260);
      if (lookahead == 'a') ADVANCE(39);
      if (lookahead == 'e') ADVANCE(51);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'k') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(37);
      if (lookahead == 'r') ADVANCE(46);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '}') ADVANCE(96);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_askpass);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_askpass);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_askpass);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_keepenv);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_keepenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_keepenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_origin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_origin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_target);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_target);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_timeout);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_setenv);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_setenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_setenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_exe);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_exe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_exe);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_assign_imm);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_brace_open);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_brace_close);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_u64);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(103);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == '8') ADVANCE(150);
      if (lookahead == '9') ADVANCE(165);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(151);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(129);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(7);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '5') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(7);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(130);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(108);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(104);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(112);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '7') ADVANCE(106);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(155);
      if (('1' <= lookahead && lookahead <= '6')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(118);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(117);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(5);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(123);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(124);
      if (lookahead == '9') ADVANCE(152);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(153);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '3') ADVANCE(119);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(120);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(120);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(122);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == '7') ADVANCE(126);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(157);
      if (('1' <= lookahead && lookahead <= '6')) ADVANCE(127);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(127);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(128);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(132);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '4') ADVANCE(110);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(133);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(134);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(136);
      if (lookahead == '4') ADVANCE(135);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(136);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(136);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == '7') ADVANCE(138);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(161);
      if (('1' <= lookahead && lookahead <= '6')) ADVANCE(139);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(140);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '6') ADVANCE(141);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(162);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(142);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(142);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(143);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == '4') ADVANCE(144);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(145);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(145);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(146);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(148);
      if (lookahead == '4') ADVANCE(147);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(148);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(148);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '5') ADVANCE(109);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(108);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(196);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'g') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'g') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'i') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'i') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'k') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'l') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'l') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'm') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'n') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'n') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'n') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'o') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'p') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'p') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'r') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'r') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 't') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 't') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'v') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'v') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'x') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'a') ADVANCE(240);
      if (lookahead == 'i') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'a') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'g') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'g') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'i') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'k') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'l') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'l') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'm') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'n') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'o') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'p') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'p') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'r') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 's') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 's') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 's') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 's') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 't') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'u') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'u') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'u') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'v') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'v') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'x') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(254);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_glob);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(255);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_glob);
      if (lookahead == '\n') ADVANCE(257);
      if (lookahead == '\\') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != 0) ADVANCE(255);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_glob);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(257);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_glob);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != 0) ADVANCE(257);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_glob);
      if (('\t' <= lookahead && lookahead <= '\f')) ADVANCE(259);
      if (lookahead == '\r') ADVANCE(259);
      if (lookahead == '#') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != 0 &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(257);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\n') ADVANCE(262);
      if (lookahead == '\\') ADVANCE(268);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(261);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_str);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(263);
      if (lookahead == '\r') ADVANCE(263);
      if (lookahead == '#') ADVANCE(261);
      if (lookahead == '\\') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(262);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(261);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(269);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 60},
  [2] = {.lex_state = 60},
  [3] = {.lex_state = 60},
  [4] = {.lex_state = 60},
  [5] = {.lex_state = 54},
  [6] = {.lex_state = 54},
  [7] = {.lex_state = 60},
  [8] = {.lex_state = 60},
  [9] = {.lex_state = 60},
  [10] = {.lex_state = 60},
  [11] = {.lex_state = 60},
  [12] = {.lex_state = 60},
  [13] = {.lex_state = 60},
  [14] = {.lex_state = 54},
  [15] = {.lex_state = 54},
  [16] = {.lex_state = 54},
  [17] = {.lex_state = 55},
  [18] = {.lex_state = 55},
  [19] = {.lex_state = 54},
  [20] = {.lex_state = 55},
  [21] = {.lex_state = 54},
  [22] = {.lex_state = 60},
  [23] = {.lex_state = 55},
  [24] = {.lex_state = 55},
  [25] = {.lex_state = 60},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 54},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 60},
  [30] = {.lex_state = 60},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 54},
  [33] = {.lex_state = 53},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 54},
  [36] = {.lex_state = 54},
  [37] = {.lex_state = 60},
  [38] = {.lex_state = 54},
  [39] = {.lex_state = 60},
  [40] = {.lex_state = 54},
  [41] = {.lex_state = 54},
  [42] = {.lex_state = 54},
  [43] = {.lex_state = 54},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 54},
  [46] = {.lex_state = 54},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 60},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 60},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 60},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 60},
  [65] = {.lex_state = 60},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 53},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 60},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 60},
  [76] = {.lex_state = 60},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 60},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 54},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 54},
  [91] = {.lex_state = 54},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 54},
  [94] = {.lex_state = 57},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 54},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 57},
  [107] = {.lex_state = 57},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 54},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 54},
  [115] = {.lex_state = 57},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [sym_askpass] = ACTIONS(1),
    [sym_keepenv] = ACTIONS(1),
    [sym_origin] = ACTIONS(1),
    [sym_target] = ACTIONS(1),
    [sym_timeout] = ACTIONS(1),
    [sym_setenv] = ACTIONS(1),
    [sym_exe] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_assign] = ACTIONS(1),
    [sym_assign_imm] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_minus] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_brace_open] = ACTIONS(1),
    [sym_brace_close] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_u64] = ACTIONS(1),
    [aux_sym_user_token1] = ACTIONS(1),
    [sym__variable_name_imm] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(119),
    [sym_exec_rule] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_askpass,
    ACTIONS(11), 1,
      sym_keepenv,
    ACTIONS(13), 1,
      sym_origin,
    ACTIONS(15), 1,
      sym_target,
    ACTIONS(17), 1,
      sym_timeout,
    ACTIONS(19), 1,
      sym_setenv,
    ACTIONS(21), 1,
      sym_exe,
    ACTIONS(23), 1,
      sym_brace_close,
    STATE(3), 9,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      sym_origin_statement,
      sym_target_statement,
      sym_timeout_statement,
      sym_setenv_statement,
      sym_exe_statement,
      aux_sym_exec_body_repeat1,
  [39] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym_askpass,
    ACTIONS(28), 1,
      sym_keepenv,
    ACTIONS(31), 1,
      sym_origin,
    ACTIONS(34), 1,
      sym_target,
    ACTIONS(37), 1,
      sym_timeout,
    ACTIONS(40), 1,
      sym_setenv,
    ACTIONS(43), 1,
      sym_exe,
    ACTIONS(46), 1,
      sym_brace_close,
    STATE(3), 9,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      sym_origin_statement,
      sym_target_statement,
      sym_timeout_statement,
      sym_setenv_statement,
      sym_exe_statement,
      aux_sym_exec_body_repeat1,
  [78] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_askpass,
    ACTIONS(11), 1,
      sym_keepenv,
    ACTIONS(13), 1,
      sym_origin,
    ACTIONS(15), 1,
      sym_target,
    ACTIONS(17), 1,
      sym_timeout,
    ACTIONS(19), 1,
      sym_setenv,
    ACTIONS(21), 1,
      sym_exe,
    ACTIONS(48), 1,
      sym_brace_close,
    STATE(2), 9,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      sym_origin_statement,
      sym_target_statement,
      sym_timeout_statement,
      sym_setenv_statement,
      sym_exe_statement,
      aux_sym_exec_body_repeat1,
  [117] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_colon,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      aux_sym_user_token1,
    STATE(48), 1,
      sym_user,
    STATE(111), 1,
      sym_origin_or,
    STATE(112), 1,
      sym_origin_expression,
    STATE(47), 3,
      sym__origin_expression,
      sym_user_expression,
      sym_group_expression,
  [144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_colon,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      aux_sym_user_token1,
    STATE(48), 1,
      sym_user,
    STATE(85), 1,
      sym_origin_or,
    STATE(74), 3,
      sym__origin_expression,
      sym_user_expression,
      sym_group_expression,
  [168] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 8,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_exe,
      sym_brace_close,
  [182] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 8,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_exe,
      sym_brace_close,
  [196] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 8,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_exe,
      sym_brace_close,
  [210] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 8,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_exe,
      sym_brace_close,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 8,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_exe,
      sym_brace_close,
  [238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 8,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_exe,
      sym_brace_close,
  [252] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(68), 8,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_exe,
      sym_brace_close,
  [266] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      sym_minus,
    ACTIONS(73), 1,
      aux_sym_user_token1,
    STATE(14), 1,
      aux_sym_environment_repeat1,
    STATE(37), 1,
      sym__variable_name,
    STATE(100), 3,
      sym_copy_variable,
      sym_remove_variable,
      sym_set_variable,
  [287] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_minus,
    ACTIONS(78), 1,
      aux_sym_user_token1,
    STATE(14), 1,
      aux_sym_environment_repeat1,
    STATE(37), 1,
      sym__variable_name,
    STATE(62), 3,
      sym_copy_variable,
      sym_remove_variable,
      sym_set_variable,
  [308] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 1,
      sym_minus,
    ACTIONS(78), 1,
      aux_sym_user_token1,
    STATE(15), 1,
      aux_sym_environment_repeat1,
    STATE(37), 1,
      sym__variable_name,
    STATE(65), 3,
      sym_copy_variable,
      sym_remove_variable,
      sym_set_variable,
  [329] = 6,
    ACTIONS(80), 1,
      sym_str,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      sym_comment,
    STATE(20), 2,
      sym_string_expansion,
      aux_sym_string_repeat1,
  [349] = 6,
    ACTIONS(82), 1,
      anon_sym_DOLLAR,
    ACTIONS(84), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(90), 1,
      sym_str,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    STATE(17), 2,
      sym_string_expansion,
      aux_sym_string_repeat1,
  [369] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_user_token1,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_user,
    STATE(51), 1,
      sym_target_match,
    STATE(105), 1,
      sym_target_match_or,
    STATE(108), 1,
      sym_target_expression,
  [391] = 6,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_str,
    ACTIONS(99), 1,
      anon_sym_DOLLAR,
    ACTIONS(102), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    STATE(20), 2,
      sym_string_expansion,
      aux_sym_string_repeat1,
  [411] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_user_token1,
    ACTIONS(94), 1,
      anon_sym_LPAREN,
    STATE(44), 1,
      sym_user,
    STATE(78), 1,
      sym_target_match,
    STATE(84), 1,
      sym_target_match_or,
  [430] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 1,
      anon_sym_rule,
    STATE(22), 2,
      sym_exec_rule,
      aux_sym_source_file_repeat1,
  [444] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_DOLLAR,
    ACTIONS(112), 3,
      sym_str,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
  [456] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(118), 1,
      anon_sym_DOLLAR,
    ACTIONS(116), 3,
      sym_str,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
  [468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_rule,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_exec_rule,
      aux_sym_source_file_repeat1,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 4,
      sym_colon,
      sym_semicolon,
      sym_or,
      anon_sym_RPAREN,
  [492] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      anon_sym_LPAREN,
    ACTIONS(126), 1,
      aux_sym_user_token1,
    STATE(55), 1,
      sym_group,
  [505] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 3,
      sym_semicolon,
      sym_or,
      anon_sym_RPAREN,
  [514] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(117), 1,
      sym_bool,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
  [525] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(116), 1,
      sym_bool,
    ACTIONS(130), 2,
      anon_sym_true,
      anon_sym_false,
  [536] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_brace_close,
    ACTIONS(132), 2,
      sym_minus,
      aux_sym_user_token1,
  [547] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_user_token1,
    STATE(59), 1,
      sym_group,
    STATE(95), 1,
      sym_group_or,
  [560] = 4,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(136), 1,
      sym_glob,
    STATE(82), 1,
      sym_exe_expr,
    STATE(101), 1,
      sym_glob_or,
  [573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 1,
      sym_colon,
    ACTIONS(140), 2,
      sym_semicolon,
      sym_or,
  [584] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_user_token1,
    STATE(66), 1,
      sym_user,
    STATE(92), 1,
      sym_user_or,
  [597] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_user_token1,
    STATE(52), 1,
      sym_group,
    STATE(102), 1,
      sym_group_or,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 1,
      sym_assign_imm,
    ACTIONS(144), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [621] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_user_token1,
    STATE(56), 1,
      sym_user,
    STATE(99), 1,
      sym_user_or,
  [634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      sym_assign_imm,
      sym_brace_close,
      anon_sym_COMMA,
  [643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_user_token1,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_group,
  [656] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_user_token1,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(77), 1,
      sym_group,
  [669] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_user_token1,
    STATE(69), 1,
      sym_group,
    STATE(113), 1,
      sym_group_or,
  [682] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      aux_sym_user_token1,
    STATE(58), 1,
      sym_user,
    STATE(97), 1,
      sym_user_or,
  [695] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_colon,
    ACTIONS(154), 2,
      sym_semicolon,
      sym_or,
  [706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym_brace_close,
    ACTIONS(132), 2,
      sym_minus,
      aux_sym_user_token1,
  [717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_user_token1,
    STATE(70), 1,
      sym_group,
    STATE(89), 1,
      sym_group_or,
  [730] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_semicolon,
    ACTIONS(160), 1,
      sym_or,
  [740] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 2,
      sym_semicolon,
      sym_or,
  [748] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      sym_semicolon,
      sym_or,
  [756] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 2,
      sym_semicolon,
      sym_or,
  [764] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_semicolon,
    ACTIONS(170), 1,
      sym_or,
  [774] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_or,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [784] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_semicolon,
    ACTIONS(178), 1,
      sym_or,
  [794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 2,
      sym_semicolon,
      sym_or,
  [810] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_or,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [828] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_or,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
  [838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_or,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 2,
      sym_semicolon,
      sym_or,
  [856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_brace_open,
    STATE(75), 1,
      sym_exec_body,
  [866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_brace_close,
    ACTIONS(198), 1,
      anon_sym_COMMA,
  [876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 2,
      sym_minus,
      aux_sym_user_token1,
  [884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_brace_close,
    ACTIONS(204), 1,
      anon_sym_COMMA,
  [902] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_or,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 2,
      sym_semicolon,
      sym_or,
  [920] = 3,
    ACTIONS(88), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_glob,
    STATE(88), 1,
      sym_glob_or,
  [930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_or,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym_or,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym_or,
    ACTIONS(216), 1,
      sym_semicolon,
  [960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [968] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 2,
      sym_semicolon,
      sym_or,
  [976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      sym_or,
    ACTIONS(222), 1,
      sym_semicolon,
  [986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(224), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [1002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 2,
      sym_semicolon,
      sym_or,
  [1010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_or,
    ACTIONS(230), 1,
      sym_semicolon,
  [1020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [1028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 1,
      anon_sym_DQUOTE,
    STATE(57), 1,
      sym_string,
  [1038] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 1,
      sym_brace_open,
    STATE(103), 1,
      sym_environment,
  [1048] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      sym_semicolon,
  [1055] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      sym_semicolon,
  [1062] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 1,
      sym_semicolon,
  [1069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_semicolon,
  [1076] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_assign,
  [1083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_u64,
  [1090] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_semicolon,
  [1097] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
  [1104] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym_assign,
  [1111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym_assign,
  [1118] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [1125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_assign,
  [1132] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym__variable_name_imm,
  [1139] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [1146] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_assign,
  [1153] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
  [1160] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym_semicolon,
  [1167] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
  [1174] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_COMMA,
  [1181] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_semicolon,
  [1188] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      anon_sym_RPAREN,
  [1195] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_semicolon,
  [1202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym_semicolon,
  [1209] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      sym_semicolon,
  [1216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__variable_name_imm,
  [1223] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__variable_name_imm,
  [1230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_semicolon,
  [1237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_assign,
  [1244] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym_semicolon,
  [1251] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 1,
      sym_semicolon,
  [1258] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_semicolon,
  [1265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_RPAREN,
  [1272] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_assign,
  [1279] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_RBRACE,
  [1286] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym_semicolon,
  [1293] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym_semicolon,
  [1300] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_semicolon,
  [1307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 144,
  [SMALL_STATE(7)] = 168,
  [SMALL_STATE(8)] = 182,
  [SMALL_STATE(9)] = 196,
  [SMALL_STATE(10)] = 210,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 238,
  [SMALL_STATE(13)] = 252,
  [SMALL_STATE(14)] = 266,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 308,
  [SMALL_STATE(17)] = 329,
  [SMALL_STATE(18)] = 349,
  [SMALL_STATE(19)] = 369,
  [SMALL_STATE(20)] = 391,
  [SMALL_STATE(21)] = 411,
  [SMALL_STATE(22)] = 430,
  [SMALL_STATE(23)] = 444,
  [SMALL_STATE(24)] = 456,
  [SMALL_STATE(25)] = 468,
  [SMALL_STATE(26)] = 482,
  [SMALL_STATE(27)] = 492,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 514,
  [SMALL_STATE(30)] = 525,
  [SMALL_STATE(31)] = 536,
  [SMALL_STATE(32)] = 547,
  [SMALL_STATE(33)] = 560,
  [SMALL_STATE(34)] = 573,
  [SMALL_STATE(35)] = 584,
  [SMALL_STATE(36)] = 597,
  [SMALL_STATE(37)] = 610,
  [SMALL_STATE(38)] = 621,
  [SMALL_STATE(39)] = 634,
  [SMALL_STATE(40)] = 643,
  [SMALL_STATE(41)] = 656,
  [SMALL_STATE(42)] = 669,
  [SMALL_STATE(43)] = 682,
  [SMALL_STATE(44)] = 695,
  [SMALL_STATE(45)] = 706,
  [SMALL_STATE(46)] = 717,
  [SMALL_STATE(47)] = 730,
  [SMALL_STATE(48)] = 740,
  [SMALL_STATE(49)] = 748,
  [SMALL_STATE(50)] = 756,
  [SMALL_STATE(51)] = 764,
  [SMALL_STATE(52)] = 774,
  [SMALL_STATE(53)] = 784,
  [SMALL_STATE(54)] = 794,
  [SMALL_STATE(55)] = 802,
  [SMALL_STATE(56)] = 810,
  [SMALL_STATE(57)] = 820,
  [SMALL_STATE(58)] = 828,
  [SMALL_STATE(59)] = 838,
  [SMALL_STATE(60)] = 848,
  [SMALL_STATE(61)] = 856,
  [SMALL_STATE(62)] = 866,
  [SMALL_STATE(63)] = 876,
  [SMALL_STATE(64)] = 884,
  [SMALL_STATE(65)] = 892,
  [SMALL_STATE(66)] = 902,
  [SMALL_STATE(67)] = 912,
  [SMALL_STATE(68)] = 920,
  [SMALL_STATE(69)] = 930,
  [SMALL_STATE(70)] = 940,
  [SMALL_STATE(71)] = 950,
  [SMALL_STATE(72)] = 960,
  [SMALL_STATE(73)] = 968,
  [SMALL_STATE(74)] = 976,
  [SMALL_STATE(75)] = 986,
  [SMALL_STATE(76)] = 994,
  [SMALL_STATE(77)] = 1002,
  [SMALL_STATE(78)] = 1010,
  [SMALL_STATE(79)] = 1020,
  [SMALL_STATE(80)] = 1028,
  [SMALL_STATE(81)] = 1038,
  [SMALL_STATE(82)] = 1048,
  [SMALL_STATE(83)] = 1055,
  [SMALL_STATE(84)] = 1062,
  [SMALL_STATE(85)] = 1069,
  [SMALL_STATE(86)] = 1076,
  [SMALL_STATE(87)] = 1083,
  [SMALL_STATE(88)] = 1090,
  [SMALL_STATE(89)] = 1097,
  [SMALL_STATE(90)] = 1104,
  [SMALL_STATE(91)] = 1111,
  [SMALL_STATE(92)] = 1118,
  [SMALL_STATE(93)] = 1125,
  [SMALL_STATE(94)] = 1132,
  [SMALL_STATE(95)] = 1139,
  [SMALL_STATE(96)] = 1146,
  [SMALL_STATE(97)] = 1153,
  [SMALL_STATE(98)] = 1160,
  [SMALL_STATE(99)] = 1167,
  [SMALL_STATE(100)] = 1174,
  [SMALL_STATE(101)] = 1181,
  [SMALL_STATE(102)] = 1188,
  [SMALL_STATE(103)] = 1195,
  [SMALL_STATE(104)] = 1202,
  [SMALL_STATE(105)] = 1209,
  [SMALL_STATE(106)] = 1216,
  [SMALL_STATE(107)] = 1223,
  [SMALL_STATE(108)] = 1230,
  [SMALL_STATE(109)] = 1237,
  [SMALL_STATE(110)] = 1244,
  [SMALL_STATE(111)] = 1251,
  [SMALL_STATE(112)] = 1258,
  [SMALL_STATE(113)] = 1265,
  [SMALL_STATE(114)] = 1272,
  [SMALL_STATE(115)] = 1279,
  [SMALL_STATE(116)] = 1286,
  [SMALL_STATE(117)] = 1293,
  [SMALL_STATE(118)] = 1300,
  [SMALL_STATE(119)] = 1307,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(114),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(109),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(96),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(86),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(90),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(91),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(93),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exe_statement, 4, .production_id = 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setenv_statement, 4, .production_id = 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout_statement, 4, .production_id = 5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_statement, 4, .production_id = 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_statement, 4, .production_id = 5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_askpass_statement, 4, .production_id = 5),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keepenv_statement, 4, .production_id = 5),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(94),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(39),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(20),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(106),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(107),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expansion, 3, .production_id = 18),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_expansion, 3, .production_id = 18),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expansion, 2, .production_id = 18),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_expansion, 2, .production_id = 18),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 3, .production_id = 9),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_variable, 1, .production_id = 7),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 1, .production_id = 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_expression, 1),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_expression, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 5, .production_id = 16),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 5, .production_id = 15),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_expression, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_or, 3, .production_id = 8),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exe_expr, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_body, 2, .production_id = 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expression, 2, .production_id = 6),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_variable, 3, .production_id = 13),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 7, .production_id = 19),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_or, 3, .production_id = 8),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expression, 4, .production_id = 12),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_or, 3, .production_id = 8),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_expression, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_or, 3, .production_id = 8),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_rule, 2, .production_id = 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_body, 3, .production_id = 3),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 3, .production_id = 10),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match_or, 3, .production_id = 8),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_variable, 2, .production_id = 11),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3, .production_id = 3),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 4, .production_id = 14),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 5, .production_id = 17),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [286] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pezzo(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
