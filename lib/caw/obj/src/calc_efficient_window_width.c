/* Notes

Retrieve

Remarks:
Return (0x00) on failure
*/


# define CAW_H
# include "./../../../config.h"

signed(__cdecl calc_efficient_window_width(void(*argp/* hdl */))) {
auto signed r;
auto signed right = (0x02);
auto signed left = (0x00);
auto signed mask = (0xFFFFFFFF);
if(!argp) return(0x00);
r = (signed)(mask&(currently_working_nonclient_window_area(left,argp)));
if(r<(0x00)) return(0x00);
r = (0x01+(~r));
r = (r+(currently_working_area(right)));
if(r<(0x00)) return(0x00);
return(r);
}
