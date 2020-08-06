/*

Press <Ctrl-M> to invoke the function.

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

signed(__cdecl cli_ctrl_m_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed lf = ('\n');

auto CLI_COORD coord;
auto signed char *p;
auto signed c,i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-M>");

// coordinate
r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

// to break
**(CLI_INDEX+(R(cur,R(ty,*argp)))) = (0x00);
OR(R(flag,R(ty,*argp)),CLI_BR);

// clear
// r = cli_clear_row_beta(0x00/* come back */,argp);
r = cli_clear2_row_beta(0x01/* come back */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear2_row_beta()");
return(0x00);
}

r = _putch(lf);
if(!(EOF^(r))) {
printf("%s\n","<< Error at fn. _putch()");
return(0x00);
}

return(0x01);
}
