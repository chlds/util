/* **** Notes

Clear rows.

Remarks:
Refer at fn. cli_clear_rows_beta.
Return the number of space embedded to the row.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl clear_rows_r(signed short(arg),signed short(edge))) {

/* **** DATA, BSS and STACK */
auto signed char *b;

auto coord_t coord;
auto signed i,r;
auto signed short flag;
auto signed short x,y;

/* **** CODE/TEXT */
if(arg) return(0x00);

r = coord_beta(CLI_IN,CLI_BASE,&coord);
if(!r) {
r = cli_message(r,"<< Error at fn. coord_beta() \n");
return(0x00);
}

y = (*(CLI_BASE+(R(y,coord))));
if(!(y<(edge))) arg++;

r = clear_row(0x00);
if(!r) {
r = cli_message(r,"<< Error at fn. clear_row() \n");
return(0x00);
}

return(0x01+(clear_rows_r(arg,edge)));
}
