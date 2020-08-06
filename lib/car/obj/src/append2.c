/* **** Notes

Append the si to the di (using along with fn. ct and with fn. cpy).

argp: Put the leading address of a buffer at.
*/


# define CAR
# include "../../../incl/config.h"
// # include <stdarg.h>

signed(__cdecl append2(signed char(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed r;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

r = ct(di);
// if(!r) return(0x00);

di = (di+(r));

r = cpy(di,si);

return(r);
}
