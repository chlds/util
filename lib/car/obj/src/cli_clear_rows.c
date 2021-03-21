/* **** Notes

Clear rows.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_clear_rows(signed(arg))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed short x,y;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);

if(!arg) return(cli_es(CTRL_L));

if(!(cli_es(CTRL_K))) return(0x00);

AND(r,0x00);
if(--arg) {
r = cli_clear_rows_r(arg);
if(!r) return(0x00);
}

r++;

return(r);
}
