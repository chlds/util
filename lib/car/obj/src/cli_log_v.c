/* **** Notes

Log.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cli_log_v(signed(arg/* local */),signed char(*di/* path */),signed char(**si/* contents */))) {

auto signed char **v;
auto signed char *b;
auto signed br;
auto signed r;
auto signed short flag;
auto signed char *sp = (" ");

if(!di) return(0x00);
if(!si) return(0x00);

AND(br,0x00);
b = (0x00);
r = cat_v(br,sp,&b,si);
if(!r) {
printf("%s \n","<< Error at fn. cat_v()");
return(0x00);
}

r = cli_log(arg,di,b);
if(!r) printf("%s \n","<< Error at fn. cli_log()");

embed(0x00,b);
rl(b);
b = (0x00);

return(r);
}
