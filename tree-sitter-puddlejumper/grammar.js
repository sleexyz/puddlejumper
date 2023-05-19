/// <reference types="tree-sitter-cli/dsl" />
// @ts-check
module.exports = grammar({
  name: "puddlejumper",
  externals: $ => [
    $.indent, 
    $.dedent, 
    $.newline, 
  ],
  conflicts: $ => [
    [$._primary_node_line],
    [$.block_node],
  ],
  rules: {
    document: $ => optional($._stanza),
    _stanza: $ => choice(
      seq(repeat1($._primary_node_line), repeat($._block_node_line)),
      seq(repeat1($._block_node_line)),
    ),
    _primary_node_line: $ => seq($._primary_node, optional($.newline)),
    _primary_node: $ => choice(
      $.node, 
      $.ref_node
    ),

    _block_node_line: $ => seq($.block_node, optional($.newline)),
    // We use prec.dynamic to have the parser prefer the block_node rule
    // when constructing stanzas.
    block_node: $ => prec.dynamic(1, seq($.binding, $.newline, $._block_node_body)),
    _block_node_body: $ => repeat1($._primary_node_line),

    node: $ => choice(
      seq($.binding, /\s*/, $.content, optional($.children)),
      seq($.binding, /\s*/, $.children),
      seq($.content, optional($.children)),
    ),
    children: $ => seq($.indent, $._stanza, $.dedent),

    ref_node: $ => seq($._binder, optional($.children)),
    identifier: $ => token(/[a-zA-Z0-9_]+/),

    _binder: $ => seq(token("@"), $.identifier),
    _anonymous_binder: $ => token("@"),
    binding: $ => choice(
      seq($._binder,  $._assignment),
      seq($._anonymous_binder,  $._assignment),
    ),
    // This needs to bind higher than content, otherwise the colon in a binding (e.g. `@foo: bar`)
    // will be parsed as the start of a content token.
    _assignment: $ => token(prec(1, ":")),
    content: $ => token(/[^@ \n][^\n]*/),
  },
});
