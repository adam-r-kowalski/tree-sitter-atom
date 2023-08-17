[
  "mut"
  "struct"
  "fn"
] @keyword

[
  "undefined"
] @constant.builtin

[
  "if"
  "else"
  "else if"
] @conditional

(primitive_type) @type.builtin

(integer) @number

(float) @float

(identifier) @variable

(comment) @comment @spell

(string) @string

(function_declaration name: (identifier) @function)

(struct name: (identifier) @type.definition)

(call function: (identifier) @function.call)

(decorator attribute: (attribute) @constant.builtin)

((identifier) @constant.builtin
	(#any-of? @constant.builtin "assert" "foreign_export" "test"))

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
  "${"
  "{"
  "}"
] @punctuation.bracket

["," "." ":"] @punctuation.delimiter

(template_string
  language: (identifier) @keyword)

