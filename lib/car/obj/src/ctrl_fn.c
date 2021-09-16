/* **** Notes

Run in an array of function pointers.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_fn(signed(arg),void(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!(arg^(DEL))) arg = (CTRL_D);
if(!(arg<(CTRL_KEYS))) return(0x00);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

return(ctrl_fn_r(arg,argp));
}
