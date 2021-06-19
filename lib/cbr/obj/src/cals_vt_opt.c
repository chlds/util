/* **** Notes

Opt.

Remarks:
Based on UTF-8
*/


# define CALEND
# define CBR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_vt_opt(signed(arg),cals_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto cli_virtual_terminal_t vt;

if(!argp) return(0x00);

if(!(cli_init_virtual_terminal_beta(0x00,&vt))) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta()");
return(0x00);
}

r = cals_opt(arg,argp);
if(!r) printf("%s \n","<< Error at fn. cals_opt()");

if(!(cli_init_virtual_terminal_beta(0x01,&vt))) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta()");
return(0x00);
}

return(r);
}
