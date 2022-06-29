/* **** Notes

Check the ordinal number.
//*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ord_d(signed(*di),signed(si))) {
if(!di) return(0x00);
if(!(*di)) return(0x00);
if(!(si^(*di))) return(0x00);
di++;
return(0x01+(ord_d(di,si)));
}
