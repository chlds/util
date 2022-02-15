/* **** Notes

Virtual Terminal

Remarks:
Based on UTF-8
*/


# define CBR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_main_optl_vt(MAIN_T(argf),signed(argc),signed short(**argv),signed short(**envp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto cli_virtual_terminal_t vt;

if(!argf) return(0x00);
if(argc<(0x01)) return(0x00);
if(!argv) return(0x00);
// if(!envp) return(0x00);

r = cli_init_virtual_terminal_beta(0x00,&vt);
if(!r) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta(0x00,..)");
return(0x00);
}

r = cv_main_optl(argf,argc,argv,envp);
if(!r) printf("%s \n","<< Error at fn. cv_main_optl()");

if(!(cli_init_virtual_terminal_beta(0x01,&vt))) {
printf("%s \n","<< Error at fn. cli_init_virtual_terminal_beta(0x01,..)");
return(0x00);
}

return(r);
}
