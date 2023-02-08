/* **** Notes

Convert

Remarks:
Return (~0x00) on failure
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl current_yr_b(signed(arg),time_t(*argp))) {
auto struct tm *tp;
auto time_t t;
auto signed r;
auto signed epoch = (1900);
if(!argp) return(~0x00);
// time(&t);
t = (*argp);
tp = localtime(&t);
if(arg) tp = gmtime(&t);
if(!tp) return(~0x00);
r = (epoch+(R(tm_year,*tp)));
return(r);
}
