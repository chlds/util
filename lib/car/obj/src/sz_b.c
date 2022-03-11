/* **** Notes

Size.

Remarks:
Return a negative value on failure.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

size_t(__cdecl sz_b(signed char(*argp))) {

auto signed r;
auto size_t s;

if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);

r = already_b(&s,argp);
if(!r) return(~0x00);

return(s);
}
