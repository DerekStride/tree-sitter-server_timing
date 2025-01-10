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
    header: $ => seq(
      $.timing_metric,
      repeat(seq(",", $.timing_metric)),
    ),

    timing_metric: $ => seq(
      field("name", $.token),

      optional(
        choice(
          seq(";", field("duration", $.duration)),
          seq(";", field("description", $.description)),
          seq(";", field("duration", $.duration), ";", field("description", $.description)),
          seq(";", field("description", $.description), ";", field("duration", $.duration)),
        ),
      ),
    ),

    duration: $ => seq(
      "dur=",
      field("value", $.number),
    ),

    description: $ => seq(
      "desc=",
      field(
        "value",
        choice(
          $.token,
          $.string,
        ),
      ),
    ),

    token: _ => /[a-zA-Z][a-zA-Z0-9_]+/,
    number: _ => /[0-9]+(\.[0-9]+)?/,
    string: _ => choice(/"[^"]*"/, /'[^']*'/),
  }
});
