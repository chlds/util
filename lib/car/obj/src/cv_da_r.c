/* **** Notes

Convert into a signed double word out of characters.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_da_r(signed short(radix),signed char(*table),signed(*di),signed char(*si))) {
auto signed i,r;
auto signed short flag;
auto signed char c;
if(!table) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);
c = (*si);
r = ord(table,c);
if(r<(radix)) *di = (r+(radix*(*di))) /* % LIMIT */ ;
si++;
return(0x01+(cv_da_r(radix,table,di,si)));
}
