/*

Press <Ctrl-Y> to invoke the function.

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

signed(__cdecl cli_ctrl_y_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and DATA */
auto CLI_COORD coord;
auto cli_page_t *page;

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

flag = (CG_EMUL);
page = (*(CLI_LEAD+(R(page,R(spool,R(ty,*argp))))));
r = cli_coord_page_beta(flag,page,argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_coord_page_beta()");
return(0x00);
//*/
}

i = (r);

r = cli_connect_with_workspace(page,&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_connect_with_workspace()");
return(0x00);
}

while(i) {
INC(*(CLI_INDEX+(R(cur,R(ty,*argp)))));
--i;
}

r = cli_book(&(R(ty,*argp)));
if(!r) {
printf("%s\n","<< Error at fn. cli_book()");
return(0x00);
}

OR(R(flag,R(ty,*argp)),CLI_FORCED|CLI_REFRESH);

return(0x01);
}
