/* **** Notes

Append si to di.

Remarks:
Put sufficient buffer at di.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl append_b(signed char(*di),signed char(*si))) {

if(!di) return(0x00);
if(!si) return(0x00);

di = (di+(ct(di)));

return(cpy(di,si));
}
