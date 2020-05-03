/*

Press <Ctrl-K> to invoke the function.

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

signed(__cdecl cli_ctrl_k_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_PAGE *page;

auto CLI_COORD coord[0x02];
auto signed char *p;
auto signed c,i,r;
auto signed short flag;
auto signed short inte,exte;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-K>");

/*
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
//*/

/* optional
r = cli_clip_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clip_beta()");
return(0x00);
}
//*/

r = ct(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
ADD(R(gauge,R(ty,*argp)),r);
**(CLI_INDEX+(R(cur,R(ty,*argp)))) = (0x00);

if(!r) {
r = cli_ctrl_d_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_d_beta()");
return(0x00);
}
return(0x01);
}

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (R(y,*(coord+(CLI_BASE))));
R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (R(x,*(coord+(CLI_BASE))));

inte = (R(Bottom,R(srWindow,R(csbi,*argp))));
exte = (R(Top,R(srWindow,R(csbi,*argp))));

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));

if(!(R(d,*page))) {
OR(R(flag,R(ty,*argp)),CLI_REFRESH);
return(0x01);
}

y = (R(y,*(CLI_LEAD+(R(coord,*page)))));

if(!(y^(R(y,*(coord+(CLI_BASE)))))) {
r = cli_clear_row_beta(0x01/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_row_beta()");
return(0x00);
}}

else {
flag = (CG_COMEBACK|CG_CLEAR|CG_EMUL);
r = cli_grams_beta(flag,*(CLI_INDEX+(R(cur,R(ty,*argp)))),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_grams_beta()");
return(0x00);
}}

/* e.g., to remove the line
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
r = cli_ctrl_d_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_d_beta()");
return(0x00);
}
//*/

return(0x01);
}
