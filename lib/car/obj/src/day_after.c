/* **** Notes

The day after
*/


# define CALEND
# define CAR
# include "./../../../incl/config.h"

signed short(__cdecl day_after(signed short(arg))) {

if(arg<(0x00)) return(0x00);
if(!(arg<(DAYS))) return(0x00);

if(!(0x06^(arg))) return(0x00);

return(++arg);
}
