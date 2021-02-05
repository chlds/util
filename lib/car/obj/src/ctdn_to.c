/* **** Notes

Count down letters to find an offset point.

Remarks:
Refer at fn. cf.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ctdn_to(signed char(*cache),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

AND(flag,0x00);
r = ct(argp);
i = (r);
r = ctdn_to_r(flag,r,cache,argp);
r = (-r+(i));

return(r);
}
