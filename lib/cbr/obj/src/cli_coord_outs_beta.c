/*

Output characters based on UTF-8 to the console screen.

Remarks:
Based on fn. cli_coord_out_beta
Return the number of bytes for output characters (..or the number of output characters).
*/


# define CBR
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_coord_outs_beta(signed char(*cur),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
static signed char HYPHEN = ('-');
static signed char SP = (' ');

auto signed char sym[] = {
SP,HYPHEN,0x00,
};

auto CLI_COORD coord;
auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short edge;
auto signed short x,y;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

if(!(*cur)) {
r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
// y = (R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))));
R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (coord.y);
R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (coord.x);
/*
if(y^(coord.y)) OR(R(flag,R(ty,*argp)),CLI_REFRESH);
else {
flag = (~(CLI_REFRESH));
AND(R(flag,R(ty,*argp)),flag);
}
//*/
return(0x00);
}

/* to wrap words
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
edge = (R(Right,R(srWindow,R(csbi,*argp))));
x = (R(X,R(dwCursorPosition,R(csbi,*argp))));
if(edge<(x+(count_to(sym,cur)))) {
// wrap words
r = cli_clear2_row_beta(0x00,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear2_row_beta()");
return(0x00);
}}
//*/

r = cli_coord_out_beta(R(wrap_words,R(config,R(ty,*argp))),cur,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}

cur = (r+(cur));

return(r+(cli_coord_outs_beta(cur,argp)));
}
