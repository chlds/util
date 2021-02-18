/* **** Notes

Clear rows.

Remarks:
Refer at fn. cli_clear_rows_beta.
Return the number of space embedded to the row.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl clear_rows(signed short(arg/* come back to the edge */))) {

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

y = (*(CLI_BASE+(R(bottom,rect))));

r = clear_rows_r(y);
if(!r) return(0x00);

i = (r);

y = (*(CLI_BASE+(R(top,rect))));

if(arg) AND(*(CLI_BASE+(R(x,coord))),0x00);
// come back to the edge

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
}}

r = (i);

return(r);
}
