module.exports = grammar({
  name: "mantis",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat($.statement),

    statement: ($) =>
      choice(
        $.definition,
        $.function_definition,
        $.struct_definition,
        $.expression
      ),

    generic_expression: ($) =>
      choice(
        $.identifier,
        $.integer,
        $.float,
        $.string,
        $.binary_expression,
        $.type,
        $.call,
        $.conditional,
        $.member,
        $.method_call,
        "undefined"
      ),

    expression: ($) => choice($.generic_expression, $.function, $.struct),

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
        field("name", $.identifier),
        optional(seq(":", field("type", $.type))),
        "=",
        field("value", $.generic_expression)
      ),

    struct_definition: ($) =>
      seq(
        field("name", $.identifier),
        optional(seq(":", field("type", $.type))),
        "=",
        field("value", $.struct)
      ),

    struct: ($) =>
      seq(
        "struct",
        "{",
        repeat(seq($.identifier, ":", $.type, ",")),
        optional(seq($.identifier, ":", $.type)),
        "}"
      ),

    function_definition: ($) =>
      seq(
        field("name", $.identifier),
        optional(seq(":", field("type", $.type))),
        "=",
        field("value", $.function)
      ),

    function: ($) =>
      prec(
        9,
        seq(
          field("declaration", $.function_declaration),
          field("body", $.block)
        )
      ),

    function_declaration: ($) =>
      seq(
        "fn",
        field("parameters", $.parameters),
        field("return_type", $.type)
      ),

    parameter: ($) =>
      seq(
        optional("mut"),
        field("name", $.identifier),
        ":",
        field("type", $.type)
      ),

    parameters: ($) =>
      seq("(", optional(seq($.parameter, repeat(seq(",", $.parameter)))), ")"),

    argument: ($) =>
      seq(optional("mut"), optional(seq($.identifier, "=")), $.expression),

    arguments: ($) =>
      seq("(", optional(seq($.argument, repeat(seq(",", $.argument)))), ")"),

    call: ($) =>
      seq(field("function", $.identifier), field("arguments", $.arguments)),

    member: ($) => seq($.expression, ".", field("field", $.identifier)),

    method_call: ($) => seq($.member, field("arguments", $.arguments)),

    conditional: ($) =>
      seq(
        "if",
        $.expression,
        $.block,
        repeat(seq("else if", $.block)),
        "else",
        $.block
      ),

    block: ($) => seq("{", repeat($.statement), "}"),

    type: ($) => choice($.primitive_type, $.array_type, $.function_declaration),

    primitive_type: () =>
      choice("bool", "u8", "u32", "u64", "i32", "i64", "f32", "f64"),

    array_type: ($) => seq("[", optional($.integer), "]", $.type),

    identifier: () => /[_a-zA-Z][_a-zA-Z0-9]*/,
    integer: () => /\d+/,
    float: () => /\d+\.\d+/,
    comment: () => token(seq("#", /.*/)),
    string: () => seq('"', repeat(choice(/[^"\\]/, seq("\\", /./))), '"'),
  },
});
