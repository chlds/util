/* **** Notes

Confirm.
*/


# define CAR
# include <stdio.h>
# include <stddef.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl cf_dir(signed char(*argp))) {

auto signed char *b;
auto signed r;
auto size_t size;
auto signed char *dir = ("dir");

if(!argp) return(0x00);
if(!(already_b(&size,argp))) return(0x00);

return(cf_ff(argp,dir));
}
