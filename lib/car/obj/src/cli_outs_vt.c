/*

Coordinate and output characters based on UTF-8 to the console screen in UTF-16.

Remarks:
Return the number of bytes output for characters (..or the number of characters).
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_outs_vt(signed short(arg/* align */),signed char(*argp))) {

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

r = cli_outs_b(arg,argp);
// if(!r) printf("%s \n","<< Error at fn. cli_outs_b()");

if(!(cli_init_virtual_terminal_beta(0x01,&vt))) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta(0x01,..)");
return(0x00);
}

return(r);
}
