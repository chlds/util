/* Synopsis

Cascade

Remarks:
Call fn. rl later
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cas_xe(signed char(*argp))) {
auto signed char *b;
b = cas(argp);
if(!b) return(argp);
if(!(EQ(argp,b))) {
embed(0x00,argp);
rl(argp);
argp = (0x00);
}
return(b);
}
