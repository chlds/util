/* **** Notes

Flag
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_flag_v(cals_t(*argp))) {

auto cals_event_t *ev;
auto signed i,r;

if(!argp) return(0x00);

OR(R(flag,*argp),CALS_VERBOSE);

return(0x01);
}
