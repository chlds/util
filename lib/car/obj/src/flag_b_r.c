/* **** Notes

Flag.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl flag_b_r(signed char(**cache),signed short(*argp),signed short(*di),signed char(*si))) {

auto signed char **v;
auto signed r;
auto signed short flag;

if(!cache) return(0x00);
if(!(*cache)) return(0x00);
if(!argp) return(0x00);
// if(!di) return(0x00);
// if(!si) return(0x00);

AND(r,0x00);
if(!(cmpr_part(&r,si,*cache))) return(0x00);
if(!r) {
flag = (*argp);
OR(*di,flag);
}

cache++;
argp++;

return(0x01+(flag_b_r(cache,argp,di,si)));
}
