/* **** Notes

Read bytes to the delimiter.

Remarks:
Call fn. rl later.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl rd_k(signed char(**di),signed char(*delim),signed(n),signed(fd))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
/* e.g.,
auto signed char delim[] = {
// SP,
// CR,
LF,
0x00,
};
//*/

if(!di) return(0x00);
if(*di) return(0x00);
if(n<(0x01)) return(0x00);
if(fd<(0x00)) return(0x00);

r = rd_k_r(di,delim,n,fd);
if(!(*di)) AND(r,0x00);
if(!r) printf("%s \n","<< Error at fn. rd_k_r()");

rm_br(*di);

return(r);
}
