# define CAR_H
# include "./../../../config.h"

signed(__cdecl counttrailingzeros(signed(arg))) {
if(0x01&(arg)) return(0x00);
return(0x01+(counttrailingzeros(shr(arg))));
}
