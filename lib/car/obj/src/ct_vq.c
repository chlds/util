/* **** Notes

Count pointers.

Remarks:
Refer at fn. ct_p and ct_bv.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_vq(signed long long(**argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

argp++;

return(0x01+(ct_vq(argp)));
}
