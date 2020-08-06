/* **** Notes

Table scanning
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl tablescan(signed char(di),signed char(*si))) {

/* **** CODE/TEXT */
if(!si) return(0x00);
if(!(*si)) return(0x00);

if(!(di^(*si))) return(0x00);

si++;

return(0x01+(tablescan(di,si)));
}
