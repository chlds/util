/* **** Notes

Opt.

Remarks:
Based on UTF-8
*/


# define CBR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl opt_vt_b(signed(arg),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp)))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto cli_virtual_terminal_t vt;

if(!argp) return(0x00);

r = cli_init_virtual_terminal_beta(0x00,&vt);
if(!r) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta(0x00,..)");
return(0x00);
}

r = f(arg,argp);
if(!r) printf("%s \n","<< Error at fn. f()");

if(!(cli_init_virtual_terminal_beta(0x01,&vt))) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta(0x01,..)");
return(0x00);
}

return(r);
}
