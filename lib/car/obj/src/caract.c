# define CAR_H
# include "./../../../config.h"

signed(__cdecl caract(signed arg)) {
auto signed a = (0x80);
if(!(a^(arg))) AND(arg,0x00);
return(arg);
}
