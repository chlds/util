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
auto CLI_PAGE *page;

auto CLI_COORD coord;
auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-U>");

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

if(coord.x) {
r = cli_ctrl_a_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_a_beta()");
return(0x00);
}
return(0x01);
}

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

if(!(coord.y)) {
r = cli_clear_rows_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}
if(!(R(s,*page))) {
r = cli_display_header(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_display_header()");
return(0x00);
}}
else page = (R(s,*page));
r = cli_output_pages_beta(0x01/* connect with workspace */,page,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_output_pages_beta()");
return(0x00);
}}

page = (R(s,*page));
if(!page) return(0x01);

*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))) = (page);

r = cli_init_workspace(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}

r = cpy(*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(base,*page))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

ADD(R(gauge,R(debug,R(ty,*argp))),-r);
ADD(R(gauge,R(ty,*argp)),-r);

coord.y = (R(y,*(CLI_BASE+(R(coord,*page)))));
coord.x = (0x00);

R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (coord.y);
R(x,*(CLI_INDEX+(R(coord,R(ty,*argp))))) = (coord.x);

r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
