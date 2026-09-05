# define CAR_H
# include "./../../../config.h"

signed(__cdecl leadingshort(signed short(*arg))) {
if(!derefs(arg)) return(0x00);
if(lowsurrogates(dw(derefs(arg)))) return(0x00);
if(highsurrogates(dw(derefs(arg)))) return(0x02);
return(0x01);
}
