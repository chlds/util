/* **** Notes

Unmap all the buffers allocated by fn. splt.

Remarks:
Using fn. free
*/


# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

signed(__cdecl splt_free(char signed(**argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

XOR(r, r);
while(*(argp+(r))) {
free(*(argp+(r++)));
}

free(*(argp+(r++)));
free(argp);
r++;

return(r);
}
