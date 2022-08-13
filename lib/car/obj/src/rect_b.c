/*

Set CLI_IN to get the current rectangle
or CLI_OUT to set the rectangle
at the flag

Remarks:
Only in the Virtual Terminal
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rect_b(signed short(flag),signed(arg),rect_t(*argp))) {
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!flag) return(rect_report(arg,argp));
return(rect_b_r(arg,argp));
}
