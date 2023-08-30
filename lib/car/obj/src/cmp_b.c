/*

Compare
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cmp_b(signed char(*di),signed char(*si))) {
auto signed r;
auto signed mask = (0xFF);
if(!di) return(0x00);
if(!si) return(0x00);
r = (signed)(mask&(*di));
if(r^(signed)(mask&(*si))) return(r+(0x01+(~(signed)(mask&(*si)))));
if(!r) return(r);
di++;
si++;
return(cmp_b(di,si));
}
