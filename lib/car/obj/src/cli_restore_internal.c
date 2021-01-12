/* **** Notes

Restore.

Remarks:
Along with C library
//*/


# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_restore_internal(signed(*cache),signed char(**argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);

r = ct(*argp);
r = (CLI_BB+(r));
r = (r*(sizeof(**argp)));
if(r<(CLI_BB)) return(0x00);

b = (signed char(*)) malloc(r);
if(!b) return(0x00);

r = cpy(b,*argp);
if(!r) *b = (0x00);

*cache = (r);

embed(0x00,*argp);
if(*argp) free(*argp);

*argp = (b);
b = (0x00);

return(0x01);
}
