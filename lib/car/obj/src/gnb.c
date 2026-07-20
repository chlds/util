# define CAR_H
# define LIMITS_H
# include "./../../../config.h"

signed(__cdecl gnb(signed(arg))) {
auto unsigned r;
AND(r,0x00);
NOT(r);
if(!(0x00<(arg))) return(0x00);
if(!(arg<(CHAR_BIT*(sizeof(r))))) return(r);
return(inv(r<<(arg)));
}
