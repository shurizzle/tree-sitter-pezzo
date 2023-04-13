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
      alias(
        choice(
          $.askpass_statement,
          $.keepenv_statement,
          $.origin_statement,
          $.target_statement,
          $.timeout_statement,
          $.setenv_statement,
          $.exe_statement
        ),
        $.statement
      ),

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

    origin_statement: ($) =>
      seq(
        field("key", $.origin),
        field("operator", $.assign),
        field("value", $.origin_expression),
        field("end", $.semicolon)
      ),

    target_statement: ($) =>
      seq(
        field("key", $.target),
        field("operator", $.assign),
        field("value", $.target_expression),
        field("end", $.semicolon)
      ),

    timeout_statement: ($) =>
      seq(
        field("key", $.timeout),
        field("operator", $.assign),
        field("value", $.u64),
        field("end", $.semicolon)
      ),

    setenv_statement: ($) =>
      seq(
        field("key", $.setenv),
        field("operator", $.assign),
        field("value", $.environment),
        field("end", $.semicolon)
      ),

    exe_statement: ($) =>
      seq(
        field("key", $.exe),
        field("operator", $.assign),
        field("value", $.exe_expr),
        field("end", $.semicolon)
      ),

    askpass: () => token("askpass"),
    keepenv: () => token("keepenv"),
    origin: () => token("origin"),
    target: () => token("target"),
    timeout: () => token("timeout"),
    setenv: () => token("setenv"),
    exe: () => token("exe"),

    colon: () => token(":"),
    semicolon: () => token(";"),
    assign: () => token("="),
    assign_imm: () => token.immediate("="),
    or: () => token("|"),
    minus: () => token("-"),
    paren_open: () => token("("),
    paren_close: () => token(")"),
    brace_open: () => token("{"),
    brace_close: () => token("}"),

    bool: () => choice("true", "false"),

    // generated with https://3widgets.com/
    u64: () =>
      /[0-9]|[1-9][0-9]{1,14}|1000000000000000|10000000000000000|100000000000000000|1000000000000000000|1[0-8]000000000000000000|18[0-4]00000000000000000|184[0-4]0000000000000000|1844[0-6]000000000000000|18446[0-7]00000000000000|184467[0-4]0000000000000|1844674[0-4]000000000000|184467440[0-7]0000000000|1844674407[0-3]000000000|18446744073[0-7]00000000|1844674407370000000[0-9]|18446744073709[0-5]00000|184467440737095[0-5]0000|1844674407370955[0-2]000/,

    user: () => /[A-Za-z_][A-Za-z_0-9]*/,
    group: () => /[A-Za-z_][A-Za-z_0-9]*/,
    _variable_name: () => /[A-Za-z_][A-Za-z_0-9]*/,
    _variable_name_imm: () => token.immediate(/[A-Za-z_][A-Za-z_0-9]*/),
    glob: () => /(\\[ \|;:\\]|[^\x00 \|;:])+/,

    exe_expr: ($) => choice($.glob, alias($.glob_or, $.or_expression)),

    glob_or: ($) =>
      seq(
        field("left", $.glob),
        field("operator", $.or),
        field("right", choice($.glob, alias($.glob_or, $.or_expression)))
      ),

    environment: ($) =>
      seq(
        field("brace_open", $.brace_open),
        repeat(
          seq(
            choice($.set_variable, $.remove_variable, $.copy_variable),
            token(",")
          )
        ),
        choice($.set_variable, $.remove_variable, $.copy_variable),
        optional(","),
        field("brace_close", $.brace_close)
      ),

    copy_variable: ($) =>
      field("name", alias($._variable_name, $.variable_name)),

    remove_variable: ($) =>
      seq(
        field("minus", $.minus),
        field("name", alias($._variable_name_imm, $.variable_name))
      ),

    str: () => token.immediate(/(\\[\\"\$]|[^\\"\$])+/),

    string_expansion: ($) =>
      choice(
        seq(
          token.immediate("$"),
          field("name", alias($._variable_name_imm, $.variable_name))
        ),
        seq(
          token.immediate("${"),
          field("name", alias($._variable_name_imm, $.variable_name)),
          token.immediate("}")
        )
      ),

    string: ($) =>
      seq(
        token.immediate('"'),
        repeat(choice($.string_expansion, alias($.str, "str"))),
        token.immediate('"')
      ),

    set_variable: ($) =>
      seq(
        field("name", alias($._variable_name, $.variable_name)),
        field("operator", alias($.assign_imm, $.assign)),
        field("value", $.string)
      ),

    target_expression: ($) =>
      choice(alias($.target_match_or, $.or_expression), $.target_match),

    target_match_or: ($) =>
      seq(
        field("left", $.target_match),
        field("operator", $.or),
        field(
          "right",
          choice($.target_match, alias($.target_match_or, $.or_expression))
        )
      ),

    target_match: ($) =>
      choice(
        seq(
          field(
            "users",
            choice(
              $.user,
              seq("(", $.user, ")"),
              seq("(", alias($.user_or, $.or_expression), ")")
            )
          ),
          field("group_separator", $.colon),
          field(
            "groups",
            choice(
              $.group,
              seq("(", $.group, ")"),
              seq("(", alias($.group_or, $.or_expression), ")")
            )
          )
        ),
        field(
          "users",
          choice(
            $.user,
            seq("(", $.user, ")"),
            seq("(", alias($.user_or, $.or_expression), ")")
          )
        )
      ),

    origin_expression: ($) =>
      choice($._origin_expression, alias($.origin_or, $.or_expression)),

    _origin_expression: ($) => choice($.group_expression, $.user_expression),

    origin_or: ($) =>
      seq(
        field("left", $._origin_expression),
        field("operator", $.or),
        field(
          "right",
          choice($._origin_expression, alias($.origin_or, $.or_expression))
        )
      ),

    user_expression: ($) =>
      choice(
        $.user,
        seq("(", $.user, ")"),
        seq("(", alias($.user_or, $.or_expression), ")")
      ),

    group_expression: ($) =>
      seq(
        field("group_separator", $.colon),
        field(
          "groups",
          choice(
            $.group,
            seq("(", $.group, ")"),
            seq("(", alias($.group_or, $.or_expression), ")")
          )
        )
      ),

    user_or: ($) =>
      seq(
        field("left", $.user),
        field("operator", $.or),
        field("right", choice($.user, alias($.user_or, $.or_expression)))
      ),

    group_or: ($) =>
      seq(
        field("left", $.group),
        field("operator", $.or),
        field("right", choice($.group, alias($.group_or, $.or_expression)))
      ),

    comment: () => token(prec(-10, /#.*/)),
  },
});
