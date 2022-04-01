/* **** Notes

Enclosed in double quotation marks.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl quot_b(signed(arg/* size */),signed char(*di/* buff */),signed char(*si))) {

auto signed char *b;
auto signed r;
auto signed char q = ('"');
// auto signed char s = ('\\');

if(!di) return(0x00);
if(!si) return(0x00);

r = (0x02+(ct(si)));
r++;
r = (r*(sizeof(*b)));
if(arg<(r)) return(0x00);

b = (di);
*b = (q);
b++;
*b = (0x00);
append_b(di,si);
b = (di);
b = (b+(ct(b)));
*b = (q);
b++;
*b = (0x00);
b = (0x00);

return(ct(di));
}
