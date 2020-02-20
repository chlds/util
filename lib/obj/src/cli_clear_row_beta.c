/* **** Notes

Clear a row.

Remarks:
Refer at fn. cli_clear_rows_beta.
Return the number of space embedded to the row.
*/


# define CLI_MACRO
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include "../../../incl/config_ty.h"

signed(__cdecl cli_clear_row_beta(signed short(comeback),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char sp = (' ');

auto CLI_COORD coord[0x02];
auto signed i,r;
auto signed short flag;
auto signed short x,y;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("<< Error at fn. cli_coord_beta()");
return(0x00);
}

y = (R(Top,R(srWindow,R(csbi,*argp))));
x = (R(x,*(coord+(CLI_BASE))));
x = (0x01+(~(x)));
x = (x+(0x01+(R(Right,R(srWindow,R(csbi,*argp))))));

i = (signed) (x);

while(--x) {
r = _putch(sp);
if(!(EOF^(r))) {
printf("%s\n","<< Error at fn. _putch()");
return(0x00);
}}

r = cli_coord_out_beta(&sp,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}

if(comeback) {
// fix the frame
r = cli_get_csbi_beta(argp);
if(!r) {
printf("<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(y^(R(Top,R(srWindow,R(csbi,*argp))))) {
R(y,*(coord+(CLI_OFFSET))) = (y);
R(x,*(coord+(CLI_OFFSET))) = (0x00);
r = cli_coord_beta(CLI_OUT,coord+(CLI_OFFSET),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}
// come back
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_coord_beta()");
return(0x00);
}}

return(i);
}
