/*

Output whitespace to the console screen.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_i_beta, fn. cli_coord_out_beta and fn. cli_out.
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_indent_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char SP = (' ');

auto CLI_COORD coord;
auto signed char c;
auto signed i,l,r;
auto signed short align_tab;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

align_tab = (R(align_tab,R(config,R(ty,*argp))));
if(align_tab<(0x00)) {
printf("%s\n","<< Could not align..");
return(0x00);
}

r = cli_coord_beta(CLI_IN,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

l = (0x01+(R(Right,R(srWindow,R(csbi,*argp)))));
r = (coord.x);
ADD(l,-r);

r = (r%(align_tab));
r = (-r+(align_tab));
ADD(coord.x,r);

i = (r);
r = (R(Right,R(srWindow,R(csbi,*argp))));
if(r<(coord.x)) i = (l);

c = (SP);
l = (i);

while(i) {
--i;
r = cli_coord_out_beta(&c,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}}

return(l);
}
