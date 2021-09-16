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
auto signed short flag;

if(!cache) return(0x00);
if(!argp) return(0x00);

r = ct(cache);
if(!(EQ(0x01,r))) r = (0x01);

return(ctrl_fn_r(r,argp));
}
