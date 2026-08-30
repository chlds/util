# define CAR_H
# include "./../../../config.h"

signed(__cdecl dedibytes(signed char(*arg))) {
if(!dedibyte(arg)) return(0x00);
return(0x01+(dedibytes(++arg)));
}
