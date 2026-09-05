# define CAR_H
# include "./../../../config.h"

signed(__cdecl surrogates(signed(arg))) {
auto signed s = (0xDC00|(0x3FF));
auto signed p = (0xD800);
if(arg<(p)) return(0x00);
if(s<(arg)) return(0x00);
return(arg);
}
