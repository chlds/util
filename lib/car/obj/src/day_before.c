/* **** Notes

The day before
*/


# define CALEND
# define CAR
# include "./../../../incl/config.h"

signed short(__cdecl day_before(signed short(arg))) {

if(arg<(0x00)) return(0x00);
if(!(arg<(DAYS))) return(0x00);

if(!arg) return(0x06);

return(--arg);
}
