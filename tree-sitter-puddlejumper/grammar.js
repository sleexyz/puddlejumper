/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "puddlejumper",
  externals: $ => [
    $.indent, 
    $.dedent, 
    $.newline, 
    // $._block_begin
  ],
  conflicts: $ => [
    [$._primary_node_line],
    [$.block_node], 
  ],
  rules: {
    document: $ => optional($._stanza),
    _stanza: $ => choice(
      seq(repeat1($._primary_node_line), repeat($._block_node_section)),
      seq(repeat1($._block_node_section)),
    ),
    _primary_node_line: $ => seq($._primary_node, optional($.newline)),
    _primary_node: $ => choice(
      $.node, 
      $.ref_node
    ),

    _block_node_section: $ => seq($.block_node, optional($.newline)),
    block_node: $ => seq(
      optional(seq($.binding, $.newline)),
      $.block_header, 
      optional(seq(optional($.newline), $._block_node_body)),
    ),
    _block_node_body: $ => repeat1($._primary_node_line),
    block_header: $ => seq($._block_begin, /[\s]+/, $._primary_node),
    _block_begin: $ => token(prec(1, "#")),
    node: $ => choice(
      seq($.binding, $.newline, $.content, optional($.children)),
      seq($.binding, /\s*/, $.content, optional($.children)),
      seq($.binding, /\s*/, $.children),
      seq($.content, optional($.children)),
    ),
    children: $ => seq($.indent, $._stanza, $.dedent),

    ref_node: $ => choice(
      seq($.binding, $.newline, $.content, optional($.children)),
      seq($.binding, /\s*/, $.content, optional($.children)),
      seq($.binding, /\s*/, $.children),
      seq($._binder, optional($.children)),
    ),
    identifier: $ => token(prec(-1, /[a-zA-Z0-9_]+/)),

    _binder: $ => seq(token("@"), $.identifier),
    _anonymous_binder: $ => token("@"),
    binding: $ => choice(
      seq($._binder,  $._assignment),
      seq($._anonymous_binder,  $._assignment),
    ),
    // This needs to bind higher than content, otherwise the colon in a binding (e.g. `@foo: bar`)
    // will be parsed as the start of a content token.
    _assignment: $ => token(prec(1, ":")),
    content: $ => token(/[^@# \n][^\n]*/),
  },
});