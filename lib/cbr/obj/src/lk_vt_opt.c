/* **** Notes

Opt.

Remarks:
Based on UTF-8
*/


# define CBR
# define CLI_W32
# include <stdio.h>
# include "../../../incl/config.h"
# include "../../../incl/c_dir.h"

signed(__cdecl lk_vt_opt(c_dirs_info_t(*argp))) {

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
r = finds(argp);
if(!r) {
printf("%s \n","<< Error at fn. finds()");
OR(flag,0x01);
}

r = cli_init_virtual_terminal_beta(0x01,&vt);
if(!r) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta()");
return(0x00);
}

if(flag) return(0x00);

return(0x01);
}
