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

signed(__cdecl cli_log_b(signed(arg),signed char(**cache),signed char(*di/* path */),time_t(*argp),signed char(*si/* contents */))) {

auto signed char **v;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short flag;

if(!cache) return(0x00);
if(!di) return(0x00);
if(!argp) return(0x00);
if(!si) return(0x00);
// if(*cache) return(0x00);

v = (cache);
if(!(init_b(0x00,CLI_OBJS,v))) return(0x00);

r = cli_log_b_r(arg,v,di,argp,si);
if(!r) printf("%s \n","<< Error at fn. cli_log_b_r()");

if(!(init_b(0x01,CLI_OBJS,v))) return(0x00);

return(r);
}
