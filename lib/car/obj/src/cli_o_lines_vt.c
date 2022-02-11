/*

Output.

Remarks:
Return the number of rows output for characters.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_o_lines_vt(signed short(cols),signed short(arg/* align */),signed char(*sym),signed char(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto cli_virtual_terminal_t vt;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = cli_init_virtual_terminal_beta(0x00,&vt);
if(!r) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta(0x00,..)");
return(0x00);
}

r = cli_o_lines(cols,arg,sym,argp);
if(!r) {
if(DBG) printf("%s \n","<< Error at fn. cli_o_lines()");
}

if(!(cli_init_virtual_terminal_beta(0x01,&vt))) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta(0x01,..)");
return(0x00);
}

return(r);
}
