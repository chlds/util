/* **** Notes

Clear a row.

Remarks:
Refer at fn. cli_clear_rows_beta.
Return the number of space embedded to the row.
*/


# define CAR
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl clear_row(signed short(arg/* come back to the edge */))) {

/* **** DATA, BSS and STACK */
auto signed char sp = (' ');

auto signed char *b;
auto coord_t coord;
auto rect_t rect;
auto signed i,r;
auto signed short flag;
auto signed short x,y;

/* **** CODE/TEXT */
r = coord_beta(CLI_IN,CLI_BASE,&coord);
if(!r) {
r = cli_message(r,"<< Error at fn. coord_beta() \n");
return(0x00);
}

r = rect_beta(CLI_IN,CLI_BASE,&rect);
if(!r) {
r = cli_message(r,"<< Error at fn. rect_beta() \n");
return(0x00);
}

AND(flag,0x00);
y = (*(CLI_BASE+(R(top,rect))));
x = (*(CLI_BASE+(R(x,coord))));
x = (0x01+(~x));
x = (x+(0x01+(*(CLI_BASE+(R(right,rect))))));
i = (signed) (x);
i++;
if(i<(0x01)) return(0x00);
r = (i);
r = (r*(sizeof(*b)));
b = (signed char(*)) malloc(r);
if(!b) return(0x00);
*(--i+(b)) = (0x00);
while(i) *(--i+(b)) = (sp);
r = write(CLI_OUT,b,ct(b));
if(!(r^(~0x00))) {
r = cli_message(r,"<< Error at fn. write() \n");
OR(flag,0x01);
}
r = embed(0x00,b);
free(b);
b = (0x00);
if(flag) return(0x00);

i = (r);

if(arg) {
// come back to the edge
AND(*(CLI_BASE+(R(x,coord))),0x00);
r = coord_beta(CLI_OUT,CLI_BASE,&coord);
if(!r) {
r = cli_message(r,"<< Error at fn. coord_beta() \n");
return(0x00);
}
// fix the frame
r = rect_beta(CLI_IN,CLI_BASE,&rect);
if(!r) {
r = cli_message(r,"<< Error at fn. rect_beta() \n");
return(0x00);
}
//* by scrolling the content
y = (-y+(*(CLI_BASE+(R(top,rect)))));
y = (0x01+(~y));
if(y) {
r = scroll_beta(y);
if(!r) {
r = cli_message(r,"<< Error at fn. scroll_beta() \n");
return(0x00);
}}}

r = (i);

return(r);
}
