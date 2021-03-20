/* **** Notes

Opt.

Along with C library

Remarks:
Based on UTF-8
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_vt_opt(cli_property_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_init_virtual_terminal_beta(0x00,&(R(vt,*argp)));
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

r = cli_init_virtual_terminal_beta(0x01,&(R(vt,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta()");
return(0x00);
}

if(flag) return(0x00);

return(0x01);
}
