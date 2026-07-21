# define CAR_H
# include "./../../../config.h"

signed(__cdecl clearlsb(signed(arg))) {
auto signed r;
AND(r,0x00);
INC(r);
NOT(r);
return(arg&(r));
}
