/* **** Notes

Recursively unmap all the buffers allocated by fn. splt.

Remarks:
Using along with fn. spltfree2
*/


# define C_CODE_STDS
# define CAR
# include "../../../incl/config.h"

signed(__cdecl spltfree2_internal(signed char(**argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

free(*argp);

argp++;
return(1+(spltfree2_internal(argp)));
}
