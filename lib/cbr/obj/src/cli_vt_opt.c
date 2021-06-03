/* **** Notes

Opt.

Remarks:
Based on UTF-8
*/


# define CBR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_vt_opt(cli_property_t(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto cli_virtual_terminal_t vt;

if(!argp) return(0x00);

r = cli_init_virtual_terminal_beta(0x00,&vt);
if(!r) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta()");
return(0x00);
}

AND(flag,0x00);
r = cli_opt(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_opt()");
flag++;
// return(0x00);
}

r = cli_init_virtual_terminal_beta(0x01,&vt);
if(!r) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta()");
return(0x00);
}

if(flag) return(0x00);

return(0x01);
}
