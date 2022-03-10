/* **** Notes

Re-ord.

Remarks:
Refer at fn. ords_partially.
//*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl reords_partially(signed char(**di),signed char(*si))) {

auto signed i,r;

if(!di) return(0x00);
if(!si) return(0x00);

if(!(*di)) return(0x00);

r = cmpr_partially(&i,si,*di);
if(!i) return(0x00);

di++;

return(0x01+(reords_partially(di,si)));
}
