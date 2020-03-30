/*

Coordinate and output pages to the console screen.

Remarks:
Return the number of output pages.
*/


# define CLI_MACRO
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_grams_internal_beta(signed short(flag),signed short(edge),CLI_PAGE(*page),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short CLEAR = (0x01);
auto signed LF = ('\n');

auto CLI_COORD coord;
auto signed char *p;
auto signed i,r;

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

p = (*(CLI_BASE+(R(base,*page))));
i = (CLI_OBJS);
while(i) {
--i;
*(i+(R(cur,R(ty,*argp)))) = (p);
}

r = cli_coord_outs_beta(p,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_outs_beta()");
return(0x00);
//*/
}

R(y,*(CLI_LEAD+(R(coord,*page)))) = (R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))));
R(x,*(CLI_LEAD+(R(coord,*page)))) = (R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))));

if(CLEAR&(flag)) {
r = cli_clear_row_beta(0x00/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_row_beta()");
return(0x00);
}}
else {
r = _putch(LF);
if(!(EOF^(r))) {
printf("%s\n","<< Error at fn. _putch()");
return(0x00);
}}

page = (R(d,*page));

return(0x01+(cli_grams_internal_beta(flag,edge,page,argp)));
}
