/*

Retrieve
*/


# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed long(__cdecl currently_working_window_right(void(*argp/* hdl */))) {
auto signed long r;
auto RECT rc;
if(!argp) return(0x00);
if(!(GetWindowRect(argp,&rc))) return(0x00);
r = (R(right,rc));
return(r);
}
