/**
 * @file A parser for the HTTP Server-Timing Header
 * @author Derek Stride <derek@stride.host>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "server_timing",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
