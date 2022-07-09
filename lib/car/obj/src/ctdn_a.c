/* **** Notes

Count letters down to the specific array
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ctdn_a(signed char(*cache),signed char(*argp))) {
auto signed r;
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = ct(argp);
return(ctdn_a_r(r,cache,argp));
}
