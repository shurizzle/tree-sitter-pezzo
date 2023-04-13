#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  sym_colon = 8,
  sym_semicolon = 9,
  sym_assign = 10,
  sym_assign_imm = 11,
  sym_or = 12,
  sym_minus = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  sym_brace_open = 16,
  sym_brace_close = 17,
  anon_sym_true = 18,
  anon_sym_false = 19,
  sym_u64 = 20,
  aux_sym_user_token1 = 21,
  sym__variable_name_imm = 22,
  anon_sym_COMMA = 23,
  sym_str = 24,
  anon_sym_DOLLAR = 25,
  anon_sym_DOLLAR_LBRACE = 26,
  anon_sym_RBRACE = 27,
  anon_sym_DQUOTE = 28,
  sym_comment = 29,
  sym_source_file = 30,
  sym_exec_rule = 31,
  sym_exec_body = 32,
  sym__exec_statement = 33,
  sym_askpass_statement = 34,
  sym_keepenv_statement = 35,
  sym_origin_statement = 36,
  sym_target_statement = 37,
  sym_timeout_statement = 38,
  sym_setenv_statement = 39,
  sym_bool = 40,
  sym_user = 41,
  sym_group = 42,
  sym__variable_name = 43,
  sym_environment = 44,
  sym_copy_variable = 45,
  sym_remove_variable = 46,
  sym_string_expansion = 47,
  sym_string = 48,
  sym_set_variable = 49,
  sym_target_expression = 50,
  sym_target_match_or = 51,
  sym_target_match = 52,
  sym_origin_expression = 53,
  sym__origin_expression = 54,
  sym_origin_or = 55,
  sym_user_expression = 56,
  sym_group_expression = 57,
  sym_user_or = 58,
  sym_group_or = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_exec_body_repeat1 = 61,
  aux_sym_environment_repeat1 = 62,
  aux_sym_string_repeat1 = 63,
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
  [sym_bool] = "bool",
  [sym_user] = "user",
  [sym_group] = "group",
  [sym__variable_name] = "variable_name",
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
  [sym_bool] = sym_bool,
  [sym_user] = sym_user,
  [sym_group] = sym_group,
  [sym__variable_name] = sym__variable_name_imm,
  [sym_environment] = sym_environment,
  [sym_copy_variable] = sym_copy_variable,
  [sym_remove_variable] = sym_remove_variable,
  [sym_string_expansion] = sym_string_expansion,
  [sym_string] = sym_string,
  [sym_set_variable] = sym_set_variable,
  [sym_target_expression] = sym_target_expression,
  [sym_target_match_or] = sym_target_match_or,
  [sym_target_match] = sym_target_match,
  [sym_origin_expression] = sym_origin_expression,
  [sym__origin_expression] = sym__origin_expression,
  [sym_origin_or] = sym_target_match_or,
  [sym_user_expression] = sym_user_expression,
  [sym_group_expression] = sym_group_expression,
  [sym_user_or] = sym_target_match_or,
  [sym_group_or] = sym_target_match_or,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\r') SKIP(56)
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'f') ADVANCE(203);
      if (lookahead == 'k') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(239);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == 't') ADVANCE(204);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '}') ADVANCE(251);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(97);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(55);
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
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(37);
      if (lookahead == 'i') ADVANCE(29);
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'k') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 35:
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 45:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 47:
      if (lookahead == 'u') ADVANCE(16);
      END_STATE();
    case 48:
      if (lookahead == 'v') ADVANCE(78);
      END_STATE();
    case 49:
      if (lookahead == 'v') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(247);
      END_STATE();
    case 51:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(51)
      if (lookahead == '\r') SKIP(51)
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '}') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 52:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '"') ADVANCE(252);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '$') ADVANCE(249);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 53:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '\r') SKIP(53)
      if (lookahead == '#') ADVANCE(254);
      END_STATE();
    case 54:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(53)
      if (lookahead == '\r') SKIP(53)
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '}') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 56:
      if (eof) ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(56)
      if (lookahead == '\r') SKIP(56)
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == '(') ADVANCE(87);
      if (lookahead == ')') ADVANCE(88);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '1') ADVANCE(99);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == ';') ADVANCE(82);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 'k') ADVANCE(172);
      if (lookahead == 'o') ADVANCE(188);
      if (lookahead == 'r') ADVANCE(197);
      if (lookahead == 's') ADVANCE(164);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead == '{') ADVANCE(89);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '}') ADVANCE(90);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 57:
      if (eof) ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\r') SKIP(58)
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == '=') ADVANCE(84);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'k') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 58:
      if (eof) ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(58)
      if (lookahead == '\r') SKIP(58)
      if (lookahead == '#') ADVANCE(254);
      if (lookahead == ',') ADVANCE(245);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'k') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(36);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_askpass);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_askpass);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_askpass);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_keepenv);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_keepenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_keepenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_origin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_origin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_target);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_target);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_timeout);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_setenv);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_setenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_setenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_assign_imm);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_brace_open);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_brace_close);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_u64);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(143);
      if (lookahead == '8') ADVANCE(144);
      if (lookahead == '9') ADVANCE(159);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(145);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(119);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(123);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(7);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '5') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(7);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(124);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(98);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(108);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(106);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(112);
      if (lookahead == '7') ADVANCE(100);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(149);
      if (('1' <= lookahead && lookahead <= '6')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(112);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(110);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(111);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(5);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(118);
      if (lookahead == '9') ADVANCE(146);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(147);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(114);
      if (lookahead == '3') ADVANCE(113);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(114);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(116);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == '7') ADVANCE(120);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(151);
      if (('1' <= lookahead && lookahead <= '6')) ADVANCE(121);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(121);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(122);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(125);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(126);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(127);
      if (lookahead == '4') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(127);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(127);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(128);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == '4') ADVANCE(129);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(130);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(130);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(131);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '7') ADVANCE(132);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(155);
      if (('1' <= lookahead && lookahead <= '6')) ADVANCE(133);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(134);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(136);
      if (lookahead == '6') ADVANCE(135);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(136);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(136);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == '4') ADVANCE(138);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(139);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(139);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(140);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '4') ADVANCE(141);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(142);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(142);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '5') ADVANCE(103);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(102);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
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
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(189);
      if (lookahead == 'i') ADVANCE(181);
      if (lookahead == 'r') ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'g') ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'g') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'i') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'i') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'k') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'l') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'l') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'm') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'n') ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'n') ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'n') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'o') ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'p') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'p') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'r') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'r') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 't') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 't') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 't') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'v') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'v') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(202);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'a') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'a') ADVANCE(231);
      if (lookahead == 'i') ADVANCE(223);
      if (lookahead == 'r') ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'a') ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'e') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'g') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'g') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'i') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'i') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'k') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'l') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'l') ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'm') ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'n') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'n') ADVANCE(243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'o') ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'p') ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'p') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'r') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'r') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 's') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 's') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 's') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 's') ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 't') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 't') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 't') ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'u') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'u') ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'u') ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'v') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (lookahead == 'v') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__variable_name_imm);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(244);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\n') ADVANCE(247);
      if (lookahead == '\\') ADVANCE(253);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(246);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_str);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '$') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_str);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') ADVANCE(248);
      if (lookahead == '\r') ADVANCE(248);
      if (lookahead == '#') ADVANCE(246);
      if (lookahead == '\\') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '"' || '$' < lookahead)) ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      if (lookahead == '{') ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"' ||
          lookahead == '$' ||
          lookahead == '\\') ADVANCE(246);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(254);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 57},
  [2] = {.lex_state = 57},
  [3] = {.lex_state = 57},
  [4] = {.lex_state = 57},
  [5] = {.lex_state = 51},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 57},
  [10] = {.lex_state = 57},
  [11] = {.lex_state = 57},
  [12] = {.lex_state = 57},
  [13] = {.lex_state = 57},
  [14] = {.lex_state = 57},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 51},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 51},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 57},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 57},
  [26] = {.lex_state = 51},
  [27] = {.lex_state = 51},
  [28] = {.lex_state = 57},
  [29] = {.lex_state = 57},
  [30] = {.lex_state = 51},
  [31] = {.lex_state = 51},
  [32] = {.lex_state = 51},
  [33] = {.lex_state = 51},
  [34] = {.lex_state = 51},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 51},
  [37] = {.lex_state = 51},
  [38] = {.lex_state = 57},
  [39] = {.lex_state = 57},
  [40] = {.lex_state = 51},
  [41] = {.lex_state = 51},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 51},
  [45] = {.lex_state = 57},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 57},
  [48] = {.lex_state = 57},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 51},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 57},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 57},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 57},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 57},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 57},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 51},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 51},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 51},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 51},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 54},
  [97] = {.lex_state = 54},
  [98] = {.lex_state = 54},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 51},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 51},
  [106] = {.lex_state = 54},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
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
    [sym_source_file] = STATE(110),
    [sym_exec_rule] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
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
      sym_brace_close,
    STATE(3), 8,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      sym_origin_statement,
      sym_target_statement,
      sym_timeout_statement,
      sym_setenv_statement,
      aux_sym_exec_body_repeat1,
  [35] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      sym_askpass,
    ACTIONS(26), 1,
      sym_keepenv,
    ACTIONS(29), 1,
      sym_origin,
    ACTIONS(32), 1,
      sym_target,
    ACTIONS(35), 1,
      sym_timeout,
    ACTIONS(38), 1,
      sym_setenv,
    ACTIONS(41), 1,
      sym_brace_close,
    STATE(3), 8,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      sym_origin_statement,
      sym_target_statement,
      sym_timeout_statement,
      sym_setenv_statement,
      aux_sym_exec_body_repeat1,
  [70] = 9,
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
    ACTIONS(43), 1,
      sym_brace_close,
    STATE(2), 8,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      sym_origin_statement,
      sym_target_statement,
      sym_timeout_statement,
      sym_setenv_statement,
      aux_sym_exec_body_repeat1,
  [105] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_colon,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_user_token1,
    STATE(65), 1,
      sym_user,
    STATE(95), 1,
      sym_origin_expression,
    STATE(99), 1,
      sym_origin_or,
    STATE(58), 3,
      sym__origin_expression,
      sym_user_expression,
      sym_group_expression,
  [132] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym_colon,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_user_token1,
    STATE(65), 1,
      sym_user,
    STATE(85), 1,
      sym_origin_or,
    STATE(67), 3,
      sym__origin_expression,
      sym_user_expression,
      sym_group_expression,
  [156] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_minus,
    ACTIONS(53), 1,
      aux_sym_user_token1,
    STATE(8), 1,
      aux_sym_environment_repeat1,
    STATE(38), 1,
      sym__variable_name,
    STATE(45), 3,
      sym_copy_variable,
      sym_remove_variable,
      sym_set_variable,
  [177] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      sym_minus,
    ACTIONS(58), 1,
      aux_sym_user_token1,
    STATE(8), 1,
      aux_sym_environment_repeat1,
    STATE(38), 1,
      sym__variable_name,
    STATE(91), 3,
      sym_copy_variable,
      sym_remove_variable,
      sym_set_variable,
  [198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(61), 7,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_brace_close,
  [211] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 7,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_brace_close,
  [224] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 7,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_brace_close,
  [237] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 7,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_brace_close,
  [250] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 7,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_brace_close,
  [263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 7,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_setenv,
      sym_brace_close,
  [276] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_minus,
    ACTIONS(53), 1,
      aux_sym_user_token1,
    STATE(7), 1,
      aux_sym_environment_repeat1,
    STATE(38), 1,
      sym__variable_name,
    STATE(60), 3,
      sym_copy_variable,
      sym_remove_variable,
      sym_set_variable,
  [297] = 6,
    ACTIONS(73), 1,
      sym_str,
    ACTIONS(75), 1,
      anon_sym_DOLLAR,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      sym_comment,
    STATE(19), 2,
      sym_string_expansion,
      aux_sym_string_repeat1,
  [317] = 6,
    ACTIONS(75), 1,
      anon_sym_DOLLAR,
    ACTIONS(77), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_str,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    STATE(16), 2,
      sym_string_expansion,
      aux_sym_string_repeat1,
  [337] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_user_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_user,
    STATE(76), 1,
      sym_target_match,
    STATE(107), 1,
      sym_target_expression,
    STATE(108), 1,
      sym_target_match_or,
  [359] = 6,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_str,
    ACTIONS(92), 1,
      anon_sym_DOLLAR,
    ACTIONS(95), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(19), 2,
      sym_string_expansion,
      aux_sym_string_repeat1,
  [379] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_user_token1,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_user,
    STATE(73), 1,
      sym_target_match,
    STATE(82), 1,
      sym_target_match_or,
  [398] = 3,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_DOLLAR,
    ACTIONS(100), 3,
      sym_str,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
  [410] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_rule,
    STATE(22), 2,
      sym_exec_rule,
      aux_sym_source_file_repeat1,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 4,
      sym_colon,
      sym_semicolon,
      sym_or,
      anon_sym_RPAREN,
  [434] = 3,
    ACTIONS(81), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_DOLLAR,
    ACTIONS(111), 3,
      sym_str,
      anon_sym_DOLLAR_LBRACE,
      anon_sym_DQUOTE,
  [446] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_rule,
    ACTIONS(115), 1,
      ts_builtin_sym_end,
    STATE(22), 2,
      sym_exec_rule,
      aux_sym_source_file_repeat1,
  [460] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_user_token1,
    STATE(51), 1,
      sym_user,
    STATE(103), 1,
      sym_user_or,
  [473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_user_token1,
    STATE(64), 1,
      sym_group,
    STATE(86), 1,
      sym_group_or,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(81), 1,
      sym_bool,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
  [497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(84), 1,
      sym_bool,
    ACTIONS(119), 2,
      anon_sym_true,
      anon_sym_false,
  [508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_user_token1,
    STATE(49), 1,
      sym_group,
    STATE(104), 1,
      sym_group_or,
  [521] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      sym_brace_close,
    ACTIONS(121), 2,
      sym_minus,
      aux_sym_user_token1,
  [532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_user_token1,
    ACTIONS(125), 1,
      anon_sym_LPAREN,
    STATE(57), 1,
      sym_group,
  [545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_user_token1,
    STATE(59), 1,
      sym_group,
    STATE(93), 1,
      sym_group_or,
  [558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_brace_close,
    ACTIONS(121), 2,
      sym_minus,
      aux_sym_user_token1,
  [569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 1,
      sym_colon,
    ACTIONS(131), 2,
      sym_semicolon,
      sym_or,
  [580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_user_token1,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(50), 1,
      sym_group,
  [593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_user_token1,
    STATE(69), 1,
      sym_user,
    STATE(83), 1,
      sym_user_or,
  [606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_assign_imm,
    ACTIONS(137), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [617] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 3,
      sym_assign_imm,
      sym_brace_close,
      anon_sym_COMMA,
  [626] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_user_token1,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_group,
  [639] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(49), 1,
      aux_sym_user_token1,
    STATE(53), 1,
      sym_user,
    STATE(102), 1,
      sym_user_or,
  [652] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_colon,
    ACTIONS(145), 2,
      sym_semicolon,
      sym_or,
  [663] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 3,
      sym_semicolon,
      sym_or,
      anon_sym_RPAREN,
  [672] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      aux_sym_user_token1,
    STATE(63), 1,
      sym_group,
    STATE(88), 1,
      sym_group_or,
  [685] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      sym_brace_close,
    ACTIONS(149), 1,
      anon_sym_COMMA,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 2,
      sym_semicolon,
      sym_or,
  [703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [719] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_or,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
  [729] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      sym_semicolon,
      sym_or,
  [737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_or,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
  [747] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 2,
      sym_minus,
      aux_sym_user_token1,
  [755] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_or,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 2,
      sym_semicolon,
      sym_or,
  [781] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_brace_open,
    STATE(47), 1,
      sym_exec_body,
  [791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 2,
      sym_semicolon,
      sym_or,
  [799] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_semicolon,
    ACTIONS(179), 1,
      sym_or,
  [809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_or,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
  [819] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_brace_close,
    ACTIONS(185), 1,
      anon_sym_COMMA,
  [829] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_brace_open,
    STATE(109), 1,
      sym_environment,
  [839] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [847] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_or,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [857] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_or,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [867] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 2,
      sym_semicolon,
      sym_or,
  [875] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 2,
      sym_semicolon,
      sym_or,
  [883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_or,
    ACTIONS(199), 1,
      sym_semicolon,
  [893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [901] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_or,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [919] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(207), 2,
      sym_semicolon,
      sym_or,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 2,
      sym_semicolon,
      sym_or,
  [935] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_semicolon,
    ACTIONS(213), 1,
      sym_or,
  [945] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 2,
      sym_brace_close,
      anon_sym_COMMA,
  [953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      sym_string,
  [963] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_or,
    ACTIONS(219), 1,
      sym_semicolon,
  [973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      sym_semicolon,
  [980] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      sym_u64,
  [987] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_assign,
  [994] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      sym_semicolon,
  [1001] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_semicolon,
  [1008] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_semicolon,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      sym_semicolon,
  [1029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym_semicolon,
  [1036] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_RPAREN,
  [1043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_assign,
  [1050] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
  [1057] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_semicolon,
  [1064] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_assign,
  [1071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(239), 1,
      anon_sym_COMMA,
  [1078] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      sym_assign,
  [1085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
  [1092] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      sym_semicolon,
  [1099] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_semicolon,
  [1106] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym__variable_name_imm,
  [1113] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      sym__variable_name_imm,
  [1120] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      sym__variable_name_imm,
  [1127] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_semicolon,
  [1134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_assign,
  [1141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_semicolon,
  [1148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
  [1155] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
  [1162] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
  [1169] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      sym_assign,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(259), 1,
      anon_sym_RBRACE,
  [1183] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      sym_semicolon,
  [1190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      sym_semicolon,
  [1197] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(263), 1,
      sym_semicolon,
  [1204] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 35,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 105,
  [SMALL_STATE(6)] = 132,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 177,
  [SMALL_STATE(9)] = 198,
  [SMALL_STATE(10)] = 211,
  [SMALL_STATE(11)] = 224,
  [SMALL_STATE(12)] = 237,
  [SMALL_STATE(13)] = 250,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 276,
  [SMALL_STATE(16)] = 297,
  [SMALL_STATE(17)] = 317,
  [SMALL_STATE(18)] = 337,
  [SMALL_STATE(19)] = 359,
  [SMALL_STATE(20)] = 379,
  [SMALL_STATE(21)] = 398,
  [SMALL_STATE(22)] = 410,
  [SMALL_STATE(23)] = 424,
  [SMALL_STATE(24)] = 434,
  [SMALL_STATE(25)] = 446,
  [SMALL_STATE(26)] = 460,
  [SMALL_STATE(27)] = 473,
  [SMALL_STATE(28)] = 486,
  [SMALL_STATE(29)] = 497,
  [SMALL_STATE(30)] = 508,
  [SMALL_STATE(31)] = 521,
  [SMALL_STATE(32)] = 532,
  [SMALL_STATE(33)] = 545,
  [SMALL_STATE(34)] = 558,
  [SMALL_STATE(35)] = 569,
  [SMALL_STATE(36)] = 580,
  [SMALL_STATE(37)] = 593,
  [SMALL_STATE(38)] = 606,
  [SMALL_STATE(39)] = 617,
  [SMALL_STATE(40)] = 626,
  [SMALL_STATE(41)] = 639,
  [SMALL_STATE(42)] = 652,
  [SMALL_STATE(43)] = 663,
  [SMALL_STATE(44)] = 672,
  [SMALL_STATE(45)] = 685,
  [SMALL_STATE(46)] = 695,
  [SMALL_STATE(47)] = 703,
  [SMALL_STATE(48)] = 711,
  [SMALL_STATE(49)] = 719,
  [SMALL_STATE(50)] = 729,
  [SMALL_STATE(51)] = 737,
  [SMALL_STATE(52)] = 747,
  [SMALL_STATE(53)] = 755,
  [SMALL_STATE(54)] = 765,
  [SMALL_STATE(55)] = 773,
  [SMALL_STATE(56)] = 781,
  [SMALL_STATE(57)] = 791,
  [SMALL_STATE(58)] = 799,
  [SMALL_STATE(59)] = 809,
  [SMALL_STATE(60)] = 819,
  [SMALL_STATE(61)] = 829,
  [SMALL_STATE(62)] = 839,
  [SMALL_STATE(63)] = 847,
  [SMALL_STATE(64)] = 857,
  [SMALL_STATE(65)] = 867,
  [SMALL_STATE(66)] = 875,
  [SMALL_STATE(67)] = 883,
  [SMALL_STATE(68)] = 893,
  [SMALL_STATE(69)] = 901,
  [SMALL_STATE(70)] = 911,
  [SMALL_STATE(71)] = 919,
  [SMALL_STATE(72)] = 927,
  [SMALL_STATE(73)] = 935,
  [SMALL_STATE(74)] = 945,
  [SMALL_STATE(75)] = 953,
  [SMALL_STATE(76)] = 963,
  [SMALL_STATE(77)] = 973,
  [SMALL_STATE(78)] = 980,
  [SMALL_STATE(79)] = 987,
  [SMALL_STATE(80)] = 994,
  [SMALL_STATE(81)] = 1001,
  [SMALL_STATE(82)] = 1008,
  [SMALL_STATE(83)] = 1015,
  [SMALL_STATE(84)] = 1022,
  [SMALL_STATE(85)] = 1029,
  [SMALL_STATE(86)] = 1036,
  [SMALL_STATE(87)] = 1043,
  [SMALL_STATE(88)] = 1050,
  [SMALL_STATE(89)] = 1057,
  [SMALL_STATE(90)] = 1064,
  [SMALL_STATE(91)] = 1071,
  [SMALL_STATE(92)] = 1078,
  [SMALL_STATE(93)] = 1085,
  [SMALL_STATE(94)] = 1092,
  [SMALL_STATE(95)] = 1099,
  [SMALL_STATE(96)] = 1106,
  [SMALL_STATE(97)] = 1113,
  [SMALL_STATE(98)] = 1120,
  [SMALL_STATE(99)] = 1127,
  [SMALL_STATE(100)] = 1134,
  [SMALL_STATE(101)] = 1141,
  [SMALL_STATE(102)] = 1148,
  [SMALL_STATE(103)] = 1155,
  [SMALL_STATE(104)] = 1162,
  [SMALL_STATE(105)] = 1169,
  [SMALL_STATE(106)] = 1176,
  [SMALL_STATE(107)] = 1183,
  [SMALL_STATE(108)] = 1190,
  [SMALL_STATE(109)] = 1197,
  [SMALL_STATE(110)] = 1204,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(105),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(100),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(87),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(79),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(90),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(92),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(96),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2), SHIFT_REPEAT(39),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setenv_statement, 4, .production_id = 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_askpass_statement, 4, .production_id = 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout_statement, 4, .production_id = 5),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keepenv_statement, 4, .production_id = 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_statement, 4, .production_id = 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_statement, 4, .production_id = 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(19),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(97),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(98),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expansion, 3, .production_id = 18),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_expansion, 3, .production_id = 18),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(56),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_expansion, 2, .production_id = 18),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_expansion, 2, .production_id = 18),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_environment_repeat1, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 3, .production_id = 9),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_copy_variable, 1, .production_id = 7),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__variable_name, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 1, .production_id = 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 7, .production_id = 19),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_rule, 2, .production_id = 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expression, 2, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 5, .production_id = 16),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 5, .production_id = 15),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_expression, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_or, 3, .production_id = 8),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_variable, 3, .production_id = 13),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_expression, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_expression, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_or, 3, .production_id = 8),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_body, 3, .production_id = 3),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_or, 3, .production_id = 8),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_body, 2, .production_id = 2),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 3, .production_id = 10),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expression, 4, .production_id = 12),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match_or, 3, .production_id = 8),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remove_variable, 2, .production_id = 11),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_expression, 1),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 3, .production_id = 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 4, .production_id = 14),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_environment, 5, .production_id = 17),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [265] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
