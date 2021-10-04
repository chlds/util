/* **** Notes

Flag
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_flag_h(cals_t(*argp))) {

auto cals_event_t *ev;
auto signed i,r;

if(!argp) return(0x00);

return(cals_help(argp));
}
