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

signed(__cdecl cli_log(signed(arg),signed char(*di/* path */),signed char(*si/* contents */))) {

auto signed char **v;
auto time_t t;
auto signed i,r;
auto signed short flag;
auto signed char *(b[CLI_OBJS]);

if(!di) return(0x00);
if(!si) return(0x00);

time(&t);

r = (CLI_OBJS);
r = (r*(sizeof(*v)));
v = (signed char(**)) alloc(r);
if(!v) return(0x00);

r = cli_log_b(arg,v,di,&t,si);
if(!r) printf("%s \n","<< Error at fn. cli_log_b()");

rl(v);
v = (0x00);

return(r);
}
