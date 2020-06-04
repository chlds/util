/*

Connect a page with workspace.

Along with C library

Remarks:
Refer at fn. cli_init_workspace.
*/


# define CLI_MACRO

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_connect_with_workspace(CLI_PAGE(*page),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;
auto signed char *cur,*p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!page) return(0x00);
if(!argp) return(0x00);

*(CLI_INDEX+(R(page,R(spool,*argp)))) = (page);

// to copy
r = ct(*(CLI_BASE+(R(base,*page))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. ct()");
return(0x00);
//*/
}
i = (r);
r = (-r+(*(CLI_BASE+(R(size,R(roll,*argp))))));
if(r<(CLI_EMPTY)) {
INC(i);
ADD(i,CLI_EMPTY);
i = (i*(sizeof(signed char)));
r = recharge(CLI_BASE+(R(base,R(roll,*argp))),i);
if(!r) {
printf("%s\n","<< Error at fn. recharge()");
return(0x00);
}
*(CLI_BASE+(R(size,R(roll,*argp)))) = (r);
}

r = cli_init_workspace(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_init_workspace()");
return(0x00);
}

r = cpy(*(CLI_BASE+(R(base,R(roll,*argp)))),*(CLI_BASE+(R(base,*page))));
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cpy()");
return(0x00);
//*/
}

r = (-r+(*(CLI_BASE+(R(size,R(roll,*argp))))));
R(gauge,*argp) = (r);

flag = (R(flag,*page));
R(flag,*argp) = (flag);

if(R(linebreak,*page)) OR(R(linebreak,*argp),0x01);

coord.y = (R(y,*(CLI_BASE+(R(coord,*page)))));
coord.x = (0x00);
R(y,*(CLI_INDEX+(R(coord,*argp)))) = (coord.y);
R(x,*(CLI_INDEX+(R(coord,*argp)))) = (coord.x);

return(0x01);
}
