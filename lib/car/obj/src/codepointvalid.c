# define CAR_H
# include "./../../../config.h"

signed(__cdecl codepointvalid(signed(arg))) {
auto signed s = (0xDC00|(0x3FF));
auto signed p = (0xD800);
auto signed a = (0x10FFFF);
if(arg<(0x00)) return(0x00);
if(a<(arg)) return(0x00);
if(!(arg<(p))) {
if(!(s<(arg))) return(0x00);
}
return(arg);
}
