#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 72
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_node_token1 = 1,
  sym_identifier = 2,
  anon_sym_AT = 3,
  sym__assignment = 4,
  sym_content = 5,
  sym_indent = 6,
  sym_dedent = 7,
  sym_newline = 8,
  sym_document = 9,
  sym__stanza = 10,
  sym__primary_node_line = 11,
  sym__primary_node = 12,
  sym__block_node_line = 13,
  sym_block_node = 14,
  aux_sym__block_node_body = 15,
  sym_node = 16,
  sym_children = 17,
  sym_ref_node = 18,
  sym__binder = 19,
  sym__anonymous_binder = 20,
  sym_binding = 21,
  aux_sym__stanza_repeat1 = 22,
  aux_sym__stanza_repeat2 = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_node_token1] = "node_token1",
  [sym_identifier] = "identifier",
  [anon_sym_AT] = "@",
  [sym__assignment] = "_assignment",
  [sym_content] = "content",
  [sym_indent] = "indent",
  [sym_dedent] = "dedent",
  [sym_newline] = "newline",
  [sym_document] = "document",
  [sym__stanza] = "_stanza",
  [sym__primary_node_line] = "_primary_node_line",
  [sym__primary_node] = "_primary_node",
  [sym__block_node_line] = "_block_node_line",
  [sym_block_node] = "block_node",
  [aux_sym__block_node_body] = "_block_node_body",
  [sym_node] = "node",
  [sym_children] = "children",
  [sym_ref_node] = "ref_node",
  [sym__binder] = "_binder",
  [sym__anonymous_binder] = "_anonymous_binder",
  [sym_binding] = "binding",
  [aux_sym__stanza_repeat1] = "_stanza_repeat1",
  [aux_sym__stanza_repeat2] = "_stanza_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_node_token1] = aux_sym_node_token1,
  [sym_identifier] = sym_identifier,
  [anon_sym_AT] = anon_sym_AT,
  [sym__assignment] = sym__assignment,
  [sym_content] = sym_content,
  [sym_indent] = sym_indent,
  [sym_dedent] = sym_dedent,
  [sym_newline] = sym_newline,
  [sym_document] = sym_document,
  [sym__stanza] = sym__stanza,
  [sym__primary_node_line] = sym__primary_node_line,
  [sym__primary_node] = sym__primary_node,
  [sym__block_node_line] = sym__block_node_line,
  [sym_block_node] = sym_block_node,
  [aux_sym__block_node_body] = aux_sym__block_node_body,
  [sym_node] = sym_node,
  [sym_children] = sym_children,
  [sym_ref_node] = sym_ref_node,
  [sym__binder] = sym__binder,
  [sym__anonymous_binder] = sym__anonymous_binder,
  [sym_binding] = sym_binding,
  [aux_sym__stanza_repeat1] = aux_sym__stanza_repeat1,
  [aux_sym__stanza_repeat2] = aux_sym__stanza_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_node_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [sym__assignment] = {
    .visible = false,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_dedent] = {
    .visible = true,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__stanza] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_node_line] = {
    .visible = false,
    .named = true,
  },
  [sym__primary_node] = {
    .visible = false,
    .named = true,
  },
  [sym__block_node_line] = {
    .visible = false,
    .named = true,
  },
  [sym_block_node] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__block_node_body] = {
    .visible = false,
    .named = false,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_children] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_node] = {
    .visible = true,
    .named = true,
  },
  [sym__binder] = {
    .visible = false,
    .named = true,
  },
  [sym__anonymous_binder] = {
    .visible = false,
    .named = true,
  },
  [sym_binding] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__stanza_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__stanza_repeat2] = {
    .visible = false,
    .named = false,
  },
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
  [4] = 2,
  [5] = 3,
  [6] = 6,
  [7] = 7,
  [8] = 7,
  [9] = 6,
  [10] = 10,
  [11] = 10,
  [12] = 12,
  [13] = 12,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 14,
  [18] = 16,
  [19] = 15,
  [20] = 20,
  [21] = 20,
  [22] = 20,
  [23] = 20,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 24,
  [29] = 27,
  [30] = 30,
  [31] = 31,
  [32] = 30,
  [33] = 33,
  [34] = 34,
  [35] = 31,
  [36] = 36,
  [37] = 36,
  [38] = 31,
  [39] = 31,
  [40] = 34,
  [41] = 41,
  [42] = 33,
  [43] = 41,
  [44] = 44,
  [45] = 44,
  [46] = 46,
  [47] = 46,
  [48] = 48,
  [49] = 48,
  [50] = 36,
  [51] = 36,
  [52] = 52,
  [53] = 52,
  [54] = 54,
  [55] = 55,
  [56] = 55,
  [57] = 54,
  [58] = 58,
  [59] = 55,
  [60] = 60,
  [61] = 25,
  [62] = 62,
  [63] = 58,
  [64] = 64,
  [65] = 65,
  [66] = 62,
  [67] = 67,
  [68] = 60,
  [69] = 64,
  [70] = 65,
  [71] = 71,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(12);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(1)
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(13);
      END_STATE();
    case 2:
      if (eof) ADVANCE(4);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(11);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(2)
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 3:
      if (eof) ADVANCE(4);
      if (lookahead == '@') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(10);
      if (lookahead == '\n' ||
          lookahead == ' ') SKIP(3)
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_node_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym__assignment);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == ' ') ADVANCE(10);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '@') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_content);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(13);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 3},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3, .external_lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3, .external_lex_state = 3},
  [7] = {.lex_state = 3, .external_lex_state = 3},
  [8] = {.lex_state = 3, .external_lex_state = 4},
  [9] = {.lex_state = 3, .external_lex_state = 4},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3, .external_lex_state = 2},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 2, .external_lex_state = 1},
  [21] = {.lex_state = 2, .external_lex_state = 5},
  [22] = {.lex_state = 2, .external_lex_state = 1},
  [23] = {.lex_state = 2, .external_lex_state = 5},
  [24] = {.lex_state = 3, .external_lex_state = 5},
  [25] = {.lex_state = 2, .external_lex_state = 5},
  [26] = {.lex_state = 2, .external_lex_state = 1},
  [27] = {.lex_state = 3, .external_lex_state = 1},
  [28] = {.lex_state = 3, .external_lex_state = 1},
  [29] = {.lex_state = 3, .external_lex_state = 5},
  [30] = {.lex_state = 3, .external_lex_state = 3},
  [31] = {.lex_state = 3, .external_lex_state = 3},
  [32] = {.lex_state = 3, .external_lex_state = 4},
  [33] = {.lex_state = 3, .external_lex_state = 4},
  [34] = {.lex_state = 3, .external_lex_state = 4},
  [35] = {.lex_state = 3, .external_lex_state = 3},
  [36] = {.lex_state = 3, .external_lex_state = 3},
  [37] = {.lex_state = 3, .external_lex_state = 4},
  [38] = {.lex_state = 3, .external_lex_state = 4},
  [39] = {.lex_state = 3, .external_lex_state = 4},
  [40] = {.lex_state = 3, .external_lex_state = 3},
  [41] = {.lex_state = 3, .external_lex_state = 3},
  [42] = {.lex_state = 3, .external_lex_state = 3},
  [43] = {.lex_state = 3, .external_lex_state = 4},
  [44] = {.lex_state = 3, .external_lex_state = 4},
  [45] = {.lex_state = 3, .external_lex_state = 3},
  [46] = {.lex_state = 1, .external_lex_state = 6},
  [47] = {.lex_state = 1, .external_lex_state = 6},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 0, .external_lex_state = 4},
  [50] = {.lex_state = 3, .external_lex_state = 2},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0, .external_lex_state = 2},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5, .external_lex_state = 4},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5, .external_lex_state = 4},
  [58] = {.lex_state = 5, .external_lex_state = 4},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0, .external_lex_state = 4},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 2},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 4},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0, .external_lex_state = 2},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 0},
};

