# define CAW_H
# include "./../../../config.h"

signed(__cdecl calc_efficient_window_width_on_rtl(void(*argp/* hdl */))) {
auto signed r;
auto signed right = (0x02);
auto signed left = (0x00);
auto signed long mask = (0xFFFFFFFF);
if(!argp) return(0x00);
r = currently_working_area(left);
r = (0x01+(~r));
r = (r+(signed)(mask&(currently_working_nonclient_window_area(right,argp))));
return(r);
}
