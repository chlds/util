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

signed(__cdecl cli_log(signed char(*di/* path */),signed char(*si/* contents */))) {

auto signed char **v;
auto time_t t;
auto signed i,r;
auto signed short flag;
auto signed char *(b[CLI_OBJS]);

if(!di) return(0x00);
if(!si) return(0x00);

time(&t);

AND(flag,0x00);
v = (b);
if(!(init_b(0x00,CLI_OBJS,v))) return(0x00);
if(!(chrono_date(CLI_BASE+(v),&t))) return(0x00);
if(!(chrono_time(CLI_OFFSET+(v),&t))) OR(flag,0x01);

*(CLI_INDEX+(v)) = (si);
if(!flag) {
r = cli_log_r(di,v);
if(!r) {
printf("%s \n","<< Error at fn. cli_log_r()");
OR(flag,0x01);
}}

*(CLI_INDEX+(v)) = (0x00);
if(!(init_b(0x01,CLI_OBJS,v))) return(0x00);
if(flag) AND(r,0x00);

return(r);
}
