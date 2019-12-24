/*

Output whitespace to the console screen.

Along with C and Windows libraries

Remarks:
Refer at fn. cli_io_beta, fn. cli_ctrl_i_beta and fn. cli_col_out_beta.
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
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}

coord.x = (R(X,R(dwCursorPosition,R(csbi,*argp))));
coord.y = (R(Y,R(dwCursorPosition,R(csbi,*argp))));

r = (coord.x);
r = (r%(ALIGN_TAB));
r = (-r+(ALIGN_TAB));
ADD(coord.x,r);

i = (r);
r = (coord.x);

if(r<(0x01+(R(Right,R(srWindow,R(csbi,*argp)))))) {
c = (SP);
while(i) {
--i;
r = cli_col_out_beta(&c,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_col_out_beta()");
return(0x00);
}}}

else {
r = cli_clear_rows_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_clear_rows_beta()");
return(0x00);
}
coord.x = (0x00);
INC(coord.y);
r = cli_coord_beta(CLI_OUT,&coord,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

return(0x01);
}
