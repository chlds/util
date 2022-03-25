/* **** Notes

Flag.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl flag_b(signed char(**cache),signed short(*argp),signed short(*di),signed char(*si))) {

auto signed char **v;
auto signed r;
auto signed short flag;

if(!cache) return(0x00);
if(!argp) return(0x00);
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

r = flag_b_r(cache,argp,di,si);
if(!(EQ(r,ct_vb(cache)))) AND(r,0x00);

return(r);
}
