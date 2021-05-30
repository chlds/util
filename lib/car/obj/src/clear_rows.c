/* **** Notes

Clear rows.

Remarks:
Only in the Virtual Terminal
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl clear_rows(signed(arg))) {

auto signed char *b;
auto coord_t coord;
auto signed r;
auto signed short flag;

if(arg<(0x00)) return(cli_es(CTRL_J));
if(!arg) return(cli_es(CTRL_L));
if(!(cli_es(CTRL_K))) return(0x00);

AND(r,0x00);
if(--arg) {
if(!(coord_b(CLI_IN,CLI_RULE,&coord))) return(0x00);
if(!(cli_es(CTRL_A))) return(0x00);
r = clear_rows_r(arg);
if(!r) return(0x00);
if(!(coord_b(CLI_OUT,CLI_BASE,&coord))) return(0x00);
}

r++;

return(r);
}
