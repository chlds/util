/* **** Notes

Concatenate to the terminating null pointer
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_b_r(signed char(**di),signed char(**si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = cat_b_rl(di,*si);
si++;
if(!(~r)) return(0x00);
return(0x01+(cat_b_r(di,si)));
}
