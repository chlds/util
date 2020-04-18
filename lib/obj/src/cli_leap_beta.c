/*

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_ctrl_g_beta.c
*/


# define CLI_MACRO
# define CLI_SYM
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_leap_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char HT = ('\t');
auto signed char SP = (' ');

auto signed char sym[] = {
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

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed char c,old;

/* **** CODE/TEXT */
if(!argp) return(0x00);

c = (**(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!c) return(0x01);

old = (c);
flag = (0x00);
i = (0x00);
while(*(sym+(i))) {
if(!(c^(*(sym+(i++))))) flag = (0x01);
}

r = cli_ctrl_f_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_f_beta()");
return(0x00);
}

c = (**(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!(HT^(c))) return(0x01);

if(flag) {
i = (0x00);
while(*(sym+(i))) {
if(!(c^(*(sym+(i++))))) {
flag = (0x00);
break;
}}}

else {
i = (0x00);
while(*(sym+(i))) {
if(!(c^(*(sym+(i++))))) {
flag = (0x01);
break;
}}}

if(!(HT^(old))) {
if(SP^(c)) flag = (0x01);
}

if(!(SP^(old))) {
if(SP^(c)) flag = (0x01);
}

if(!(SP^(c))) flag = (0x00);

if(flag) return(0x01);

return(0x01+(cli_leap_beta(argp)));
}
