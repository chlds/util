/* **** Notes

Count letters down to the specific arrays
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ctdn_v(signed char(**cache),signed char(*argp))) {
auto signed r;
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = ct_v_b(cache);
return(ctdn_v_r(r,cache,argp));
}
