/*

Press <Ctrl-Y> to invoke the function.

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

signed(__cdecl cli_ctrl_y_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and DATA */
auto CLI_COORD coord;
auto CLI_PAGE *page;

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-Y>");

/*
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
//*/

coord.y = R(y,*(CLI_BASE+(R(coord,R(ty,*argp)))));
coord.x = R(x,*(CLI_BASE+(R(coord,R(ty,*argp)))));
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

page = (*(CLI_LEAD+(R(page,R(spool,R(ty,*argp))))));
flag = (CG_CLEAR|CG_EMUL);
r = cli_coord_output_pages_beta(flag,page,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_output_pages_beta()");
return(0x00);
//*/
}

r = cli_connect_with_workspace(page,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

r = cli_clear_rows_beta(0x01/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}

r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = cli_ctrl_e_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_e_beta()");
return(0x00);
}

return(0x01);
}
