/*

Press <Ctrl-N> to invoke the function.

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

signed(__cdecl cli_ctrl_n_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto CLI_COORD coord;
auto signed char *p;
auto signed c,i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-N>");

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

page = (R(d,*page));
if(!page) {
r = cli_ctrl_e_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_e_beta()");
return(0x00);
}
r = cli_clear_rows_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}
return(0x01);
}

p = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));

r = cli_clear_output_beta(0x00/* comeback */,p,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_output_beta()");
return(0x00);
}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

y = (coord.y);
if(!(y^(R(Bottom,R(srWindow,R(csbi,*argp)))))) flag = (0x01);
else flag = (0x00);

if(flag) {
r = cli_coord_clear_page_beta(0x01/* comeback */,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_clear_page_beta()");
return(0x00);
}}

else {
r = cli_coord_page_beta(0x01/* comeback */,page,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_page_beta()");
return(0x00);
//*/
}}

r = cli_connect_with_workspace(page,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}

return(0x01);
}
