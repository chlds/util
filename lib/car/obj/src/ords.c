/* **** Notes

Check the ordinal number.
//*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ords(signed char(**di),signed char(*si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*di)) return(0x00);
cmpr(&r,*di,si);
if(!r) return(0x00);
di++;
return(0x01+(ords(di,si)));
}
