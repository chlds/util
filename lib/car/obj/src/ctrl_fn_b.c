/* **** Notes

Run in an array of function pointers.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_fn_b(signed(arg),void(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(arg&(~CTRL_MASK)) return(0x00);
if(!argp) return(0x00);

return(ctrl_fn_r(arg,argp));
}
