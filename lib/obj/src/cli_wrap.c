/*

Load.

Along with C library

Remarks:
Refer at fn. cli_bind_pages and fn. cli_concat_pages.
*/


# define CLI_MACRO

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_wrap(signed char(*sym),CLI_TYPEWRITER(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!sym) return(0x00);
if(!argp) return(0x00);

i = (0x00);

r = cli_wrap_internal(i,sym,argp);
if(!r) {
if(!(CLI_MORPH&(R(flag,*argp)))) {
printf("%s\n","<< Error at fn. cli_wrap_internal()");
return(0x00);
}}

return(0x01);
}
