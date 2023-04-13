#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 79
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 12
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 14

enum {
  anon_sym_rule = 1,
  sym_askpass = 2,
  sym_keepenv = 3,
  sym_origin = 4,
  sym_target = 5,
  sym_timeout = 6,
  sym_colon = 7,
  sym_semicolon = 8,
  sym_assign = 9,
  sym_or = 10,
  sym_minus = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  sym_brace_open = 14,
  sym_brace_close = 15,
  anon_sym_true = 16,
  anon_sym_false = 17,
  sym_u64 = 18,
  aux_sym_user_token1 = 19,
  sym_comment = 20,
  sym_source_file = 21,
  sym_exec_rule = 22,
  sym_exec_body = 23,
  sym__exec_statement = 24,
  sym_askpass_statement = 25,
  sym_keepenv_statement = 26,
  sym_origin_statement = 27,
  sym_target_statement = 28,
  sym_timeout_statement = 29,
  sym_bool = 30,
  sym_user = 31,
  sym_group = 32,
  sym_target_expression = 33,
  sym_target_match_or = 34,
  sym_target_match = 35,
  sym_origin_expression = 36,
  sym__origin_expression = 37,
  sym_origin_or = 38,
  sym_user_expression = 39,
  sym_group_expression = 40,
  sym_user_or = 41,
  sym_group_or = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_exec_body_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_rule] = "rule",
  [sym_askpass] = "askpass",
  [sym_keepenv] = "keepenv",
  [sym_origin] = "origin",
  [sym_target] = "target",
  [sym_timeout] = "timeout",
  [sym_colon] = "colon",
  [sym_semicolon] = "semicolon",
  [sym_assign] = "assign",
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
  [sym_bool] = "bool",
  [sym_user] = "user",
  [sym_group] = "group",
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
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_rule] = anon_sym_rule,
  [sym_askpass] = sym_askpass,
  [sym_keepenv] = sym_keepenv,
  [sym_origin] = sym_origin,
  [sym_target] = sym_target,
  [sym_timeout] = sym_timeout,
  [sym_colon] = sym_colon,
  [sym_semicolon] = sym_semicolon,
  [sym_assign] = sym_assign,
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
  [sym_bool] = sym_bool,
  [sym_user] = sym_user,
  [sym_group] = sym_group,
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
  field_operator = 9,
  field_right = 10,
  field_users = 11,
  field_value = 12,
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
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 3},
  [10] = {.index = 21, .length = 4},
  [11] = {.index = 25, .length = 5},
  [12] = {.index = 30, .length = 5},
  [13] = {.index = 35, .length = 7},
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
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [15] =
    {field_users, 0},
    {field_users, 1},
    {field_users, 2},
  [18] =
    {field_group_separator, 1},
    {field_groups, 2},
    {field_users, 0},
  [21] =
    {field_group_separator, 0},
    {field_groups, 1},
    {field_groups, 2},
    {field_groups, 3},
  [25] =
    {field_group_separator, 3},
    {field_groups, 4},
    {field_users, 0},
    {field_users, 1},
    {field_users, 2},
  [30] =
    {field_group_separator, 1},
    {field_groups, 2},
    {field_groups, 3},
    {field_groups, 4},
    {field_users, 0},
  [35] =
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ')') ADVANCE(67);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '0') ADVANCE(74);
      if (lookahead == '1') ADVANCE(76);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == ';') ADVANCE(62);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'k') ADVANCE(147);
      if (lookahead == 'o') ADVANCE(162);
      if (lookahead == 'r') ADVANCE(170);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '{') ADVANCE(68);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '}') ADVANCE(69);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 1:
      if (lookahead == '0') ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(46);
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
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(27);
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'g') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'k') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 31:
      if (lookahead == 'p') ADVANCE(11);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(26);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 44:
      if (lookahead == 'v') ADVANCE(53);
      END_STATE();
    case 45:
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(45)
      if (lookahead == '\r') SKIP(45)
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == '(') ADVANCE(66);
      if (lookahead == ':') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(47)
      if (lookahead == '\r') SKIP(47)
      if (lookahead == '#') ADVANCE(175);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(9);
      if (lookahead == 'k') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(41);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == '}') ADVANCE(69);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_askpass);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_askpass);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_keepenv);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_keepenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_origin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_target);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_target);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_timeout);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_timeout);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_minus);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_brace_open);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_brace_close);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_u64);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(74);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == '8') ADVANCE(121);
      if (lookahead == '9') ADVANCE(136);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(122);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(96);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(100);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(7);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '5') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '4')) ADVANCE(7);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(79);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(75);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(85);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(82);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(84);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(83);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(86);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(89);
      if (lookahead == '7') ADVANCE(77);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(126);
      if (('1' <= lookahead && lookahead <= '6')) ADVANCE(89);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(89);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(87);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(88);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(5);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(94);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '9') ADVANCE(123);
      if (('1' <= lookahead && lookahead <= '8')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == '3') ADVANCE(90);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(91);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(91);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(92);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(93);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == '7') ADVANCE(97);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(128);
      if (('1' <= lookahead && lookahead <= '6')) ADVANCE(98);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(103);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == '4') ADVANCE(81);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(104);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(104);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == '4') ADVANCE(106);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(107);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(107);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(108);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '7') ADVANCE(109);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(132);
      if (('1' <= lookahead && lookahead <= '6')) ADVANCE(110);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(110);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(111);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(113);
      if (lookahead == '6') ADVANCE(112);
      if (('7' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '5')) ADVANCE(113);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(113);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(114);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(116);
      if (lookahead == '4') ADVANCE(115);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(116);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(117);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(119);
      if (lookahead == '4') ADVANCE(118);
      if (('1' <= lookahead && lookahead <= '3')) ADVANCE(119);
      if (('5' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '0') ADVANCE(119);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_u64);
      if (lookahead == '5') ADVANCE(80);
      if (('6' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '4')) ADVANCE(79);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_u64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'i') ADVANCE(156);
      if (lookahead == 'r') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'g') ADVANCE(152);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'g') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'i') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'i') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'k') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'l') ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'l') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'n') ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'n') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'o') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'p') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'p') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'r') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'r') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 't') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 't') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'v') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(175);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 47},
  [2] = {.lex_state = 47},
  [3] = {.lex_state = 47},
  [4] = {.lex_state = 47},
  [5] = {.lex_state = 45},
  [6] = {.lex_state = 45},
  [7] = {.lex_state = 45},
  [8] = {.lex_state = 47},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 47},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 47},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 47},
  [17] = {.lex_state = 47},
  [18] = {.lex_state = 45},
  [19] = {.lex_state = 45},
  [20] = {.lex_state = 45},
  [21] = {.lex_state = 47},
  [22] = {.lex_state = 45},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 45},
  [28] = {.lex_state = 45},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 47},
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
  [46] = {.lex_state = 47},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 47},
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
    [sym_colon] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_assign] = ACTIONS(1),
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(73),
    [sym_exec_rule] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
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
      sym_brace_close,
    STATE(4), 7,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      sym_origin_statement,
      sym_target_statement,
      sym_timeout_statement,
      aux_sym_exec_body_repeat1,
  [31] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym_askpass,
    ACTIONS(24), 1,
      sym_keepenv,
    ACTIONS(27), 1,
      sym_origin,
    ACTIONS(30), 1,
      sym_target,
    ACTIONS(33), 1,
      sym_timeout,
    ACTIONS(36), 1,
      sym_brace_close,
    STATE(3), 7,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      sym_origin_statement,
      sym_target_statement,
      sym_timeout_statement,
      aux_sym_exec_body_repeat1,
  [62] = 8,
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
    ACTIONS(38), 1,
      sym_brace_close,
    STATE(3), 7,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      sym_origin_statement,
      sym_target_statement,
      sym_timeout_statement,
      aux_sym_exec_body_repeat1,
  [93] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_colon,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      aux_sym_user_token1,
    STATE(41), 1,
      sym_user,
    STATE(74), 1,
      sym_origin_or,
    STATE(75), 1,
      sym_origin_expression,
    STATE(39), 3,
      sym__origin_expression,
      sym_user_expression,
      sym_group_expression,
  [120] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 1,
      sym_colon,
    ACTIONS(42), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      aux_sym_user_token1,
    STATE(41), 1,
      sym_user,
    STATE(58), 1,
      sym_origin_or,
    STATE(54), 3,
      sym__origin_expression,
      sym_user_expression,
      sym_group_expression,
  [144] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      aux_sym_user_token1,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_user,
    STATE(36), 1,
      sym_target_match,
    STATE(66), 1,
      sym_target_expression,
    STATE(78), 1,
      sym_target_match_or,
  [166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 6,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_brace_close,
  [178] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 6,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_brace_close,
  [190] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 6,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_brace_close,
  [202] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 6,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_brace_close,
  [214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 6,
      sym_askpass,
      sym_keepenv,
      sym_origin,
      sym_target,
      sym_timeout,
      sym_brace_close,
  [226] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      aux_sym_user_token1,
    ACTIONS(46), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_user,
    STATE(50), 1,
      sym_target_match,
    STATE(62), 1,
      sym_target_match_or,
  [245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_rule,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(16), 2,
      sym_exec_rule,
      aux_sym_source_file_repeat1,
  [259] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 4,
      sym_colon,
      sym_semicolon,
      sym_or,
      anon_sym_RPAREN,
  [269] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      anon_sym_rule,
    STATE(16), 2,
      sym_exec_rule,
      aux_sym_source_file_repeat1,
  [283] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(71), 1,
      sym_bool,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
  [294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      aux_sym_user_token1,
    STATE(47), 1,
      sym_user,
    STATE(68), 1,
      sym_user_or,
  [307] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    ACTIONS(71), 1,
      aux_sym_user_token1,
    STATE(52), 1,
      sym_group,
  [320] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_user_token1,
    STATE(35), 1,
      sym_group,
    STATE(77), 1,
      sym_group_or,
  [333] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(69), 1,
      sym_bool,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
  [344] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      aux_sym_user_token1,
    STATE(48), 1,
      sym_user,
    STATE(67), 1,
      sym_user_or,
  [357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_colon,
    ACTIONS(75), 2,
      sym_semicolon,
      sym_or,
  [368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 3,
      sym_semicolon,
      sym_or,
      anon_sym_RPAREN,
  [377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_user_token1,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(42), 1,
      sym_group,
  [390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      aux_sym_user_token1,
    STATE(43), 1,
      sym_user,
    STATE(55), 1,
      sym_user_or,
  [403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_user_token1,
    STATE(45), 1,
      sym_group,
    STATE(70), 1,
      sym_group_or,
  [416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_user_token1,
    STATE(53), 1,
      sym_group,
    STATE(61), 1,
      sym_group_or,
  [429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_user_token1,
    STATE(44), 1,
      sym_group,
    STATE(72), 1,
      sym_group_or,
  [442] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      aux_sym_user_token1,
    ACTIONS(81), 1,
      anon_sym_LPAREN,
    STATE(40), 1,
      sym_group,
  [455] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_colon,
    ACTIONS(85), 2,
      sym_semicolon,
      sym_or,
  [466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [474] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 2,
      sym_semicolon,
      sym_or,
  [482] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 2,
      sym_semicolon,
      sym_or,
  [490] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_or,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
  [500] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_semicolon,
    ACTIONS(99), 1,
      sym_or,
  [510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 2,
      sym_semicolon,
      sym_or,
  [518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(103), 1,
      sym_brace_open,
    STATE(46), 1,
      sym_exec_body,
  [528] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_semicolon,
    ACTIONS(107), 1,
      sym_or,
  [538] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 2,
      sym_semicolon,
      sym_or,
  [546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      sym_semicolon,
      sym_or,
  [554] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 2,
      sym_semicolon,
      sym_or,
  [562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_or,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
  [572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_or,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
  [582] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_or,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
  [592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_or,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
  [610] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_or,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
  [620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 2,
      sym_semicolon,
      sym_or,
  [628] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      sym_or,
    ACTIONS(131), 1,
      sym_semicolon,
  [638] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 2,
      sym_semicolon,
      sym_or,
  [654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_or,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
  [664] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 1,
      sym_or,
    ACTIONS(139), 1,
      sym_semicolon,
  [674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 1,
      sym_semicolon,
  [688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 1,
      sym_assign,
  [695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 1,
      sym_semicolon,
  [702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      sym_assign,
  [709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_assign,
  [716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RPAREN,
  [723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      sym_semicolon,
  [730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      sym_assign,
  [737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_assign,
  [744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_u64,
  [751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_semicolon,
  [758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
  [765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
  [772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_semicolon,
  [779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
  [786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 1,
      sym_semicolon,
  [793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
  [800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym_semicolon,
  [814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 1,
      sym_semicolon,
  [821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_semicolon,
  [828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      anon_sym_RPAREN,
  [835] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_semicolon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 166,
  [SMALL_STATE(9)] = 178,
  [SMALL_STATE(10)] = 190,
  [SMALL_STATE(11)] = 202,
  [SMALL_STATE(12)] = 214,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 245,
  [SMALL_STATE(15)] = 259,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 283,
  [SMALL_STATE(18)] = 294,
  [SMALL_STATE(19)] = 307,
  [SMALL_STATE(20)] = 320,
  [SMALL_STATE(21)] = 333,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 357,
  [SMALL_STATE(24)] = 368,
  [SMALL_STATE(25)] = 377,
  [SMALL_STATE(26)] = 390,
  [SMALL_STATE(27)] = 403,
  [SMALL_STATE(28)] = 416,
  [SMALL_STATE(29)] = 429,
  [SMALL_STATE(30)] = 442,
  [SMALL_STATE(31)] = 455,
  [SMALL_STATE(32)] = 466,
  [SMALL_STATE(33)] = 474,
  [SMALL_STATE(34)] = 482,
  [SMALL_STATE(35)] = 490,
  [SMALL_STATE(36)] = 500,
  [SMALL_STATE(37)] = 510,
  [SMALL_STATE(38)] = 518,
  [SMALL_STATE(39)] = 528,
  [SMALL_STATE(40)] = 538,
  [SMALL_STATE(41)] = 546,
  [SMALL_STATE(42)] = 554,
  [SMALL_STATE(43)] = 562,
  [SMALL_STATE(44)] = 572,
  [SMALL_STATE(45)] = 582,
  [SMALL_STATE(46)] = 592,
  [SMALL_STATE(47)] = 600,
  [SMALL_STATE(48)] = 610,
  [SMALL_STATE(49)] = 620,
  [SMALL_STATE(50)] = 628,
  [SMALL_STATE(51)] = 638,
  [SMALL_STATE(52)] = 646,
  [SMALL_STATE(53)] = 654,
  [SMALL_STATE(54)] = 664,
  [SMALL_STATE(55)] = 674,
  [SMALL_STATE(56)] = 681,
  [SMALL_STATE(57)] = 688,
  [SMALL_STATE(58)] = 695,
  [SMALL_STATE(59)] = 702,
  [SMALL_STATE(60)] = 709,
  [SMALL_STATE(61)] = 716,
  [SMALL_STATE(62)] = 723,
  [SMALL_STATE(63)] = 730,
  [SMALL_STATE(64)] = 737,
  [SMALL_STATE(65)] = 744,
  [SMALL_STATE(66)] = 751,
  [SMALL_STATE(67)] = 758,
  [SMALL_STATE(68)] = 765,
  [SMALL_STATE(69)] = 772,
  [SMALL_STATE(70)] = 779,
  [SMALL_STATE(71)] = 786,
  [SMALL_STATE(72)] = 793,
  [SMALL_STATE(73)] = 800,
  [SMALL_STATE(74)] = 807,
  [SMALL_STATE(75)] = 814,
  [SMALL_STATE(76)] = 821,
  [SMALL_STATE(77)] = 828,
  [SMALL_STATE(78)] = 835,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(64),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(60),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(59),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(57),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(63),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_askpass_statement, 4, .production_id = 5),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keepenv_statement, 4, .production_id = 5),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_statement, 4, .production_id = 5),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timeout_statement, 4, .production_id = 5),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_statement, 4, .production_id = 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 3, .production_id = 8),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 1, .production_id = 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_body, 3, .production_id = 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_expression, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 7, .production_id = 13),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_expression, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 5, .production_id = 12),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_expression, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 5, .production_id = 11),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_expression, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expression, 2, .production_id = 6),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_or, 3, .production_id = 7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_rule, 2, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_or, 3, .production_id = 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_expression, 4, .production_id = 10),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match_or, 3, .production_id = 7),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_body, 2, .production_id = 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_target_match, 3, .production_id = 9),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_origin_or, 3, .production_id = 7),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
