/* **** Notes

Initialise

Remarks:
Refer at fn. cli_init_property.
*/


# define CLI_SYM
# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_init_text(signed(arg),cli_text_t(*argp))) {

auto signed char *b;
auto signed i,r;
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

// initialise
if(!(CLI_INIT&(R(flag,*argp)))) AND(arg,0x00);

AND(i,0x00);
OR(i,CLI_OBJS);
if(!arg) {
r = ct(CUE_SYM);
if(!r) return(0x00);
r++;
r = (r*(sizeof(*CUE_SYM)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
r = cpy(b,CUE_SYM);
if(!r) return(0x00);
}
else {
b = (*(CLI_BASE+(R(sym,*argp))));
embed(0x00,b);
if(b) rl(b);
b = (0x00);
}

while(i) *(--i+(R(sym,*argp))) = (b);

OR(i,CLI_OBJS);
while(i) *(--i+(R(cf,*argp))) = (0x00);
OR(i,CLI_OBJS);
while(i) {
r = cli_init_rule(arg,--i+(R(rule,*argp)));
if(!r) {
printf("%s%d%s \n","<< Error at fn. cli_init_rule(arg,",i,"+(R(rule,*argp)))");
return(0x00);
}}

AND(R(width,*argp),0x00);
AND(R(height,*argp),0x00);
AND(R(flag,*argp),0x00);
AND(R(attribute,*argp),0x00);
R(eol,*argp) = (CR|LF);
R(align,*argp) = (0x08);
R(optl,*argp) = (0x00);

if(!arg) OR(R(flag,*argp),CLI_INIT);
if(b) b = (0x00);

return(0x01);
}
