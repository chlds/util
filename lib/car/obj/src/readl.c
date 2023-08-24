/* Notes

Retrieve one letter

Remarks:
Call fn. rl later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl readl(signed arg/* fd */)) {
auto signed char *b;
auto signed r;
if(arg<(0x00)) return(0x00);
b = readb(arg);
if(!b) return(b);
r = ct_a(b);
if(!r) {
rl(b);
b = (0x00);
return(b);
}
return(readl_r(b,arg,r));
}
