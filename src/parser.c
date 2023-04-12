#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_rule = 1,
  sym_askpass = 2,
  sym_keepenv = 3,
  sym_semicolon = 4,
  sym_assign = 5,
  sym_or = 6,
  sym_paren_open = 7,
  sym_paren_close = 8,
  sym_brace_open = 9,
  sym_brace_close = 10,
  anon_sym_true = 11,
  anon_sym_false = 12,
  aux_sym_user_token1 = 13,
  sym_comment = 14,
  sym_source_file = 15,
  sym_exec_rule = 16,
  sym_exec_body = 17,
  sym__exec_statement = 18,
  sym_askpass_statement = 19,
  sym_keepenv_statement = 20,
  sym_bool = 21,
  aux_sym_source_file_repeat1 = 22,
  aux_sym_exec_body_repeat1 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_rule] = "rule",
  [sym_askpass] = "askpass",
  [sym_keepenv] = "keepenv",
  [sym_semicolon] = "semicolon",
  [sym_assign] = "assign",
  [sym_or] = "or",
  [sym_paren_open] = "paren_open",
  [sym_paren_close] = "paren_close",
  [sym_brace_open] = "brace_open",
  [sym_brace_close] = "brace_close",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [aux_sym_user_token1] = "user_token1",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_exec_rule] = "exec_rule",
  [sym_exec_body] = "exec_body",
  [sym__exec_statement] = "_exec_statement",
  [sym_askpass_statement] = "statement",
  [sym_keepenv_statement] = "statement",
  [sym_bool] = "bool",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_exec_body_repeat1] = "exec_body_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_rule] = anon_sym_rule,
  [sym_askpass] = sym_askpass,
  [sym_keepenv] = sym_keepenv,
  [sym_semicolon] = sym_semicolon,
  [sym_assign] = sym_assign,
  [sym_or] = sym_or,
  [sym_paren_open] = sym_paren_open,
  [sym_paren_close] = sym_paren_close,
  [sym_brace_open] = sym_brace_open,
  [sym_brace_close] = sym_brace_close,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [aux_sym_user_token1] = aux_sym_user_token1,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_exec_rule] = sym_exec_rule,
  [sym_exec_body] = sym_exec_body,
  [sym__exec_statement] = sym__exec_statement,
  [sym_askpass_statement] = sym_askpass_statement,
  [sym_keepenv_statement] = sym_askpass_statement,
  [sym_bool] = sym_bool,
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
  [sym_paren_open] = {
    .visible = true,
    .named = true,
  },
  [sym_paren_close] = {
    .visible = true,
    .named = true,
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
  [sym_bool] = {
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
  field_key = 5,
  field_operator = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_brace_close] = "brace_close",
  [field_brace_open] = "brace_open",
  [field_end] = "end",
  [field_key] = "key",
  [field_operator] = "operator",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 4},
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
    {field_end, 3},
    {field_key, 0},
    {field_operator, 1},
    {field_value, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\r') SKIP(0)
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == ';') ADVANCE(31);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == 'k') ADVANCE(48);
      if (lookahead == 'r') ADVANCE(61);
      if (lookahead == 't') ADVANCE(56);
      if (lookahead == '{') ADVANCE(36);
      if (lookahead == '|') ADVANCE(33);
      if (lookahead == '}') ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'k') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'p') ADVANCE(2);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(4);
      END_STATE();
    case 22:
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\f') ||
          lookahead == ' ') SKIP(23)
      if (lookahead == '\r') SKIP(23)
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == 'a') ADVANCE(16);
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'k') ADVANCE(7);
      if (lookahead == 'r') ADVANCE(20);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '}') ADVANCE(37);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_askpass);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_askpass);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_keepenv);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_keepenv);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_semicolon);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_assign);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_or);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_paren_open);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_paren_close);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_brace_open);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_brace_close);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'a') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'e') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'k') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'l') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'l') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'n') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'p') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 's') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'u') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (lookahead == 'v') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_user_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 23},
  [2] = {.lex_state = 23},
  [3] = {.lex_state = 23},
  [4] = {.lex_state = 23},
  [5] = {.lex_state = 23},
  [6] = {.lex_state = 23},
  [7] = {.lex_state = 23},
  [8] = {.lex_state = 23},
  [9] = {.lex_state = 23},
  [10] = {.lex_state = 23},
  [11] = {.lex_state = 23},
  [12] = {.lex_state = 23},
  [13] = {.lex_state = 23},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [sym_askpass] = ACTIONS(1),
    [sym_keepenv] = ACTIONS(1),
    [sym_semicolon] = ACTIONS(1),
    [sym_assign] = ACTIONS(1),
    [sym_or] = ACTIONS(1),
    [sym_paren_open] = ACTIONS(1),
    [sym_paren_close] = ACTIONS(1),
    [sym_brace_open] = ACTIONS(1),
    [sym_brace_close] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [aux_sym_user_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(15),
    [sym_exec_rule] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_rule] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(9), 1,
      sym_askpass,
    ACTIONS(12), 1,
      sym_keepenv,
    ACTIONS(15), 1,
      sym_brace_close,
    STATE(2), 4,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      aux_sym_exec_body_repeat1,
  [19] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_askpass,
    ACTIONS(19), 1,
      sym_keepenv,
    ACTIONS(21), 1,
      sym_brace_close,
    STATE(4), 4,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      aux_sym_exec_body_repeat1,
  [38] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      sym_askpass,
    ACTIONS(19), 1,
      sym_keepenv,
    ACTIONS(23), 1,
      sym_brace_close,
    STATE(2), 4,
      sym__exec_statement,
      sym_askpass_statement,
      sym_keepenv_statement,
      aux_sym_exec_body_repeat1,
  [57] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_rule,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(6), 2,
      sym_exec_rule,
      aux_sym_source_file_repeat1,
  [71] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_rule,
    STATE(6), 2,
      sym_exec_rule,
      aux_sym_source_file_repeat1,
  [85] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(19), 1,
      sym_bool,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
  [96] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(20), 1,
      sym_bool,
    ACTIONS(32), 2,
      anon_sym_true,
      anon_sym_false,
  [107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(34), 3,
      sym_askpass,
      sym_keepenv,
      sym_brace_close,
  [116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(36), 3,
      sym_askpass,
      sym_keepenv,
      sym_brace_close,
  [125] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [133] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [141] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_rule,
  [149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      sym_brace_open,
    STATE(11), 1,
      sym_exec_body,
  [159] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 1,
      sym_assign,
  [173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      sym_assign,
  [180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 1,
      sym_semicolon,
  [187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      sym_semicolon,
  [194] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym_semicolon,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 19,
  [SMALL_STATE(4)] = 38,
  [SMALL_STATE(5)] = 57,
  [SMALL_STATE(6)] = 71,
  [SMALL_STATE(7)] = 85,
  [SMALL_STATE(8)] = 96,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 133,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 149,
  [SMALL_STATE(15)] = 159,
  [SMALL_STATE(16)] = 166,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 187,
  [SMALL_STATE(20)] = 194,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(16),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2), SHIFT_REPEAT(17),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_exec_body_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_askpass_statement, 4, .production_id = 4),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_keepenv_statement, 4, .production_id = 4),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_rule, 2, .production_id = 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_body, 2, .production_id = 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_exec_body, 3, .production_id = 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
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
