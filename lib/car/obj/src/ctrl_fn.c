/* **** Notes

Run in an array of function pointers.

Remarks:
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl ctrl_fn(signed char(*cache),void(*argp))) {

auto signed char *b;
auto signed r;

if(!cache) return(0x00);
if(!argp) return(0x00);

r = (signed) (*cache);
if(r&(~CTRL_MASK)) return(0x00);
if(0x01<(ct(cache))) AND(r,0x00); // meta keys

return(ctrl_fn_r(r,argp));
}
