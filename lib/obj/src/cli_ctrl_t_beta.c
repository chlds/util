/*

Press <Ctrl-T> to invoke the function.

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

signed(__cdecl cli_ctrl_t_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short COMEBACK = (0x10);
auto signed short CLEAR = (0x01);

auto CLI_PAGE *page;
auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-T>");

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

// aux.
system("cls");

r = cli_display_header_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_display_header_beta()");
return(0x00);
}

page = (*(CLI_BASE+(R(page,R(spool,R(ty,*argp))))));

r = cli_grams_beta(COMEBACK/*|CLEAR*/,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_grams_beta()");
return(0x00);
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

return(0x01);
}
