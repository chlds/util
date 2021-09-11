/* **** Notes

Clear a row.

Remarks:
Refer at fn. cli_clear_rows_beta.
Return the number of space embedded to the row.
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_clear_row_beta(signed short(comeback),CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char sp = (' ');

auto CLI_COORD coord[0x02];
auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed short exte;
auto signed short x;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cli_coord_beta(CLI_IN,coord+(CLI_BASE),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_beta()");
return(0x00);
}

exte = (R(Top,R(srWindow,R(csbi,*argp))));

x = (R(x,*(coord+(CLI_BASE))));
x = (0x01+(~(x)));
x = (x+(0x01+(R(Right,R(srWindow,R(csbi,*argp))))));

i = (signed) (x);
if(i<(0x01)) return(0x00);
r = (i);
r = (r*(sizeof(*b)));
b = (signed char(*)) malloc(r);
if(!b) return(0x00);
*(--i+(b)) = (0x00);
while(i) *(--i+(b)) = (sp);
r = wr_b(CLI_OUT,b,ct(b));
if(!(r^(~0x00))) {
printf("%s \n","<< Error at fn. wr_b()");
return(0x00);
}
r = embed(0x00,b);
free(b);
b = (0x00);

r = cli_coord_out_beta(0x00/* wrap */,&sp,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_out_beta()");
return(0x00);
}

if(comeback) {
// come back
r = cli_coord_beta(CLI_OUT,coord+(CLI_BASE),argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_coord_beta()");
return(0x00);
}
// fix the frame
r = cli_get_csbi_beta(argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_get_csbi_beta()");
return(0x00);
}
if(exte^(R(Top,R(srWindow,R(csbi,*argp))))) {
//* by scrolling the content
exte = (-exte+(R(Top,R(srWindow,R(csbi,*argp)))));
r = cli_scroll_beta(-exte,argp);
if(!r) {
printf("%s \n","<< Error at fn. cli_scroll_beta()");
return(0x00);
}}}

return(x);
}
