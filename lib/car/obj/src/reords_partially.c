/* **** Notes

Re-ord.

Remarks:
Refer at fn. ords_partially.
//*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl reords_partially(signed char(**di),signed char(*si))) {
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!(*di)) return(0x00);
cmpr_partially(&r,si,*di);
if(!r) return(0x00);
di++;
return(0x01+(reords_partially(di,si)));
}
