/* **** Notes

Copy to the <di> out of the <si> by the specified bytes.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ncpy(signed(arg),signed char(*di),signed char(*si))) {
auto signed char cache;
if(arg<(0x00)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
if(!arg) {
*di = ('\0');
return(0x00);
}
if(!(*si)) {
*di = (0x00);
return(0x00);
}
cache = (*si);
*di = (cache);
--arg;
di++;
si++;
return(0x01+(ncpy(arg,di,si)));
}
