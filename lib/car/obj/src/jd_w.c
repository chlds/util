/* **** Notes

Store bytes.

Remarks:
Based on UTF-16 and UTF-8
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl jd_w(signed(arg/* code of line break */),signed short(*di),signed char(**si))) {

auto signed char *b;
auto signed r;
auto signed char *separator = (" ");
auto signed br = (0x00);

if(!di) return(0x00);
if(!si) return(0x00);

b = (0x00);
if(!(cat_v(br,separator,&b,si))) return(0x00);

r = appd_w(arg,di,b);
if(!r) printf("%s \n","<< Error at fn. appd_w()");

embed(0x00,b);
rl(b);
b = (0x00);

return(r);
}
