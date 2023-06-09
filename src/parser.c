#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_STAR = 1,
  anon_sym_SLASH = 2,
  anon_sym_PERCENT = 3,
  anon_sym_PLUS = 4,
  anon_sym_DASH = 5,
  anon_sym_GT = 6,
  anon_sym_LT = 7,
  anon_sym_EQ_EQ = 8,
  anon_sym_mut = 9,
  anon_sym_COLON = 10,
  anon_sym_EQ = 11,
  anon_sym_fn = 12,
  anon_sym_LPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_RPAREN = 15,
  anon_sym_if = 16,
  anon_sym_else = 17,
  anon_sym_LBRACE = 18,
  anon_sym_RBRACE = 19,
  anon_sym_bool = 20,
  anon_sym_u8 = 21,
  anon_sym_u32 = 22,
  anon_sym_u64 = 23,
  anon_sym_i32 = 24,
  anon_sym_i64 = 25,
  anon_sym_f32 = 26,
  anon_sym_f64 = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  sym_identifier = 30,
  sym_integer = 31,
  sym_float = 32,
  sym_comment = 33,
  anon_sym_DQUOTE = 34,
  aux_sym_string_token1 = 35,
  anon_sym_BSLASH = 36,
  aux_sym_string_token2 = 37,
  sym_source_file = 38,
  sym_expression = 39,
  sym_binary_expression = 40,
  sym_definition = 41,
  sym_function = 42,
  sym_parameter = 43,
  sym_parameters = 44,
  sym_block = 45,
  sym_type = 46,
  sym_primitive_type = 47,
  sym_array_type = 48,
  sym_string = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_parameters_repeat1 = 51,
  aux_sym_string_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_mut] = "mut",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [anon_sym_fn] = "fn",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_bool] = "bool",
  [anon_sym_u8] = "u8",
  [anon_sym_u32] = "u32",
  [anon_sym_u64] = "u64",
  [anon_sym_i32] = "i32",
  [anon_sym_i64] = "i64",
  [anon_sym_f32] = "f32",
  [anon_sym_f64] = "f64",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_identifier] = "identifier",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_string_token2] = "string_token2",
  [sym_source_file] = "source_file",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_definition] = "definition",
  [sym_function] = "function",
  [sym_parameter] = "parameter",
  [sym_parameters] = "parameters",
  [sym_block] = "block",
  [sym_type] = "type",
  [sym_primitive_type] = "primitive_type",
  [sym_array_type] = "array_type",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_mut] = anon_sym_mut,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_u32] = anon_sym_u32,
  [anon_sym_u64] = anon_sym_u64,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_i64] = anon_sym_i64,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_f64] = anon_sym_f64,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_identifier] = sym_identifier,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [sym_source_file] = sym_source_file,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_definition] = sym_definition,
  [sym_function] = sym_function,
  [sym_parameter] = sym_parameter,
  [sym_parameters] = sym_parameters,
  [sym_block] = sym_block,
  [sym_type] = sym_type,
  [sym_primitive_type] = sym_primitive_type,
  [sym_array_type] = sym_array_type,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
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
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mut] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
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
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f64] = {
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_primitive_type] = {
    .visible = true,
    .named = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
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
  field_parameters = 2,
  field_return_type = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 3},
    {field_parameters, 1},
    {field_return_type, 2},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '(') ADVANCE(39);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == ',') ADVANCE(40);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '[') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == ']') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(9);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(10);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(66);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '2') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '2') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == '2') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == '3') ADVANCE(5);
      if (lookahead == '6') ADVANCE(11);
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == '3') ADVANCE(6);
      if (lookahead == '6') ADVANCE(12);
      if (lookahead == 'f') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == '3') ADVANCE(7);
      if (lookahead == '6') ADVANCE(13);
      if (lookahead == '8') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == '4') ADVANCE(53);
      END_STATE();
    case 12:
      if (lookahead == '4') ADVANCE(51);
      END_STATE();
    case 13:
      if (lookahead == '4') ADVANCE(49);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 23:
      if (eof) ADVANCE(24);
      if (lookahead == '"') ADVANCE(63);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '%') ADVANCE(27);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == '+') ADVANCE(28);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(56);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_mut);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_mut);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(32);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_fn);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_string_token2);
      if (lookahead == '#') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
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
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 23},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 23},
  [18] = {.lex_state = 23},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 23},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 23},
  [28] = {.lex_state = 23},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 23},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 23},
  [33] = {.lex_state = 23},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
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
  [58] = {.lex_state = 4},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_mut] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(62),
    [sym_expression] = STATE(8),
    [sym_binary_expression] = STATE(5),
    [sym_definition] = STATE(5),
    [sym_function] = STATE(5),
    [sym_string] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_mut] = ACTIONS(7),
    [anon_sym_fn] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_integer] = ACTIONS(13),
    [sym_float] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_COLON,
    ACTIONS(25), 1,
      anon_sym_EQ,
    ACTIONS(21), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(19), 12,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [30] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(27), 12,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [54] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(37), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(39), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
  [84] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(19), 12,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [108] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(37), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(43), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
  [138] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(47), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(45), 9,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [164] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(37), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(51), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
  [194] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(47), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [222] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(53), 12,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(45), 12,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(59), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(57), 12,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [294] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(37), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
    ACTIONS(61), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(63), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
  [324] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(33), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(37), 3,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
    ACTIONS(67), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
  [354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(69), 12,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [378] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      anon_sym_mut,
      anon_sym_fn,
      sym_identifier,
      sym_integer,
    ACTIONS(73), 12,
      ts_builtin_sym_end,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
      anon_sym_EQ_EQ,
      anon_sym_RBRACE,
      sym_float,
      anon_sym_DQUOTE,
  [402] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_mut,
    ACTIONS(82), 1,
      anon_sym_fn,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_integer,
    ACTIONS(91), 1,
      sym_float,
    ACTIONS(94), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_expression,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [440] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_expression,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [477] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_expression,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [514] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    STATE(8), 1,
      sym_expression,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [551] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(63), 1,
      sym_type,
    STATE(43), 2,
      sym_primitive_type,
      sym_array_type,
    ACTIONS(103), 8,
      anon_sym_bool,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_f32,
      anon_sym_f64,
  [575] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(41), 1,
      sym_type,
    STATE(43), 2,
      sym_primitive_type,
      sym_array_type,
    ACTIONS(103), 8,
      anon_sym_bool,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_f32,
      anon_sym_f64,
  [599] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(50), 1,
      sym_type,
    STATE(43), 2,
      sym_primitive_type,
      sym_array_type,
    ACTIONS(103), 8,
      anon_sym_bool,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_f32,
      anon_sym_f64,
  [623] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_type,
    STATE(43), 2,
      sym_primitive_type,
      sym_array_type,
    ACTIONS(103), 8,
      anon_sym_bool,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_f32,
      anon_sym_f64,
  [647] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(55), 1,
      sym_type,
    STATE(43), 2,
      sym_primitive_type,
      sym_array_type,
    ACTIONS(103), 8,
      anon_sym_bool,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_f32,
      anon_sym_f64,
  [671] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_LBRACK,
    STATE(49), 1,
      sym_type,
    STATE(43), 2,
      sym_primitive_type,
      sym_array_type,
    ACTIONS(103), 8,
      anon_sym_bool,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_f32,
      anon_sym_f64,
  [695] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_expression,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [726] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(7), 1,
      sym_expression,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [757] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_expression,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [788] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_expression,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [819] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_expression,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [850] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(6), 1,
      sym_expression,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [881] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_mut,
    ACTIONS(9), 1,
      anon_sym_fn,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      sym_integer,
    ACTIONS(15), 1,
      sym_float,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(13), 1,
      sym_expression,
    STATE(5), 4,
      sym_binary_expression,
      sym_definition,
      sym_function,
      sym_string,
  [912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 9,
      anon_sym_bool,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_LBRACK,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 9,
      anon_sym_bool,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_LBRACK,
  [942] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 9,
      anon_sym_bool,
      anon_sym_u8,
      anon_sym_u32,
      anon_sym_u64,
      anon_sym_i32,
      anon_sym_i64,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_LBRACK,
  [957] = 5,
    ACTIONS(113), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      aux_sym_string_token1,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    STATE(42), 1,
      aux_sym_string_repeat1,
  [973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [983] = 5,
    ACTIONS(113), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_BSLASH,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      aux_sym_string_token1,
    STATE(37), 1,
      aux_sym_string_repeat1,
  [999] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_mut,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(44), 1,
      sym_parameter,
  [1015] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1025] = 5,
    ACTIONS(113), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      aux_sym_string_token1,
    ACTIONS(140), 1,
      anon_sym_BSLASH,
    STATE(42), 1,
      aux_sym_string_repeat1,
  [1041] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      anon_sym_EQ,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
  [1051] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      aux_sym_parameters_repeat1,
  [1064] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_mut,
    ACTIONS(131), 1,
      sym_identifier,
    STATE(51), 1,
      sym_parameter,
  [1077] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_COMMA,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameters_repeat1,
  [1090] = 2,
    ACTIONS(113), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_DQUOTE,
      aux_sym_string_token1,
      anon_sym_BSLASH,
  [1099] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_COMMA,
    ACTIONS(154), 1,
      anon_sym_RPAREN,
    STATE(48), 1,
      aux_sym_parameters_repeat1,
  [1112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block,
  [1122] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1138] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_COLON,
    ACTIONS(162), 1,
      anon_sym_EQ,
  [1148] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_parameters,
  [1166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 1,
      anon_sym_EQ,
  [1173] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
  [1180] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      anon_sym_COLON,
  [1187] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_identifier,
  [1194] = 2,
    ACTIONS(113), 1,
      sym_comment,
    ACTIONS(176), 1,
      aux_sym_string_token2,
  [1201] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [1208] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_identifier,
  [1215] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
  [1222] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 138,
  [SMALL_STATE(8)] = 164,
  [SMALL_STATE(9)] = 194,
  [SMALL_STATE(10)] = 222,
  [SMALL_STATE(11)] = 246,
  [SMALL_STATE(12)] = 270,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 324,
  [SMALL_STATE(15)] = 354,
  [SMALL_STATE(16)] = 378,
  [SMALL_STATE(17)] = 402,
  [SMALL_STATE(18)] = 440,
  [SMALL_STATE(19)] = 477,
  [SMALL_STATE(20)] = 514,
  [SMALL_STATE(21)] = 551,
  [SMALL_STATE(22)] = 575,
  [SMALL_STATE(23)] = 599,
  [SMALL_STATE(24)] = 623,
  [SMALL_STATE(25)] = 647,
  [SMALL_STATE(26)] = 671,
  [SMALL_STATE(27)] = 695,
  [SMALL_STATE(28)] = 726,
  [SMALL_STATE(29)] = 757,
  [SMALL_STATE(30)] = 788,
  [SMALL_STATE(31)] = 819,
  [SMALL_STATE(32)] = 850,
  [SMALL_STATE(33)] = 881,
  [SMALL_STATE(34)] = 912,
  [SMALL_STATE(35)] = 927,
  [SMALL_STATE(36)] = 942,
  [SMALL_STATE(37)] = 957,
  [SMALL_STATE(38)] = 973,
  [SMALL_STATE(39)] = 983,
  [SMALL_STATE(40)] = 999,
  [SMALL_STATE(41)] = 1015,
  [SMALL_STATE(42)] = 1025,
  [SMALL_STATE(43)] = 1041,
  [SMALL_STATE(44)] = 1051,
  [SMALL_STATE(45)] = 1064,
  [SMALL_STATE(46)] = 1077,
  [SMALL_STATE(47)] = 1090,
  [SMALL_STATE(48)] = 1099,
  [SMALL_STATE(49)] = 1112,
  [SMALL_STATE(50)] = 1122,
  [SMALL_STATE(51)] = 1130,
  [SMALL_STATE(52)] = 1138,
  [SMALL_STATE(53)] = 1148,
  [SMALL_STATE(54)] = 1156,
  [SMALL_STATE(55)] = 1166,
  [SMALL_STATE(56)] = 1173,
  [SMALL_STATE(57)] = 1180,
  [SMALL_STATE(58)] = 1187,
  [SMALL_STATE(59)] = 1194,
  [SMALL_STATE(60)] = 1201,
  [SMALL_STATE(61)] = 1208,
  [SMALL_STATE(62)] = 1215,
  [SMALL_STATE(63)] = 1222,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 6),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_definition, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_definition, 4),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(42),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(59),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(45),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mantis(void) {
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
