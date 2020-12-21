/* **** Notes

Flag
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_flag_v(cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

OR(R(flag,*argp),CALS_VERBOSE);

return(0x01);
}
