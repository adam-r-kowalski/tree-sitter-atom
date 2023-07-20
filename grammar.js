module.exports = grammar({
  name: "pulse",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat($.statement),

    statement: ($) =>
      choice(
        $.definition,
        $.function_definition,
        $.struct_definition,
        $.expression,
      ),

    generic_expression: ($) =>
      choice(
        $.identifier,
        $.integer,
        $.float,
        $.string,
        $.binary_expression,
        $.primitive_type,
        $.array,
        $.call,
        $.conditional,
        $.member,
        $.template_string,
        "undefined",
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
        prec.left(1, seq($.expression, "==", $.expression)),
      ),

    definition: ($) =>
      seq(
        optional("mut"),
        field("name", $.identifier),
        optional(seq(":", field("type", $.expression))),
        "=",
        field("value", $.generic_expression),
      ),

    struct_definition: ($) =>
      seq(
        field("name", $.identifier),
        optional(seq(":", field("type", $.expression))),
        "=",
        field("value", $.struct),
      ),

    struct: ($) =>
      seq(
        "struct",
        "{",
        repeat(seq($.identifier, ":", $.expression, ",")),
        optional(seq($.identifier, ":", $.expression)),
        "}",
      ),

    function_definition: ($) =>
      seq(
        field("name", $.identifier),
        optional(seq(":", field("type", $.expression))),
        "=",
        field("value", $.function),
      ),

    function: ($) =>
      prec(
        9,
        seq(
          field("declaration", $.function_declaration),
          field("body", $.block),
        ),
      ),

    generics: ($) =>
      seq(
        "[",
        optional(seq($.identifier, repeat(seq(",", $.identifier)))),
        "]",
      ),

    function_declaration: ($) =>
      seq(
        "fn",
        field("generics", optional($.generics)),
        field("parameters", $.parameters),
        field("return_type", $.expression),
      ),

    parameter: ($) =>
      seq(
        optional("mut"),
        field("name", $.identifier),
        ":",
        field("type", $.expression),
      ),

    parameters: ($) =>
      seq("(", optional(seq($.parameter, repeat(seq(",", $.parameter)))), ")"),

    argument: ($) =>
      seq(optional("mut"), optional(seq($.identifier, "=")), $.expression),

    arguments: ($) =>
      seq("(", optional(seq($.argument, repeat(seq(",", $.argument)))), ")"),

    call: ($) =>
      seq(field("function", $.identifier), field("arguments", $.arguments)),

    member: ($) =>
      prec(9, seq($.expression, ".", field("field", $.identifier))),

    conditional: ($) =>
      seq(
        "if",
        $.expression,
        $.block,
        repeat(seq("else if", $.block)),
        "else",
        $.block,
      ),

    block: ($) => seq("{", repeat($.statement), "}"),

    primitive_type: () =>
      choice(
        "bool",
        "u8",
        "u32",
        "u64",
        "i32",
        "i64",
        "f32",
        "f64",
        "void",
        "str",
      ),

    array: ($) =>
      seq(
        "[",
        optional(seq($.expression, repeat(seq(",", $.expression)))),
        "]",
      ),

    identifier: () => /[_a-zA-Z][_a-zA-Z0-9]*/,
    integer: () => /\d+/,
    float: () => /\d+\.\d+/,
    comment: () => token(seq("#", /.*/)),
    string: () => seq('"', repeat(choice(/[^"\\]/, seq("\\", /./))), '"'),

    template_string: ($) =>
      seq(
        field("language", $.identifier),
        "`",
        field("content", $.template_content),
        "`",
      ),

    template_content: ($) =>
      repeat1(choice($.template_injection, $.template_interpolation)),

    template_injection: () => /(?:[^$`]|(\$[^{]))+/,

    template_interpolation: ($) =>
      seq("${", field("interpolation", $.expression), "}"),
  },
});
