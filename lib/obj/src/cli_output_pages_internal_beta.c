/*

Output pages to the console screen.

Remarks:
Based on fn. cli_col_outs_beta, fn. cli_col_out_beta and fn. cli_out
Return the number of output pages.
*/


# define CLI_MACRO
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_output_pages_internal_beta(signed short(edge),CLI_PAGE(*page),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char sp = (' ');

auto CLI_COORD coord;
auto signed char *p;
auto signed i,r;
auto signed short flag;
auto signed short x;

/* **** CODE/TEXT */
if(!page) return(0x00);
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

if(edge<(coord.y)) return(0x00);

i = (CLI_OBJS);
while(i) {
--i;
R(y,*(i+(R(coord,*page)))) = (coord.y);
R(x,*(i+(R(coord,*page)))) = (coord.x);
}

r = cli_col_outs_beta(*(CLI_BASE+(R(base,*page))),argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_col_outs_beta()");
return(0x00);
//*/
}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}


// embed extra columns
x = (coord.x);
x = (-x+(0x01+(R(Right,R(srWindow,R(csbi,*argp))))));

while(x) {
--x;
r = cli_col_out_beta(&sp,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_col_out_beta()");
return(0x00);
}}


/*
ADD(coord.y,0x01);
coord.x = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
//*/


page = (R(d,*page));

return(0x01+(cli_output_pages_internal_beta(edge,page,argp)));
}