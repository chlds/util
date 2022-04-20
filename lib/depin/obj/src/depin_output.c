/* **** Notes

Output clipboard text.
*/


# define DUAL_CONFIG_H
# define DEPIN_H
# define STDIO_H
# define CAR
# define CLI_SYM
# include "./../../../incl/config.h"
# include "./../../../config.h"

signed(__cdecl depin_output(void)) {

auto signed char *b;
auto signed char *sym;
auto signed r;
auto signed short flag;
auto signed short cols = (50);
auto signed short align = (ALIGN_TAB);
signed char CUE_SYM[] = {
SYM_EXCLAMATION_MARK,
SYM_QUOTATION_MARK,
SYM_NUMBER_SIGN,
SYM_DOLLAR_SIGN,
SYM_PERCENT_SIGN,
SYM_AMPERSAND,
SYM_APOSTROPHE,
SYM_LEFT_PARENTHESIS,
SYM_RIGHT_PARENTHESIS,
SYM_ASTERISK,
SYM_PLUS_SIGN,
SYM_COMMA,
SYM_HYPHEN_MINUS,
SYM_FULL_STOP,
SYM_SOLIDUS,
SYM_COLON,
SYM_SEMICOLON,
SYM_LESS_THAN_SIGN,
SYM_EQUALS_SIGN,
SYM_GREATER_THAN_SIGN,
SYM_QUESTION_MARK,
SYM_COMMERCIAL_AT,
SYM_LEFT_SQUARE_BRACKET,
SYM_REVERSE_SOLIDUS,
SYM_RIGHT_SQUARE_BRACKET,
SYM_CIRCUMFLEX_ACCENT,
SYM_LOW_LINE,
SYM_GRAVE_ACCENT,
SYM_LEFT_CURLY_BRACKET,
SYM_VERTICAL_LINE,
SYM_RIGHT_CURLY_BRACKET,
SYM_TILDE,
0x00,
};

b = (0x00);
r = depin_b(&b);
if(!r) {
// printf("%s \n","<< Error at fn. depin_b()");
// or empty..
return(0x01);
}

sym = (CUE_SYM);
r = cli_o_lines(cols,align,sym,b);
embed_l(0x00,b);
rl(b);
b = (0x00);

return(r);
}
