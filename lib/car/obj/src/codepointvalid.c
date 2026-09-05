# define CAR_H
# include "./../../../config.h"

signed(__cdecl codepointvalid(signed(arg))) {
auto signed a = (0x10FFFF);
if(arg<(0x00)) return(0x00);
if(a<(arg)) return(0x00);
if(surrogates(arg)) return(0x00);
return(arg);
}
