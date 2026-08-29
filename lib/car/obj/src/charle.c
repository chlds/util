# define CAR_H
# include "./../../../config.h"

signed(__cdecl charle(signed char(*arg))) {
auto signed r;
r = leadingbyte(arg);
if(!(EQ(r,charle_r(arg,r)))) return(0x00);
return(r);
}
