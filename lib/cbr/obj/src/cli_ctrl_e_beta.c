/*

Press <Ctrl-E> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at util/lib/obj/src/cli_io_beta.c
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_ctrl_e_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s ","<Ctrl-E>");

if(!(**(CLI_INDEX+(R(cur,R(ty,*argp)))))) {
r = cli_ctrl_n_beta(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_ctrl_n_beta()");
return(0x00);
}}

else {
r = cli_to_eol_beta(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_to_eol_beta()");
return(0x00);
}}

return(0x01);
}
