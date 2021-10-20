/*

Leap backward.

Remarks:
Refer at util/lib/obj/src/cli_io_b.c
*/


# define CLI_SYM
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_leap(ty_t(*argp))) {

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

page = (&(R(page,*argp)));
rule = (CLI_BASE+(R(rule,*page)));
b = (*(CLI_INDEX+(R(b,*rule))));
if(EQ(b,*(CLI_BASE+(R(b,*rule))))) return(0x01);

sym = (CUE_SYM);
r = cue_back(sym,b,*(CLI_BASE+(R(b,*rule))));
if(!r) return(0x00);

b = (b+(0x01+(~r)));
*(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);
r = cat_b(&b,*(CLI_INDEX+(R(b,*rule))),*(CLI_BASE+(R(b,*(CLI_OFFSET+(R(rule,*page)))))),(void*) 0x00);
if(!r) return(0x00);

r = init_rule(0x01,CLI_OFFSET,&rule);
if(!r) {
printf("%s \n","<< Error at fn. init_rule()");
rl(b);
return(0x00);
}

r = rule_b(0x00,CLI_OFFSET+(R(rule,*page)),b);
if(!r) {
printf("%s \n","<< Error at fn. rule_b()");
rl(b);
return(0x00);
}

embed(0x00,b);
rl(b);
b = (*(CLI_INDEX+(R(b,*rule))));
embed(0x00,b);
if(!(cli_es(CTRL_A))) return(0x00);

b = (*(CLI_BASE+(R(b,*rule))));
b = (b+(cli_outs_b(0x08,b)));
// *(CLI_INDEX+(R(b,*rule))) = (b);
b = (0x00);
sym = (0x00);

return(0x01);
}
