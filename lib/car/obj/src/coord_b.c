/*

Set CLI_IN to get the current cursor position
or CLI_OUT to set the cursor position
at the flag

Remarks:
Only in the Virtual Terminal
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_b(signed short(flag),signed(arg),coord_t(*argp))) {
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!flag) return(coord_report(arg,argp));
return(coord_b_r(arg,argp));
}
