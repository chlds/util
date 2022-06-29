/* **** Notes

Check the ordinal number.

Remarks:
Refer at fn. reords_part.
//*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ords_part(signed char(**di),signed char(*si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*di)) return(0x00);
cmpr_part(&r,*di,si);
if(!r) return(0x00);
di++;
return(0x01+(ords_part(di,si)));
}