enum {
  ts_external_token_indent = 0,
  ts_external_token_dedent = 1,
  ts_external_token_newline = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_indent] = sym_indent,
  [ts_external_token_dedent] = sym_dedent,
  [ts_external_token_newline] = sym_newline,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_indent] = true,
    [ts_external_token_dedent] = true,
    [ts_external_token_newline] = true,
  },
  [2] = {
    [ts_external_token_dedent] = true,
  },
  [3] = {
    [ts_external_token_dedent] = true,
    [ts_external_token_newline] = true,
  },
  [4] = {
    [ts_external_token_newline] = true,
  },
  [5] = {
    [ts_external_token_indent] = true,
    [ts_external_token_newline] = true,
  },
  [6] = {
    [ts_external_token_indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [sym__assignment] = ACTIONS(1),
    [sym_indent] = ACTIONS(1),
    [sym_dedent] = ACTIONS(1),
    [sym_newline] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(71),
    [sym__stanza] = STATE(67),
    [sym__primary_node_line] = STATE(2),
    [sym__primary_node] = STATE(38),
    [sym__block_node_line] = STATE(14),
    [sym_block_node] = STATE(49),
    [sym_node] = STATE(38),
    [sym_ref_node] = STATE(38),
    [sym__binder] = STATE(23),
    [sym__anonymous_binder] = STATE(60),
    [sym_binding] = STATE(54),
    [aux_sym__stanza_repeat1] = STATE(2),
    [aux_sym__stanza_repeat2] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [sym_content] = ACTIONS(7),
  },
  [2] = {
    [sym__primary_node_line] = STATE(10),
    [sym__primary_node] = STATE(38),
    [sym__block_node_line] = STATE(18),
    [sym_block_node] = STATE(49),
    [sym_node] = STATE(38),
    [sym_ref_node] = STATE(38),
    [sym__binder] = STATE(23),
    [sym__anonymous_binder] = STATE(60),
    [sym_binding] = STATE(54),
    [aux_sym__stanza_repeat1] = STATE(10),
    [aux_sym__stanza_repeat2] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_AT] = ACTIONS(5),
    [sym_content] = ACTIONS(7),
  },
  [3] = {
    [sym__stanza] = STATE(69),
    [sym__primary_node_line] = STATE(4),
    [sym__primary_node] = STATE(35),
    [sym__block_node_line] = STATE(17),
    [sym_block_node] = STATE(48),
    [sym_node] = STATE(35),
    [sym_ref_node] = STATE(35),
    [sym__binder] = STATE(22),
    [sym__anonymous_binder] = STATE(60),
    [sym_binding] = STATE(57),
    [aux_sym__stanza_repeat1] = STATE(4),
    [aux_sym__stanza_repeat2] = STATE(17),
    [anon_sym_AT] = ACTIONS(11),
    [sym_content] = ACTIONS(13),
  },
  [4] = {
    [sym__primary_node_line] = STATE(11),
    [sym__primary_node] = STATE(35),
    [sym__block_node_line] = STATE(16),
    [sym_block_node] = STATE(48),
    [sym_node] = STATE(35),
    [sym_ref_node] = STATE(35),
    [sym__binder] = STATE(22),
    [sym__anonymous_binder] = STATE(60),
    [sym_binding] = STATE(57),
    [aux_sym__stanza_repeat1] = STATE(11),
    [aux_sym__stanza_repeat2] = STATE(16),
    [anon_sym_AT] = ACTIONS(11),
    [sym_content] = ACTIONS(13),
    [sym_dedent] = ACTIONS(9),
  },
  [5] = {
    [sym__stanza] = STATE(64),
    [sym__primary_node_line] = STATE(4),
    [sym__primary_node] = STATE(35),
    [sym__block_node_line] = STATE(17),
    [sym_block_node] = STATE(48),
    [sym_node] = STATE(35),
    [sym_ref_node] = STATE(35),
    [sym__binder] = STATE(22),
    [sym__anonymous_binder] = STATE(60),
    [sym_binding] = STATE(57),
    [aux_sym__stanza_repeat1] = STATE(4),
    [aux_sym__stanza_repeat2] = STATE(17),
    [anon_sym_AT] = ACTIONS(11),
    [sym_content] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(18), 1,
      sym_content,
    STATE(20), 1,
      sym__binder,
    STATE(68), 1,
      sym__anonymous_binder,
    STATE(70), 1,
      sym_binding,
    ACTIONS(21), 2,
      sym_dedent,
      sym_newline,
    STATE(6), 2,
      sym__primary_node_line,
      aux_sym__block_node_body,
    STATE(31), 3,
      sym__primary_node,
      sym_node,
      sym_ref_node,
  [29] = 8,
    ACTIONS(13), 1,
      sym_content,
    ACTIONS(23), 1,
      anon_sym_AT,
    STATE(20), 1,
      sym__binder,
    STATE(68), 1,
      sym__anonymous_binder,
    STATE(70), 1,
      sym_binding,
    ACTIONS(26), 2,
      sym_dedent,
      sym_newline,
    STATE(6), 2,
      sym__primary_node_line,
      aux_sym__block_node_body,
    STATE(31), 3,
      sym__primary_node,
      sym_node,
      sym_ref_node,
  [58] = 8,
    ACTIONS(7), 1,
      sym_content,
    ACTIONS(28), 1,
      anon_sym_AT,
    STATE(21), 1,
      sym__binder,
    STATE(65), 1,
      sym_binding,
    STATE(68), 1,
      sym__anonymous_binder,
    ACTIONS(26), 2,
      sym_newline,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym__primary_node_line,
      aux_sym__block_node_body,
    STATE(39), 3,
      sym__primary_node,
      sym_node,
      sym_ref_node,
  [87] = 8,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(34), 1,
      sym_content,
    STATE(21), 1,
      sym__binder,
    STATE(65), 1,
      sym_binding,
    STATE(68), 1,
      sym__anonymous_binder,
    ACTIONS(21), 2,
      sym_newline,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym__primary_node_line,
      aux_sym__block_node_body,
    STATE(39), 3,
      sym__primary_node,
      sym_node,
      sym_ref_node,
  [116] = 8,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_AT,
    ACTIONS(42), 1,
      sym_content,
    STATE(21), 1,
      sym__binder,
    STATE(65), 1,
      sym_binding,
    STATE(68), 1,
      sym__anonymous_binder,
    STATE(10), 2,
      sym__primary_node_line,
      aux_sym__stanza_repeat1,
    STATE(38), 3,
      sym__primary_node,
      sym_node,
      sym_ref_node,
  [144] = 8,
    ACTIONS(37), 1,
      sym_dedent,
    ACTIONS(45), 1,
      anon_sym_AT,
    ACTIONS(48), 1,
      sym_content,
    STATE(20), 1,
      sym__binder,
    STATE(68), 1,
      sym__anonymous_binder,
    STATE(70), 1,
      sym_binding,
    STATE(11), 2,
      sym__primary_node_line,
      aux_sym__stanza_repeat1,
    STATE(35), 3,
      sym__primary_node,
      sym_node,
      sym_ref_node,
  [172] = 7,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      sym_content,
    STATE(21), 1,
      sym__binder,
    STATE(65), 1,
      sym_binding,
    STATE(68), 1,
      sym__anonymous_binder,
    STATE(8), 2,
      sym__primary_node_line,
      aux_sym__block_node_body,
    STATE(39), 3,
      sym__primary_node,
      sym_node,
      sym_ref_node,
  [197] = 7,
    ACTIONS(11), 1,
      anon_sym_AT,
    ACTIONS(13), 1,
      sym_content,
    STATE(20), 1,
      sym__binder,
    STATE(68), 1,
      sym__anonymous_binder,
    STATE(70), 1,
      sym_binding,
    STATE(7), 2,
      sym__primary_node_line,
      aux_sym__block_node_body,
    STATE(31), 3,
      sym__primary_node,
      sym_node,
      sym_ref_node,
  [222] = 6,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(49), 1,
      sym_block_node,
    STATE(62), 1,
      sym_binding,
    STATE(19), 2,
      sym__block_node_line,
      aux_sym__stanza_repeat2,
    STATE(60), 2,
      sym__binder,
      sym__anonymous_binder,
  [243] = 6,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(56), 1,
      sym_dedent,
    STATE(48), 1,
      sym_block_node,
    STATE(66), 1,
      sym_binding,
    STATE(15), 2,
      sym__block_node_line,
      aux_sym__stanza_repeat2,
    STATE(60), 2,
      sym__binder,
      sym__anonymous_binder,
  [264] = 6,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(58), 1,
      sym_dedent,
    STATE(48), 1,
      sym_block_node,
    STATE(66), 1,
      sym_binding,
    STATE(15), 2,
      sym__block_node_line,
      aux_sym__stanza_repeat2,
    STATE(60), 2,
      sym__binder,
      sym__anonymous_binder,
  [285] = 6,
    ACTIONS(9), 1,
      sym_dedent,
    ACTIONS(51), 1,
      anon_sym_AT,
    STATE(48), 1,
      sym_block_node,
    STATE(66), 1,
      sym_binding,
    STATE(15), 2,
      sym__block_node_line,
      aux_sym__stanza_repeat2,
    STATE(60), 2,
      sym__binder,
      sym__anonymous_binder,
  [306] = 6,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_block_node,
    STATE(62), 1,
      sym_binding,
    STATE(19), 2,
      sym__block_node_line,
      aux_sym__stanza_repeat2,
    STATE(60), 2,
      sym__binder,
      sym__anonymous_binder,
  [327] = 6,
    ACTIONS(53), 1,
      anon_sym_AT,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    STATE(49), 1,
      sym_block_node,
    STATE(62), 1,
      sym_binding,
    STATE(19), 2,
      sym__block_node_line,
      aux_sym__stanza_repeat2,
    STATE(60), 2,
      sym__binder,
      sym__anonymous_binder,
  [348] = 5,
    ACTIONS(62), 1,
      sym__assignment,
    ACTIONS(64), 1,
      sym_indent,
    STATE(45), 1,
      sym_children,
    ACTIONS(60), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(66), 2,
      sym_dedent,
      sym_newline,
  [366] = 5,
    ACTIONS(62), 1,
      sym__assignment,
    ACTIONS(68), 1,
      sym_indent,
    STATE(44), 1,
      sym_children,
    ACTIONS(60), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(66), 2,
      sym_newline,
      ts_builtin_sym_end,
  [384] = 5,
    ACTIONS(64), 1,
      sym_indent,
    ACTIONS(70), 1,
      sym__assignment,
    STATE(45), 1,
      sym_children,
    ACTIONS(60), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(66), 2,
      sym_dedent,
      sym_newline,
  [402] = 5,
    ACTIONS(68), 1,
      sym_indent,
    ACTIONS(70), 1,
      sym__assignment,
    STATE(44), 1,
      sym_children,
    ACTIONS(60), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(66), 2,
      sym_newline,
      ts_builtin_sym_end,
  [420] = 4,
    ACTIONS(68), 1,
      sym_indent,
    STATE(43), 1,
      sym_children,
    ACTIONS(72), 2,
      sym_newline,
      ts_builtin_sym_end,
    ACTIONS(74), 2,
      anon_sym_AT,
      sym_content,
  [435] = 2,
    ACTIONS(76), 3,
      sym_indent,
      sym_newline,
      ts_builtin_sym_end,
    ACTIONS(78), 3,
      anon_sym_AT,
      sym__assignment,
      sym_content,
  [446] = 2,
    ACTIONS(76), 3,
      sym_indent,
      sym_dedent,
      sym_newline,
    ACTIONS(78), 3,
      anon_sym_AT,
      sym__assignment,
      sym_content,
  [457] = 4,
    ACTIONS(64), 1,
      sym_indent,
    STATE(40), 1,
      sym_children,
    ACTIONS(80), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(82), 2,
      sym_dedent,
      sym_newline,
  [472] = 4,
    ACTIONS(64), 1,
      sym_indent,
    STATE(41), 1,
      sym_children,
    ACTIONS(72), 2,
      sym_dedent,
      sym_newline,
    ACTIONS(74), 2,
      anon_sym_AT,
      sym_content,
  [487] = 4,
    ACTIONS(68), 1,
      sym_indent,
    STATE(34), 1,
      sym_children,
    ACTIONS(80), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(82), 2,
      sym_newline,
      ts_builtin_sym_end,
  [502] = 2,
    ACTIONS(80), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(82), 2,
      sym_dedent,
      sym_newline,
  [511] = 3,
    ACTIONS(86), 1,
      sym_dedent,
    ACTIONS(88), 1,
      sym_newline,
    ACTIONS(84), 2,
      anon_sym_AT,
      sym_content,
  [522] = 2,
    ACTIONS(80), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(82), 2,
      sym_newline,
      ts_builtin_sym_end,
  [531] = 2,
    ACTIONS(91), 2,
      sym_newline,
      ts_builtin_sym_end,
    ACTIONS(93), 2,
      anon_sym_AT,
      sym_content,
  [540] = 2,
    ACTIONS(95), 2,
      sym_newline,
      ts_builtin_sym_end,
    ACTIONS(97), 2,
      anon_sym_AT,
      sym_content,
  [549] = 3,
    ACTIONS(86), 1,
      sym_dedent,
    ACTIONS(99), 1,
      sym_newline,
    ACTIONS(84), 2,
      anon_sym_AT,
      sym_content,
  [560] = 2,
    ACTIONS(101), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(103), 2,
      sym_dedent,
      sym_newline,
  [569] = 2,
    ACTIONS(101), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(103), 2,
      sym_newline,
      ts_builtin_sym_end,
  [578] = 3,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      sym_newline,
    ACTIONS(84), 2,
      anon_sym_AT,
      sym_content,
  [589] = 3,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 1,
      sym_newline,
    ACTIONS(84), 2,
      anon_sym_AT,
      sym_content,
  [600] = 2,
    ACTIONS(95), 2,
      sym_dedent,
      sym_newline,
    ACTIONS(97), 2,
      anon_sym_AT,
      sym_content,
  [609] = 2,
    ACTIONS(110), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(112), 2,
      sym_dedent,
      sym_newline,
  [618] = 2,
    ACTIONS(91), 2,
      sym_dedent,
      sym_newline,
    ACTIONS(93), 2,
      anon_sym_AT,
      sym_content,
  [627] = 2,
    ACTIONS(110), 2,
      anon_sym_AT,
      sym_content,
    ACTIONS(112), 2,
      sym_newline,
      ts_builtin_sym_end,
  [636] = 2,
    ACTIONS(114), 2,
      sym_newline,
      ts_builtin_sym_end,
    ACTIONS(116), 2,
      anon_sym_AT,
      sym_content,
  [645] = 2,
    ACTIONS(114), 2,
      sym_dedent,
      sym_newline,
    ACTIONS(116), 2,
      anon_sym_AT,
      sym_content,
  [654] = 3,
    ACTIONS(68), 1,
      sym_indent,
    ACTIONS(118), 1,
      sym_content,
    STATE(32), 1,
      sym_children,
  [664] = 3,
    ACTIONS(64), 1,
      sym_indent,
    ACTIONS(120), 1,
      sym_content,
    STATE(30), 1,
      sym_children,
  [674] = 2,
    ACTIONS(124), 1,
      sym_newline,
    ACTIONS(122), 2,
      sym_dedent,
      anon_sym_AT,
  [682] = 2,
    ACTIONS(126), 1,
      sym_newline,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [690] = 2,
    ACTIONS(103), 1,
      sym_dedent,
    ACTIONS(101), 2,
      anon_sym_AT,
      sym_content,
  [698] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 2,
      anon_sym_AT,
      sym_content,
  [706] = 1,
    ACTIONS(128), 2,
      sym_dedent,
      anon_sym_AT,
  [711] = 1,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_AT,
  [716] = 2,
    ACTIONS(130), 1,
      aux_sym_node_token1,
    ACTIONS(132), 1,
      sym_newline,
  [723] = 2,
    ACTIONS(134), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym__assignment,
  [730] = 2,
    ACTIONS(136), 1,
      sym__assignment,
    ACTIONS(138), 1,
      sym_identifier,
  [737] = 2,
    ACTIONS(140), 1,
      aux_sym_node_token1,
    ACTIONS(142), 1,
      sym_newline,
  [744] = 1,
    ACTIONS(144), 2,
      sym_newline,
      aux_sym_node_token1,
  [749] = 2,
    ACTIONS(136), 1,
      sym__assignment,
    ACTIONS(146), 1,
      sym_identifier,
  [756] = 1,
    ACTIONS(148), 1,
      sym__assignment,
  [760] = 1,
    ACTIONS(76), 1,
      sym__assignment,
  [764] = 1,
    ACTIONS(132), 1,
      sym_newline,
  [768] = 1,
    ACTIONS(144), 1,
      aux_sym_node_token1,
  [772] = 1,
    ACTIONS(150), 1,
      sym_dedent,
  [776] = 1,
    ACTIONS(130), 1,
      aux_sym_node_token1,
  [780] = 1,
    ACTIONS(142), 1,
      sym_newline,
  [784] = 1,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
  [788] = 1,
    ACTIONS(154), 1,
      sym__assignment,
  [792] = 1,
    ACTIONS(156), 1,
      sym_dedent,
  [796] = 1,
    ACTIONS(140), 1,
      aux_sym_node_token1,
  [800] = 1,
    ACTIONS(158), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 29,
  [SMALL_STATE(8)] = 58,
  [SMALL_STATE(9)] = 87,
  [SMALL_STATE(10)] = 116,
  [SMALL_STATE(11)] = 144,
  [SMALL_STATE(12)] = 172,
  [SMALL_STATE(13)] = 197,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 243,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 285,
  [SMALL_STATE(18)] = 306,
  [SMALL_STATE(19)] = 327,
  [SMALL_STATE(20)] = 348,
  [SMALL_STATE(21)] = 366,
  [SMALL_STATE(22)] = 384,
  [SMALL_STATE(23)] = 402,
  [SMALL_STATE(24)] = 420,
  [SMALL_STATE(25)] = 435,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 457,
  [SMALL_STATE(28)] = 472,
  [SMALL_STATE(29)] = 487,
  [SMALL_STATE(30)] = 502,
  [SMALL_STATE(31)] = 511,
  [SMALL_STATE(32)] = 522,
  [SMALL_STATE(33)] = 531,
  [SMALL_STATE(34)] = 540,
  [SMALL_STATE(35)] = 549,
  [SMALL_STATE(36)] = 560,
  [SMALL_STATE(37)] = 569,
  [SMALL_STATE(38)] = 578,
  [SMALL_STATE(39)] = 589,
  [SMALL_STATE(40)] = 600,
  [SMALL_STATE(41)] = 609,
  [SMALL_STATE(42)] = 618,
  [SMALL_STATE(43)] = 627,
  [SMALL_STATE(44)] = 636,
  [SMALL_STATE(45)] = 645,
  [SMALL_STATE(46)] = 654,
  [SMALL_STATE(47)] = 664,
  [SMALL_STATE(48)] = 674,
  [SMALL_STATE(49)] = 682,
  [SMALL_STATE(50)] = 690,
  [SMALL_STATE(51)] = 698,
  [SMALL_STATE(52)] = 706,
  [SMALL_STATE(53)] = 711,
  [SMALL_STATE(54)] = 716,
  [SMALL_STATE(55)] = 723,
  [SMALL_STATE(56)] = 730,
  [SMALL_STATE(57)] = 737,
  [SMALL_STATE(58)] = 744,
  [SMALL_STATE(59)] = 749,
  [SMALL_STATE(60)] = 756,
  [SMALL_STATE(61)] = 760,
  [SMALL_STATE(62)] = 764,
  [SMALL_STATE(63)] = 768,
  [SMALL_STATE(64)] = 772,
  [SMALL_STATE(65)] = 776,
  [SMALL_STATE(66)] = 780,
  [SMALL_STATE(67)] = 784,
  [SMALL_STATE(68)] = 788,
  [SMALL_STATE(69)] = 792,
  [SMALL_STATE(70)] = 796,
  [SMALL_STATE(71)] = 800,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_node_body, 2), SHIFT_REPEAT(59),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_node_body, 2), SHIFT_REPEAT(28),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__block_node_body, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block_node, 3, .dynamic_precedence = 1), SHIFT(59),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_node, 3, .dynamic_precedence = 1),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_block_node, 3, .dynamic_precedence = 1), SHIFT(55),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_node_body, 2), SHIFT_REPEAT(55),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__block_node_body, 2), SHIFT_REPEAT(24),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_repeat1, 2), SHIFT_REPEAT(55),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_repeat1, 2), SHIFT_REPEAT(24),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_repeat1, 2), SHIFT_REPEAT(59),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__stanza_repeat1, 2), SHIFT_REPEAT(28),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__stanza_repeat2, 2), SHIFT_REPEAT(56),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__stanza_repeat2, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__stanza, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_node, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_node, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__binder, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__binder, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_node_line, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_node_line, 1),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary_node_line, 1), SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_children, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_children, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 4),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primary_node_line, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primary_node_line, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__primary_node_line, 1), SHIFT(37),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_node, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ref_node, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_node_line, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__block_node_line, 2),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__anonymous_binder, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binding, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [158] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_puddlejumper_external_scanner_create(void);
void tree_sitter_puddlejumper_external_scanner_destroy(void *);
bool tree_sitter_puddlejumper_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_puddlejumper_external_scanner_serialize(void *, char *);
void tree_sitter_puddlejumper_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_puddlejumper(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_puddlejumper_external_scanner_create,
      tree_sitter_puddlejumper_external_scanner_destroy,
      tree_sitter_puddlejumper_external_scanner_scan,
      tree_sitter_puddlejumper_external_scanner_serialize,
      tree_sitter_puddlejumper_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
