/*

Press <Ctrl-A> to invoke the function.

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

signed(__cdecl cli_ctrl_a_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-A>");

// initialise
p = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
R(cur,R(debug,R(ty,*argp))) = (p);
i = (CLI_OBJS);
while(i) {
*(--i+(R(cur,R(ty,*argp)))) = (p);
}

// come back
coord.y = (R(y,*(CLI_INDEX+(R(coord,R(ty,*argp))))));
coord.x = (0x00);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
