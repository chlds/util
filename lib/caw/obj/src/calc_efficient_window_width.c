/* Notes

Retrieve

Remarks:
Return (0x00) on failure
*/


# define CAW_H
# include "./../../../config.h"

signed(__cdecl calc_efficient_window_width(signed(args/* direction */),void(*argp/* hdl */))) {
auto signed r;
auto signed(__cdecl*f)(void(*argp));
auto signed(__cdecl**d)(void(*argp));
auto signed(__cdecl*(a[]))(void(*argp)) = {
calc_efficient_window_width_on_rtl,
calc_efficient_window_width_on_ltr,
0x00,
};
if(!argp) return(0x00);
d = (a);
if(!args) d++;
f = (*d);
r = f(argp);
if(r<(0x00)) return(0x00);
return(r);
}
