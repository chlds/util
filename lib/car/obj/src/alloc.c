/* **** Notes

Allocate.

Remarks:
Along with C library
//*/


# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl alloc(signed(arg),signed char(**argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
if(!(0x00<(arg))) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
// if(arg<(0x00)) arg = (0x01+(~arg));

r = (arg);
r = (r*(sizeof(**argp)));
if(r<(0x01)) return(0x00);

b = (signed char(*)) malloc(r);
if(!b) return(0x00);

*argp = (b);
b = (0x00);

return(r);
}
