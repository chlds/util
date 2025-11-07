# define CAR_H
# include "./../../../config.h"

signed(__cdecl cpy_va_b(signed char(**di),signed char(**si))) {
auto signed char *b;
if(!di) return(0x00);
if(!si) return(0x00);
b = (*si);
*di = (b);
if(!b) return(0x00);
return(0x01+(cpy_va_b(++di,++si)));
}
