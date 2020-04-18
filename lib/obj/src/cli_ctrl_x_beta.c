/*

Press <Ctrl-X> to invoke the function.

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

signed(__cdecl cli_ctrl_x_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord[0x02];
auto CLI_PAGE *page;

auto signed char *base,*p;
auto signed c,i,r;
auto signed short flag;
auto signed short inte;
auto signed short exte;
auto signed short y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-X>");

/*
r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}
//*/

if(!(R(offset,R(ty,*argp)))) {
//* aux.
r = cli_ctrl_h_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_ctrl_h_beta()");
return(0x00);
}
//*/
return(0x01);
}

base = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
r = cpy(base,*(CLI_INDEX+(R(cur,R(ty,*argp)))));
*(CLI_INDEX+(R(cur,R(ty,*argp)))) = (base);
R(offset,R(ty,*argp)) = (0x00);

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

R(y,*(coord+(CLI_BASE))) = (R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))));
R(x,*(coord+(CLI_BASE))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}

inte = (R(Bottom,R(srWindow,R(csbi,*argp))));
exte = (R(Top,R(srWindow,R(csbi,*argp))));

page = (*(CLI_INDEX+(R(page,R(spool,R(ty,*argp))))));
y = (R(y,*(CLI_LEAD+(R(coord,*page)))));

r = cli_coord_page_beta(CG_COMEBACK|CG_CLEAR|CG_EMUL,page,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_page_beta()");
return(0x00);
//*/
}

if(y^(R(y,*(CLI_LEAD+(R(coord,*page)))))) OR(R(flag,R(ty,*argp)),CLI_REFRESH);
else {
flag = (~(CLI_REFRESH));
AND(R(flag,R(ty,*argp)),flag);
}

return(0x01);
}
