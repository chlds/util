/* **** Notes

Store bytes.

Remarks:
Code of line break: CRLF, LF or (0x00).
Append.
//*/


# define CAR
# define CALEND
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_log_b_r(signed(arg),signed char(**cache),signed char(*di/* path */),time_t(*argp),signed char(*si/* contents */))) {

auto signed char **v;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short flag;
auto signed char *gmt = ("GMT");
auto signed char *sp = (" ");

if(!cache) return(0x00);
if(!di) return(0x00);
if(!argp) return(0x00);
if(!si) return(0x00);
if(*cache) return(0x00);

if(!(chrono_date(arg,CLI_BASE+(cache),argp))) return(0x00);
if(!(chrono_time(arg,CLI_OFFSET+(cache),argp))) return(0x00);

b = (gmt);
if(arg) {
b = (0x00);
r = chrono_diff(&b,argp);
if(!r) return(0x00);
}

r = cat_b(CLI_INDEX+(cache),b,sp,si,(void*)0x00);
if(arg) {
embed(0x00,b);
rl(b);
}

b = (0x00);
if(!r) return(0x00);

return(cli_log_r(di,cache));
}
