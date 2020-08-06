/*

Press <Ctrl-A> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_display_footer_beta, fn. cl_kb_beta and fn. cl_io_beta.
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cl_ctrl_a_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto signed char *p;
auto signed long long ll;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-A>");

p = (*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))));
ll = ((signed long long) p);
if(!(ll^((signed long long) *(CLI_INDEX+(R(base,R(roll,R(ty,*argp)))))))) return(0x01);

// initialise
p = (*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))));
R(cur,R(debug,R(ty,*argp))) = (p);
i = (CLI_OBJS);
while(i) {
*(--i+(R(cur,R(commandline,R(ty,*argp))))) = (p);
}

// come back
coord.y = (R(y,*(CLI_INDEX+(R(coord,R(commandline,R(ty,*argp)))))));
coord.x = (R(x,*(CLI_INDEX+(R(coord,R(commandline,R(ty,*argp)))))));
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

return(0x01);
}
