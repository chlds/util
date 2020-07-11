/*

Press <Ctrl-R> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_j_beta and fn. cli_ctrl_b_beta.
*/


# define CLI_MACRO
# define CLI_SYM
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_r_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
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

auto signed char HT = ('\t');
auto signed char SP = (' ');

auto CLI_PAGE *page;
auto signed char *cur,*p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-R>");

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ll = ((signed long long) cur);
if(!(ll^((signed long long) *(CLI_BASE+(R(cur,R(ty,*argp))))))) {
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
ll = ((signed long long) page);
if(ll^((signed long long) *(CLI_BASE+(R(page,R(spool,R(ty,*argp))))))) {
r = cli_ctrl_u_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_u_beta()");
return(0x00);
}
r = cli_to_eol_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_to_eol_beta()");
return(0x00);
}}
return(0x01);
}

r = cue_backward(&p,CUE_SYM,*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),cur);
if(!r) {
printf("%s\n","<< Error at fn. cue_backward()");
return(0x00);
}

r = cli_ctrl_a_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_a_beta()");
return(0x00);
}

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

while(0x01) {
if(cur<(p)) {
r = cli_coord_out_beta(R(wrap_words,R(config,R(ty,*argp))),cur,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}}
else break;
cur = (cur+(r));
}

*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (cur);

return(0x01);
}
