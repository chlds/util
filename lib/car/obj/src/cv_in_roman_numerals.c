/* **** Notes

Convert

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv_in_roman_numerals(signed short(flag),signed(arg))) {
auto signed char *(__cdecl*f)(signed(arg));
auto signed char *(__cdecl**ff)(signed(arg));
auto signed char *(__cdecl*(fn[]))(signed(arg)) = {
cv_in_roman_numeral,
cv_in_small_roman_numeral,
0x00,
};
if(arg<(0x00)) return(0x00);
ff = (fn);
if(flag) ff++;
f = (*ff);
return(f(arg));
}
