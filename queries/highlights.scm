"fn" @keyword.function

[
  "mut"
  "linear"
  "consume"
  "undefined"
  "struct"
  "test"
] @keyword

[
  "if"
  "else"
  "else if"
] @conditional

[
  (primitive_type)
  (array_type)
] @type

(integer) @number

(float) @float

(identifier) @variable

(comment) @comment @spell

(string) @string

(function_definition name: (identifier) @function)

(struct_definition name: (identifier) @type)

(call function: (identifier) @function.call)

(method_call
  (member field: (identifier) @method.call))

(parameter name: (identifier) @parameter)

[
  "+"
  "-"
  "*"
  "/"
  "%"
  ">"
  "<"
  "=="
] @operator

[
  "["
  "]"
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket

["," "." ":"] @punctuation.delimiter
