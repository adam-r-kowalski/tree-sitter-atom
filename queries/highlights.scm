"fn" @keyword.function

[
  "mut"
  "undefined"
  "struct"
] @keyword

[
  "if"
  "else"
  "else if"
] @conditional

(type) @type

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
