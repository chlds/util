/* Notes

Convert

Remarks:
Return (~0x00) on failure
*/


# define CAT_H
# define TIME_H
# include "./../../../config.h"

signed(__cdecl current_mn_b(signed(arg),time_t(*argp))) {
auto struct tm *t;
auto time_t te;
auto signed r;
if(!argp) return(~0x00);
// time(&te);
te = (*argp);
t = localtime(&te);
if(arg) t = gmtime(&te);
if(!t) return(~0x00);
r = (R(tm_min,*t));
return(r);
}
