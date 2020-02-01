/*

Output characters based on UTF-8 to the console screen.

Remarks:
Based on fn. cli_coord_out_beta
Return the number of bytes for output characters (..or the number of output characters).
*/


# define CLI_MACRO
# define CLI_W32

# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_coord_outs_beta(signed char(*cur),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto CLI_COORD coord;

auto signed char *p;
auto signed i,r;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!argp) return(0x00);

if(!(*cur)) {
r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
R(y,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (coord.y);
R(x,*(CLI_LEAD+(R(coord,R(ty,*argp))))) = (coord.x);
return(0x00);
}

r = cli_coord_out_beta(cur,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}

cur = (r+(cur));

return(r+(cli_coord_outs_beta(cur,argp)));
}
