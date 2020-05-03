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
auto signed char *cur,*p;
auto signed c,i,r;
auto signed short flag;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-N>");

/*
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
//*/

cur = (*(CLI_INDEX+(R(cur,R(ty,*argp)))));
page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
page = (R(d,*page));

if(!page) {
flag = (CG_EMUL);
r = cli_gram_beta(flag,cur,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_gram_beta()");
return(0x00);
//*/
}
while(r) {
INC(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
--r;
}
OR(R(flag,R(ty,*argp)),CLI_REFRESH);
return(0x01);
}

flag = (CG_CLEAR|CG_EMUL);
r = cli_gram_beta(flag,cur,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_gram_beta()");
return(0x00);
//*/
}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

y = (coord.y);
if(!(y^(R(Bottom,R(srWindow,R(csbi,*argp)))))) flag = (0x01);
else flag = (0x00);

if(flag) flag = (CG_COMEBACK|CG_CLEAR|CG_EMUL);
else flag = (CG_COMEBACK|CG_EMUL);

r = cli_coord_page_beta(flag,page,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_page_beta()");
return(0x00);
//*/
}

r = cli_connect_with_workspace(page,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}

return(0x01);
}
