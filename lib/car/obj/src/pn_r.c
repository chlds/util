# define CAR_H
# include "./../../../config.h"

signed(__cdecl pn_r(signed arg)) {
auto signed dividend;
auto signed divisor;
if(!(0x00<(arg))) return(0x00);
AND(divisor,0x00);
AND(dividend,0x00);
OR(dividend,arg);
OR(divisor,0x01);
while(INC(divisor)) {
if(!(divisor<(dividend))) break;
if(!(dividend%(divisor))) break;
}
return(divisor);
}
