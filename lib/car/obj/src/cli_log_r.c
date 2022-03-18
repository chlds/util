/* **** Notes

Store bytes.

Remarks:
Code of line break: CRLF, LF or (0x00).
Append.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_log_r(signed char(*di/* path */),signed char(**si/* contents */))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed char *separator = (" ");

if(!di) return(0x00);
if(!si) return(0x00);

b = (0x00);
if(!(cat_v(0x00,separator,&b,si))) return(0x00);

r = cli_log_rr(di,b);
embed(0x00,b);
rl(b);
b = (0x00);

return(r);
}
