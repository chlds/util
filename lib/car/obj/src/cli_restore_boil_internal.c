/* **** Notes

Restore.

Remarks:
Along with C library
//*/


# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_restore_boil_internal(signed(arg),signed char(**argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
// if(!(*argp)) return(0x00);
// if(arg<(0x00)) arg = (0x01+(~arg));

if(CLI_BB<(0x00)) return(0x00);

r = ct(*argp);
r = (arg+(r));
r = (CLI_BB+(r));
r++;
r = alloc(r,&b);
if(!r) return(0x00);

if(!(cpy(b,*argp))) *b = (0x00);

embed(0x00,*argp);
if(*argp) free(*argp);

*argp = (b);
b = (0x00);

return(r);
}
