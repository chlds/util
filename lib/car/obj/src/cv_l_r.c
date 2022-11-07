/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_l_r(signed short(radix),signed char(*di_tbl),signed char(*si_tbl),signed char(*di),signed char(*si))) {
auto signed r;
auto signed char c;
if(!(0x00<(radix))) return(0x00);
if(!di_tbl) return(0x00);
if(!si_tbl) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) {
*di = (0x00);
return(0x00);
}
c = (*si);
si++;
r = ord(si_tbl,c);
if(r<(radix)) *di = (*(r+(di_tbl)));
di++;
AND(c,0x00);
return(0x01+(cv_l_r(radix,di_tbl,si_tbl,di,si)));
}
