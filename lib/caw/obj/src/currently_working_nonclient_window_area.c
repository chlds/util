/* **** Notes

Retrieve

Remarks:
Return (0x00) on failure
*/


# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed long(__cdecl currently_working_nonclient_window_area(signed(arg),void(*argp/* hdl */))) {
auto signed long r;
auto RECT rc;
if(!argp) return(0x00);
if(!(GetWindowRect(argp,&rc))) return(0x00);
r = (R(bottom,rc));
if(EQ(0x02,arg)) r = (R(right,rc));
if(EQ(0x01,arg)) r = (R(top,rc));
if(EQ(0x00,arg)) r = (R(left,rc));
return(r);
}
