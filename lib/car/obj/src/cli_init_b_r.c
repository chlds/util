/* **** Notes

Initialise.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cli_init_b_r(signed(cache),signed(arg),signed char(**argp))) {

auto signed char *b;

if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

--arg;
if(cache) {
embed(0x00,*(arg+(argp)));
rl(*(arg+(argp)));
}

*(arg+(argp)) = (0x00);

return(0x01+(cli_init_b_r(cache,arg,argp)));
}
