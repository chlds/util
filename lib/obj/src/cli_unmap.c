/* **** Notes

Unmap.

Remarks:
Along with C library
//*/


# include <stdlib.h>
# include "../../../incl/cl.h"

signed(__cdecl cli_unmap(signed(times),signed char(**argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(times<(0x01)) return(0x00);

if(*argp) {
free(*argp);
*argp = (0x00);
}

argp++;
--times;

return(0x01+(cli_unmap(times,argp)));
}
