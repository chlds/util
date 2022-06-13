/* **** Notes

Return the calendar week.

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CAR
# define CALEND
// # include <time.h>
# include "../../../incl/config.h"

signed(__cdecl ct_wk(signed short(wk),time_t(arg))) {

auto struct tm *tp;
auto time_t t;
auto signed r;
auto signed short di;
auto signed days = (0x07);
auto signed(__cdecl*f)(time_t(t));
auto signed(__cdecl*(fn[]))(time_t(t)) = {
ct_wk_sun,
ct_wk_mon,
0x00,
};

if(arg<(0x00)) return(0x00);
if(wk) {
AND(wk,0x00);
OR(wk,0x01);
}

f = (*(wk+(fn)));

return(f(arg));
}
