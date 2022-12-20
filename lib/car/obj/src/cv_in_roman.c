/* **** Notes

Convert

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv_in_roman(signed(arg))) {
auto signed char *b;
auto signed r;
// auto signed epoch = (1970);
auto signed epoch = (0x00);
if(arg<(epoch)) return(0x00);
b = (0x00);
r = cv_in_roman_r(arg,&b);
if(!r) {
embed(0x00,b);
rl(b);
b = (0x00);
}
return(b);
}
