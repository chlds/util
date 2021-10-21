/*

Leap forward.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CLI_SYM
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_go(ty_t(*argp))) {

auto signed char *sym;
auto signed char *b;
auto rule_t *rule;
auto page_t *page;
auto signed i,r;
auto signed short flag;
auto signed char CUE_SYM[] = {
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

if(!argp) return(0x00);

page = (&(R(page,*argp)));
rule = (CLI_OFFSET+(R(rule,*page)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(!(*b)) return(0x01);

sym = (CUE_SYM);
r = cue(sym,b);
if(!r) return(0x00);

b = (r+(b));
*(CLI_INDEX+(R(b,*rule))) = (b);
r = store_rule_b(CLI_INDEX,CLI_OFFSET,page);
if(!r) {
printf("%s \n","<< Error at fn. store_rule_b()");
return(0x00);
}

embed(0x00,b);
r = restore_rule_b(0x02,CLI_OFFSET,page);
if(!r) {
printf("%s \n","<< Error at fn. restore_rule_b()");
return(0x00);
}

r = store_rule_b(CLI_OFFSET,CLI_INDEX,page);
if(!r) {
printf("%s \n","<< Error at fn. store_rule_b()");
return(0x00);
}

rule = (R(rule,*page));
r = init_rule(0x01,CLI_INDEX,&rule);
if(!r) {
printf("%s \n","<< Error at fn. init_rule()");
return(0x00);
}

if(!(cli_es(CTRL_A))) return(0x00);

b = (*(CLI_BASE+(R(b,*rule))));
b = (b+(cli_outs_b(0x08,b)));
// *(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);
sym = (0x00);

return(0x01);
}
