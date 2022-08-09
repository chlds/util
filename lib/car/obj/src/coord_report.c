/* **** Notes

Coordinate

Remarks:
Cursor Position Report
DECXCPR
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_report(signed(arg),coord_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed char *p = ("\033[6n");
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
r = wr_b(0x01/* CLI_OUT */,p,ct(p));
if(!(r^(~0x00))) return(0x00);
b = (0x00);
r = coord_report_r(&b);
if(!b) return(0x00);
r = coord_report_r_r(arg,argp,b);
embed(0x00,b);
rl(b);
b = (0x00);
return(r);
}
