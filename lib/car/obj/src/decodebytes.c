# define CAR_H
# include "./../../../config.h"

signed(__cdecl decodebytes(signed char(*arg))) {
if(!leadingbyte(arg)) return(0x00);
return(mastering(arg,decodebytes_r(arg)));
}
