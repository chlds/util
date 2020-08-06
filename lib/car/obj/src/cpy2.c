/* **** Notes

Copy up to a specific character.

Remarks:
Using for fn. splt
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cpy2(signed char(cache), signed char(*di), signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char c;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) {
*di = (0x00);
return(0x00);
}

if(!(cache^(*si))) {
*di = (0x00);
return(0x00);
}

c = (*si);
*di = (c);

di++;
si++;

return(0x01+(cpy2(cache,di,si)));
}
