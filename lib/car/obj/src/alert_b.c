/* **** Notes

Alert.

Remarks:
Return (0x00) on failure.
Return (~0x00) if less than 5 minutes ahead.
Return (~0x01) if more than 5 minutes ahead.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl alert_b(signed(arg),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short hr;
auto signed short mn;

if(!argp) return(0x00);

if(!(cv_hr(&hr,&mn,argp))) return(0x00);

return(alert_b_r(arg,hr,mn));
}
