[
  "fn"
] @keyword.function

[
  "mut"
  "undefined"
] @keyword

[
  "if"
  "else"
] @conditional

(type) @type

(integer) @number

(float) @float

(identifier) @variable

(comment) @comment @spell

(string) @string

(call function: (identifier) @function.call)

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

; ["," "." ":"] @punctuation.delimiter
