module.exports = grammar({
    name: "orca",

    extras: ($) => [$.comment, /\s/],

    rules: {
        source_file: ($) => repeat($.statement),

        statement: ($) =>
            choice($.definition, $.struct_definition, $.expression, $.function),

        generic_expression: ($) =>
            choice(
                $.attribute,
                $.identifier,
                $.integer,
                $.float,
                $.string,
                $.binary_expression,
                $.primitive_type,
                $.array,
                $.call,
                $.decorator,
                $.conditional,
                $.member,
                $.template_string,
                $.function_declaration,
                "undefined",
            ),

        expression: ($) => choice($.generic_expression, $.struct),

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

        function: ($) =>
            seq(field("declaration", $.function_declaration), field("body", $.block)),

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
                seq(field("attribute", $.attribute), field("arguments", $.arguments)),
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
            seq(
                "[",
                optional(seq($.expression, repeat(seq(",", $.expression)))),
                "]",
            ),

        attribute: () => /@[_a-zA-Z][_a-zA-Z0-9]*/,
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
