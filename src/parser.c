#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_SEMI = 2,
  sym_identifier = 3,
  anon_sym_dur_EQ = 4,
  anon_sym_desc_EQ = 5,
  sym_number = 6,
  aux_sym_string_token1 = 7,
  aux_sym_string_token2 = 8,
  sym_header = 9,
  sym_timing_metric = 10,
  sym_duration = 11,
  sym_description = 12,
  sym_string = 13,
  aux_sym_header_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_SEMI] = ";",
  [sym_identifier] = "identifier",
  [anon_sym_dur_EQ] = "dur=",
  [anon_sym_desc_EQ] = "desc=",
  [sym_number] = "number",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [sym_header] = "header",
  [sym_timing_metric] = "timing_metric",
  [sym_duration] = "duration",
  [sym_description] = "description",
  [sym_string] = "string",
  [aux_sym_header_repeat1] = "header_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_identifier] = sym_identifier,
  [anon_sym_dur_EQ] = anon_sym_dur_EQ,
  [anon_sym_desc_EQ] = anon_sym_desc_EQ,
  [sym_number] = sym_number,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_header] = sym_header,
  [sym_timing_metric] = sym_timing_metric,
  [sym_duration] = sym_duration,
  [sym_description] = sym_description,
  [sym_string] = sym_string,
  [aux_sym_header_repeat1] = aux_sym_header_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_dur_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_desc_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_timing_metric] = {
    .visible = true,
    .named = true,
  },
  [sym_duration] = {
    .visible = true,
    .named = true,
  },
  [sym_description] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_header_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_description = 1,
  field_duration = 2,
  field_name = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_description] = "description",
  [field_duration] = "duration",
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_duration, 2},
    {field_name, 0},
  [3] =
    {field_description, 2},
    {field_name, 0},
  [5] =
    {field_value, 1},
  [6] =
    {field_description, 4},
    {field_duration, 2},
    {field_name, 0},
  [9] =
    {field_description, 2},
    {field_duration, 4},
    {field_name, 0},
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
      if (eof) ADVANCE(12);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == ';') ADVANCE(14);
      if (lookahead == 'd') ADVANCE(18);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(8);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=') ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '=') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_dur_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_desc_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 7},
  [16] = {.lex_state = 7},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_dur_EQ] = ACTIONS(1),
    [anon_sym_desc_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_header] = STATE(19),
    [sym_timing_metric] = STATE(5),
    [sym_identifier] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(5), 1,
      anon_sym_dur_EQ,
    ACTIONS(7), 1,
      anon_sym_desc_EQ,
    STATE(7), 1,
      sym_duration,
    STATE(8), 1,
      sym_description,
  [13] = 3,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(9), 1,
      sym_string,
    ACTIONS(11), 2,
      aux_sym_string_token1,
      aux_sym_string_token2,
  [24] = 2,
    ACTIONS(15), 1,
      anon_sym_SEMI,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [32] = 3,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_header_repeat1,
  [42] = 3,
    ACTIONS(19), 1,
      anon_sym_COMMA,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      aux_sym_header_repeat1,
  [52] = 2,
    ACTIONS(25), 1,
      anon_sym_SEMI,
    ACTIONS(23), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [60] = 2,
    ACTIONS(29), 1,
      anon_sym_SEMI,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [68] = 1,
    ACTIONS(31), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [74] = 3,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_header_repeat1,
  [84] = 1,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [90] = 1,
    ACTIONS(40), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
  [96] = 2,
    ACTIONS(3), 1,
      sym_identifier,
    STATE(14), 1,
      sym_timing_metric,
  [103] = 1,
    ACTIONS(33), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [108] = 2,
    ACTIONS(7), 1,
      anon_sym_desc_EQ,
    STATE(17), 1,
      sym_description,
  [115] = 2,
    ACTIONS(5), 1,
      anon_sym_dur_EQ,
    STATE(18), 1,
      sym_duration,
  [122] = 1,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [127] = 1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_COMMA,
  [132] = 1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
  [136] = 1,
    ACTIONS(48), 1,
      sym_number,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 13,
  [SMALL_STATE(4)] = 24,
  [SMALL_STATE(5)] = 32,
  [SMALL_STATE(6)] = 42,
  [SMALL_STATE(7)] = 52,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 74,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 90,
  [SMALL_STATE(13)] = 96,
  [SMALL_STATE(14)] = 103,
  [SMALL_STATE(15)] = 108,
  [SMALL_STATE(16)] = 115,
  [SMALL_STATE(17)] = 122,
  [SMALL_STATE(18)] = 127,
  [SMALL_STATE(19)] = 132,
  [SMALL_STATE(20)] = 136,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_metric, 1, 0, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_metric, 3, 0, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_metric, 3, 0, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_description, 2, 0, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_header_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_duration, 2, 0, 4),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_metric, 5, 0, 5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_timing_metric, 5, 0, 6),
  [46] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_server_timing(void) {
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
