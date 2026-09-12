# define CAR_H
# include "./../../../config.h"

signed(__cdecl whiteriver(signed char(*arg))) {
if(!deref(arg)) return(0x00);
if(0x20<(db(deref(arg)))) return(!(0x7F+(cii(db(deref(arg))))));
return(0x01);
}
