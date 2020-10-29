/* **** Notes

Unmap out of the RAM
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl cals_unmap(cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = embed(0x00/* flag */,R(b,*argp));
free(R(b,*argp));
R(b,*argp) = (0x00);

return(r);
}
