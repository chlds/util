/* **** Notes

Load events i.e., map events at *(CLI_B/O/I/L+(R(event,R(roll,*argp)))) on the RAM.
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_load_events(signed char(*csv_filename),cals_t(*argp))) {

auto signed char *b;
auto signed char *path;
auto time_t t;
auto signed i,r;
auto signed short flag;
auto signed char *cals_dir = (".cals/");
signed(__cdecl*f)(signed char(*cache),cals_t(*argp));
signed(__cdecl*(fn[]))(signed char(*cache),cals_t(*argp)) = {
cals_load_events_internal,
cals_load_events_r,
0x00,
};

if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

b = rf_env("USERPROFILE");
if(!b) return(0x00);

path = (0x00);
r = cat_b(&path,b,"/",cals_dir,(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}

AND(i,0x00);
b = (csv_filename);
if(!b) {
b = (path);
OR(i,0x01);
}

f = (*(i+(fn)));
r = f(b,argp);
if(!r) printf("%s%d%s \n","<< Error at fn. *(",i,"+(fn))()");

rl(path);
path = (0x00);
b = (path);

return(r);
}
