/* **** Notes

Clear rows.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl clear_rows_r(signed(arg))) {

auto signed char *b;
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x01)) return(0x00);

if(!(cli_es(CTRL_N))) return(0x00);
if(!(cli_es(CTRL_K))) return(0x00);

return(0x01+(clear_rows_r(--arg)));
}
