/*

Coordinate and output a page to the console screen.

Remarks:
Based on fn. cli_col_outs_beta, fn. cli_col_out_beta and fn. cli_out
Return the number of output pages.
*/


# define CLI_MACRO
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_coord_page_beta(signed short(comeback),CLI_PAGE(*page),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];

auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short edge;
auto signed short y;

/* **** CODE/TEXT */
if(!page) return(0x00);
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

edge = (R(Bottom,R(srWindow,R(csbi,*argp))));
y = (R(Top,R(srWindow,R(csbi,*argp))));

i = (CLI_OBJS);
while(i) {
--i;
R(y,*(i+(R(coord,*page)))) = (R(y,*(coord+(CLI_BASE))));
R(x,*(i+(R(coord,*page)))) = (R(x,*(coord+(CLI_BASE))));
}

r = cli_coord_outs_beta(*(CLI_BASE+(R(base,*page))),argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_outs_beta()");
return(0x00);
//*/
}

if(comeback) {
/* fix the frame */
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(y^(R(Top,R(srWindow,R(csbi,*argp))))) {
R(y,*(coord+(CLI_OFFSET))) = (y);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}
/* come back */
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

return(0x01);
}
