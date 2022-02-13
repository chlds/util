/* **** Notes

Bits par byte.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl bpb(void)) {

auto signed char b;

AND(b,0x00);
NOT(b);

return(bpb_r(b));
}
