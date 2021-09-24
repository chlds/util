/* **** Notes

Release

Remarks:
Refer at fn. cals_allocate_for_today.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_release_for_today(cals_t(*argp))) {

auto cals_event_t *event;
auto signed char *b;
auto signed r;

if(!argp) return(0x00);

rl(R(b,R(today,*argp)));
R(b,R(today,*argp)) = (0x00);

return(0x01);
}
