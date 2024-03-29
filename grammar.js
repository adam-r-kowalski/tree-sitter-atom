module.exports = grammar({
  name: "atom",

  extras: ($) => [$.comment, /\s/],

  rules: {
    source_file: ($) => repeat($.statement),

    statement: ($) => choice($.definition, $.expression, $.function, $.test),

    expression: ($) =>
      choice(
        $.attribute,
        $.identifier,
        $.integer,
        $.float,
        $.string,
        $.binary_expression,
        $.primitive_type,
        $.array_type,
        $.array,
        $.call,
        $.decorator,
        $.conditional,
        $.member,
        $.template_string,
        $.function_declaration,
        $.struct,
        $.match,
        $.for,
        "undefined",
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
        prec.left(1, seq($.expression, "==", $.expression)),
      ),

    definition: ($) =>
      seq(
        optional("mut"),
        field("name", $.identifier),
        optional(seq(":", field("type", $.expression))),
        "=",
        field("value", $.expression),
      ),

    struct: ($) =>
      seq(
        "struct",
        field("name", $.identifier),
        "{",
        repeat1($.struct_field),
        "}",
      ),

    for: ($) => seq("for", repeat1(seq($.identifier, optional(","))), $.block),

    match: ($) =>
      seq(
        "match",
        "{",
        repeat1(seq($.expression, "{", $.expression, "}", optional(","))),
        "}",
      ),

    struct_field: ($) => seq($.identifier, ":", $.expression, optional(",")),

    struct: ($) =>
      seq(
        "struct",
        field("name", $.identifier),
        "{",
        repeat1($.struct_field),
        "}",
      ),

    test: ($) => seq("test", field("name", $.string), $.block),

    function: ($) =>
      prec(
        9,
        seq(
          field("declaration", $.function_declaration),
          field("body", $.block),
        ),
      ),

    function_declaration: ($) =>
      seq(
        "fn",
        field("name", $.identifier),
        field("parameters", $.parameters),
        "->",
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
      prec(
        9,
        seq(field("function", $.identifier), field("arguments", $.arguments)),
      ),

    decorator: ($) =>
      prec(
        9,
        seq(
          field("attribute", $.attribute),
          optional(field("arguments", $.arguments)),
        ),
      ),

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
      prec(
        8,
        seq(
          "[",
          optional(seq($.expression, repeat(seq(",", $.expression)))),
          "]",
        ),
      ),

    array_type: ($) =>
      prec(
        9,
        seq(
          repeat1(seq("[", "]")),
          field("type", choice($.primitive_type, $.identifier)),
        ),
      ),

    attribute: () => /@[_a-zA-Z][_a-zA-Z0-9]*/,
    identifier: () => /[_a-zA-Z][_a-zA-Z0-9]*/,
    integer: () => /\d+/,
    float: () => /\d+\.\d+/,
    comment: () => token(seq("//", /.*/)),
    string: () => seq('"', repeat(choice(/[^"\\]/, seq("\\", /./))), '"'),

    template_string: ($) =>
      prec(
        9,
        seq(
          optional(field("language", $.identifier)),
          "`",
          field("content", $.template_content),
          "`",
        ),
      ),

    template_content: ($) =>
      repeat1(choice($.template_injection, $.template_interpolation)),

    template_injection: () => /(?:[^$`]|(\$[^{]))+/,

    template_interpolation: ($) =>
      seq("${", field("interpolation", $.expression), "}"),
  },
});
