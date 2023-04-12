module.exports = grammar({
  name: "pezzo",

  extras: ($) => [/\s/, /\r?\n/, / |\t|\v|\f/, $.comment],

  rules: {
    source_file: ($) => prec(1, repeat(choice($.exec_rule))),

    exec_rule: ($) => seq(token("rule"), field("body", $.exec_body)),

    exec_body: ($) =>
      seq(
        field("brace_open", $.brace_open),
        repeat($._exec_statement),
        field("brace_close", $.brace_close)
      ),

    _exec_statement: ($) =>
      alias(choice($.askpass_statement, $.keepenv_statement), $.statement),

    askpass_statement: ($) =>
      seq(
        field("key", $.askpass),
        field("operator", $.assign),
        field("value", $.bool),
        field("end", $.semicolon)
      ),

    keepenv_statement: ($) =>
      seq(
        field("key", $.keepenv),
        field("operator", $.assign),
        field("value", $.bool),
        field("end", $.semicolon)
      ),

    askpass: ($) => token("askpass"),
    keepenv: ($) => token("keepenv"),

    semicolon: ($) => token(";"),
    assign: ($) => token("="),
    or: ($) => token("|"),
    paren_open: ($) => token("("),
    paren_close: ($) => token(")"),
    brace_open: ($) => token("{"),
    brace_close: ($) => token("}"),

    bool: ($) => choice("true", "false"),

    user: ($) => /[A-Za-z_][A-Za-z_0-9]*/,
    group: ($) => /[A-Za-z_][A-Za-z_0-9]*/,

    comment: ($) => token(prec(-10, /#.*/)),
  },
});
