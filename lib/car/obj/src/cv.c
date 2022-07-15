/* **** Notes

Convert

Remarks:
Call fn. rl later
An n-digit number at least
Refer at fn. cx
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv(signed(digit),signed(arg))) {
auto signed char *b;
auto signed radix = (0x0A);
b = (0x00);
if(!(cv_d(radix,&b,arg))) return(0x00);
return(cv_r(digit,b));
}
