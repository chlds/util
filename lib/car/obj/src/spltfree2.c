/* **** Notes

Unmap all the buffers allocated by fn. splt.

Remarks:
A wrapper function for fn. spltfree2_internal
*/


# define C_CODE_STDS
# define CAR
# include "../../../incl/config.h"

signed(__cdecl spltfree2(signed char(**argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = spltfree2_internal(argp);
if(!r) return(0x00);

free(argp);
r++;

return(r);
}
