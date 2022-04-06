/* **** Notes

Count letters down to the specific array.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ctdn_a_r(signed(arg),signed char(*cache),signed char(*argp))) {

auto signed char *b;
auto signed r;

if(!arg) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

b = (--arg+(argp));
cmpr_partially(&r,b,cache);
if(!r) return(arg);

return(ctdn_a_r(arg,cache,argp));
}
