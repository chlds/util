/*

Press <Ctrl-U> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_u_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;
auto CLI_PAGE *page;

auto signed char *cur,*p;
auto signed c,i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-U>");

/*
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
//*/

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
if(!(EQ(cur,*(CLI_BASE+(R(base,R(roll,R(ty,*argp)))))))) {
r = cli_ctrl_a_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_a_beta()");
return(0x00);
}
return(0x01);
}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

flag = (0x00);
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

if(!(R(s,*page))) {
// update the header
y = (coord.y);
coord.y = (0x00);
coord.x = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
if(CLI_NONE^(R(display_header,R(config,R(ty,*argp))))) {
r = cli_display_header_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_display_header_beta()");
return(0x00);
}}
if(y^(R(y,*(CLI_OFFSET+(R(coord,R(ty,*argp))))))) flag = (0x01);
}

else {
page = (R(s,*page));
y = (R(Top,R(srWindow,R(csbi,*argp))));
if(!(y^(coord.y))) {
coord.y = (0x00);
coord.x = (0x00);
flag = (0x01);
}
else {
coord.y = (R(y,*(CLI_BASE+(R(coord,*page)))));
coord.x = (0x00);
}
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

if(!flag) {
flag = (CG_COMEBACK|CG_EMUL);
r = cli_coord_page_beta(flag,page,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_page_beta()");
return(0x00);
//*/
}}

else {
//* aux.
r = cli_clear2_rows_beta(0x01/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear2_rows_beta()");
return(0x00);
}
flag = (CG_COMEBACK|CG_EMUL);
//*/
// flag = (CG_COMEBACK|CG_CLEAR|CG_EMUL);
r = cli_coord_output_pages_beta(flag,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_output_pages_beta()");
return(0x00);
}}

r = cli_connect_with_workspace(page,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}

return(0x01);
}
