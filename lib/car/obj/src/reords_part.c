/* **** Notes

Re-ord.

Remarks:
Refer at fn. ords_part.
//*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl reords_part(signed char(**di),signed char(*si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*di)) return(0x00);
cmpr_part(&r,si,*di);
if(!r) return(0x00);
di++;
return(0x01+(reords_part(di,si)));
}
