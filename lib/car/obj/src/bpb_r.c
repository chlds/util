/* **** Notes

Bits par byte.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl bpb_r(signed char(arg))) {
auto signed char b;
AND(b,0x00);
NOT(b);
AND(arg,b);
if(!arg) return(0x00);
SHL(arg,0x01);
return(0x01+(bpb_r(arg)));
}
