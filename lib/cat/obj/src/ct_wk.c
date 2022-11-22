/* **** Notes

Return the calendar week

Remarks:
Refer at <corecrt_wtime.h>
*/


# define CAR_H
# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl ct_wk(signed short(wk),time_t(*argp))) {
auto signed(__cdecl*f)(time_t(*argp));
auto signed(__cdecl*(fn[]))(time_t(*argp)) = {
ct_wk_mon,
ct_wk_sun,
ct_wk_sat,
0x00,
};
if(!argp) return(0x00);
wk = (wk%(ct_f(fn)));
f = (*(wk+(fn)));
return(f(argp));
}
