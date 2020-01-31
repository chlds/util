/*

Press <Ctrl-U> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_ctrl_u_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;
auto CLI_PAGE *page;

auto signed long long ll;
auto signed char *cur,*p;
auto signed c,i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-U>");

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ll = ((signed long long) cur);
if(ll^((signed long long) *(CLI_BASE+(R(base,R(roll,R(ty,*argp))))))) {
r = cli_ctrl_a_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_a_beta()");
return(0x00);
}
return(0x01);
}

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

if(!(R(s,*page))) {
// update the header
coord.y = (0x00);
coord.x = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
r = cli_display_header_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_display_header_beta()");
return(0x00);
}}

else {
page = (R(s,*page));
r = cli_connect_with_workspace(page,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}
r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
y = (R(Top,R(srWindow,R(csbi,*argp))));
if(!(y^(coord.y))) {
coord.y = (0x00);
coord.x = (0x00);
flag = (0x00);
}
else {
coord.y = (R(y,*(CLI_BASE+(R(coord,*page)))));
coord.x = (0x00);
flag = (0x01);
}
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
if(flag) {
r = cli_output_beta(0x01/* comeback */,*(CLI_BASE+(R(base,*page))),argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_output_beta()");
return(0x00);
//*/
}
return(0x01);
}}

r = cli_coord_output_pages_beta(0x01/* comeback */,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_output_pages_beta()");
return(0x00);
}

return(0x01);
}
