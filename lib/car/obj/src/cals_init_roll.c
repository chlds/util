/* **** Notes

Initialise
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_init_roll(signed(arg),cals_roll_t(*argp))) {

auto time_t t;
auto signed r;
auto signed short di;
auto signed short mo;

if(!argp) return(0x00);

r = (CALS_OBJS);
if(!arg) while(r) *(--r+(R(event,*argp))) = (0x00);
if(arg) {
if(CALS_BOUND&(R(flag,*argp))) {
r = cals_unbind_events(argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_unbind_events()");
return(0x00);
}}}

AND(R(flag,*argp),0x00);
R(optl,*argp) = (0x00);

if(!arg) OR(R(flag,*argp),CALS_INIT);

return(0x01);
}
