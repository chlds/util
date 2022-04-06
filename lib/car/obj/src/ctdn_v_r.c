/* **** Notes

Count letters down to the specific arrays.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ctdn_v_r(signed(arg),signed char(**cache),signed char(*argp))) {

auto signed char *b;
auto signed r;

if(!arg) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

b = (*(--arg+(cache)));
r = ctdn_a(b,argp);
if(r) return(r);

return(ctdn_v_r(arg,cache,argp));
}
