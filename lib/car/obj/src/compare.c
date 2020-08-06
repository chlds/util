/* **** Notes

Compare addresses.

Remarks:
Refer at fn. cmpr.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl compare(signed char(*di),signed char(*si))) {

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(si<(di)) si++;
else return(0x00);

return(0x01+(compare(di,si)));
}
