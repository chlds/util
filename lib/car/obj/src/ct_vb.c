/* **** Notes

Count pointers.

Remarks:
Refer at fn. ct_p, ct_v, and ct_bv.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_vb(signed char(**argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

argp++;

return(0x01+(ct_vb(argp)));
}
