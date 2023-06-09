module.exports = grammar({
  name: "mantis",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat($.expression),

    expression: ($) =>
      choice(
        $.definition,
        $.function,
        $.identifier,
        $.integer,
        $.float,
        $.string,
        $.binary_expression
      ),

    binary_expression: ($) =>
      choice(
        prec.left(3, seq($.expression, "*", $.expression)),
        prec.left(3, seq($.expression, "/", $.expression)),
        prec.left(3, seq($.expression, "%", $.expression)),
        prec.left(2, seq($.expression, "+", $.expression)),
        prec.left(2, seq($.expression, "-", $.expression)),
        prec.left(1, seq($.expression, ">", $.expression)),
        prec.left(1, seq($.expression, "<", $.expression)),
        prec.left(1, seq($.expression, "==", $.expression))
      ),

    definition: ($) =>
      seq(
        optional("mut"),
        $.identifier,
        optional(seq(":", $.type)),
        "=",
        $.expression
      ),

    function: ($) =>
      seq(
        "fn",
        field("parameters", $.parameters),
        field("return_type", $.type),
        field("body", $.block)
      ),

    parameter: ($) => seq(optional("mut"), $.identifier, ":", $.type),

    parameters: ($) =>
      seq("(", optional(seq($.parameter, repeat(seq(",", $.parameter)))), ")"),

    conditional: ($) => seq("if", $.expression, $.block, "else", $.block),

    block: ($) => seq("{", repeat($.expression), "}"),

    type: ($) => choice($.primitive_type, $.array_type),

    primitive_type: () =>
      choice("bool", "u8", "u32", "u64", "i32", "i64", "f32", "f64"),

    array_type: ($) => seq("[", "]", $.type),

    identifier: () => /[_a-zA-Z][_a-zA-Z0-9]*/,
    integer: () => /\d+/,
    float: () => /\d+\.\d+/,
    comment: () => token(seq("#", /.*/)),
    string: () => seq('"', repeat(choice(/[^"\\]/, seq("\\", /./))), '"'),
  },
});
