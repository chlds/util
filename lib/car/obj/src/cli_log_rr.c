/* **** Notes

Store bytes.

Remarks:
Code of line break: CRLF, LF or (0x00).
Append.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_log_rr(signed char(*di/* path */),signed char(*si/* contents */))) {

auto signed short *w;
auto void *argp;
auto signed r;

if(!di) return(0x00);
if(!si) return(0x00);

w = (0x00);
if(!(cv_wb(&w,di))) {
printf("%s \n","<< Error at fn. cv_wb()");
return(0x00);
}

r = cli_log_rrr(w,si);
if(!r) printf("%s \n","<< Error at fn. cli_log_rrr()");

embed_w(0x00,w);
rl(w);
w = (0x00);

return(r);
}
