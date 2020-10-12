/*

Press <Ctrl-D> to invoke the function.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_display_footer_beta, fn. cl_kb_beta and fn. cl_io_beta.
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cl_ctrl_d_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CLI_DBG_D<(CLI_DBG)) printf("%s","<Ctrl-D>");

b = (*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))));
if(!(*b)) return(0x01);

r = nbytechar(*b);
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}
if(!(0x80^(r))) {
printf("%s\n","<< Error at fn. nbytechar() with (0x80)");
return(0x00);
}

ADD(R(gauge,R(commandline,R(ty,*argp))),r);

while(r) {
INC(b);
--r;
}

**(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))) = (0x00);

r = concats(*(CLI_INDEX+(R(base,R(roll,R(ty,*argp))))),*(CLI_BASE+(R(cur,R(commandline,R(ty,*argp))))),b,(void*) 0x00);
if(!r) {
printf("%s\n","<< Error at fn. concats()");
return(0x00);
}

r = cli_clear_rows_beta(0x01/* comeback */,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}

r = cli_output_beta(0x01/* a comeback flag */,*(CLI_INDEX+(R(cur,R(commandline,R(ty,*argp))))),argp);
if(!r) {
/* empty or..
printf("%s\n","<< Error at fn. cli_output_beta()");
return(0x00);
//*/
}

return(0x01);
}
