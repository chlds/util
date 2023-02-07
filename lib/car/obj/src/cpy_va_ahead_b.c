/* **** Notes

Copy
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cpy_va_ahead_b(signed char(**di),signed char(**si))) {
auto signed char *b;
if(!di) return(0x00);
b = (0x00);
di++;
*di = (b);
return(0x01+(cpy_va_b(di,si)));
}
