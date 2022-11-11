/* **** Notes

Concatenate to the terminating null pointer
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_w_r(signed short(**di),signed short(**si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = cat_w_rl(di,*si);
si++;
if(!(~r)) return(0x00);
return(0x01+(cat_w_r(di,si)));
}
