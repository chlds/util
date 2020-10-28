/* **** Notes

Map on the RAM
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_map(cals_t(*argp),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!si) return(0x00);
if(!(*si)) return(0x00);

r = keep(&(R(b,*argp)),si);

return(r);
}
