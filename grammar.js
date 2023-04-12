module.exports = grammar({
  name: "pezzo",

  extras: ($) => [/\s/, /\r?\n/, /( |\t|\v|\f)/, $.comment],

  rules: {
    source_file: ($) => prec(1, repeat(choice($.exec_rule))),

    exec_rule: ($) =>
      seq(token("rule"), token("{"), repeat($._exec_statement), token("}")),

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

    user: ($) => /[A-Za-z_][A-Za-z_0-9]*/,
    group: ($) => /[A-Za-z_][A-Za-z_0-9]*/,

    askpass: ($) => token("askpass"),
    keepenv: ($) => token("keepenv"),

    semicolon: ($) => token(";"),
    assign: ($) => token("="),
    or: ($) => token("|"),

    bool: ($) => choice("true", "false"),

    comment: ($) => token(prec(-10, /#.*/)),
  },
});
