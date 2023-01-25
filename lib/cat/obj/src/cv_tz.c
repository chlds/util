/* **** Notes

Convert

Remarks:
Ahead or back in half-hourly steps
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed char *(__cdecl cv_tz(signed(arg),time_t(*argp))) {
auto signed r;
if(!argp) return(0x00);
r = (arg);
if(r<(0x00)) r = (0x01+(~r));
if(!(r<(2*(24)))) AND(arg,0x00);
return(cv_tz_yr(arg,argp));
}
