/* **** Notes

Along with C and Windows libraries

Remarks:
Based on UTF-8
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_refresh_beta(signed short(forced),signed char(*cur),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(SP) = (' ');
auto signed char const(CR) = ('\r');
auto signed char const(LF) = ('\n');

auto CLI_COORD coord[0x02];
auto CLI_PAGE *page;
auto signed char *base,*p;
auto signed diff;
auto signed offset;
auto signed kept;
auto signed i,r;
auto signed short flag;
auto signed short inte;
auto signed short exte;
auto signed short y;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

inte = (R(Bottom,R(srWindow,R(csbi,*argp))));
exte = (R(Top,R(srWindow,R(csbi,*argp))));

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
y = (R(y,*(CLI_LEAD+(R(coord,*page)))));

flag = (CG_EMUL);
r = cli_gram_beta(flag,cur,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_gram_beta()");
return(0x00);
//*/
}

flag = (0x00);
if(y^(R(y,*(CLI_LEAD+(R(coord,*page)))))) flag++;
if(forced) flag++;

if(flag) {
flag = (CG_CLEAR|CG_EMUL);
cur = (r+(cur));
r = cli_grams_beta(flag,cur,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_grams_beta()");
return(0x00);
}
flag = (~(CLI_REFRESH));
AND(R(flag,R(ty,*argp)),flag);
}

else {
r = cli_clear2_row_beta(0x01/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear2_row_beta()");
return(0x00);
}}

flag = (~(CLI_QREFRESH));
AND(R(flag,R(ty,*argp)),flag);

/* fix the frame */
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(exte^(R(Top,R(srWindow,R(csbi,*argp))))) {
/* by scrolling the content
exte = (-exte+(R(Top,R(srWindow,R(csbi,*argp)))));
r = cli_scroll_beta(-exte,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_scroll_beta()");
//*/
//* by putting the cursor
R(y,*(coord+(CLI_OFFSET))) = (exte);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
//*/
return(0x00);
}}

/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
