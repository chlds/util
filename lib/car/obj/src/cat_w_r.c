/* **** Notes

Concatenate to the terminating null pointer
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl /* __attribute__((ms_abi)) */ cat_w_r(signed short(**di),signed short(**si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
r = cat_a_w(di,*si);
if(!r) return(0x00);
si++;
return(0x01+(cat_w_r(di,si)));
}
