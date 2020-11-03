/* **** Notes

Subtract
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl subtract(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = (arg+(0x01+(~(ct(argp)))));

return(r);
}
