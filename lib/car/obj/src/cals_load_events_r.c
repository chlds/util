/* **** Notes

Load events i.e., map events at *(CLI_B/O/I/L+(R(event,R(roll,*argp)))) on the RAM.
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_load_events_r(signed char(*path),cals_t(*argp))) {

auto signed char **b;
auto signed i,r;
auto signed short flag;

if(!path) return(0x00);
if(!argp) return(0x00);

r = cf_dir(path);
if(!r) return(0x01);

b = (0x00);
r = retr_f(&b,path);
if(!r) {
printf("%s \n","<< Error at fn. retr_f()");
return(0x00);
}

r = cals_load_events_r_r(b,argp);
if(!r) printf("%s \n","<< Error at fn. cals_load_events_r_r()");

if(!(rl_v(&b))) {
printf("%s \n","<< Error at fn. rl_v()");
return(0x00);
}

return(r);
}
