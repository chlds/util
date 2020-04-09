/*

Press <Ctrl-Z> to invoke the function.

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

signed(__cdecl cli_ctrl_z_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *label = ("Descend (n) or ascend (-n) by: ");
auto signed short radix = (0x0A);

auto CLI_COORD coord;
auto CLI_PAGE *page;
auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-Z>");

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

r = cli_display_footer_beta(0x01/* comeback */,label,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_display_footer_beta()");
return(0x00);
}

if(!(**(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))))) return(0x01);

r = cv_da(radix,&i,*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
if(!r) {
printf("%s\n","<< Error at fn. cv_da()");
return(0x00);
}

if(i<(0x00)) {
i = (0x01+(~(i)));
flag = (0x01);
}
else flag = (0x00);

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

while(i) {
--i;
if(!flag) {
if(!(R(d,*page))) break;
page = (R(d,*page));
}
else {
if(!(R(s,*page))) break;
page = (R(s,*page));
}}

coord.y = (0x00);
coord.x = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

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

return(0x01);
}
