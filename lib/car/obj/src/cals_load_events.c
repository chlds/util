/* **** Notes

Load events i.e., map events at *(CLI_B/O/I/L+(R(event,R(roll,*argp)))) on the RAM.

Remarks:
Currently under construction
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_load_events(signed char(*csv_filename),cals_t(*argp))) {

auto signed char *cals_dir = (".cals/");
auto signed char *default_file = ("event.csv");
auto signed short interrupted_error = (0x02);
auto signed short allocated_memory = (0x01);

auto signed char *path;
auto signed char *p;
auto time_t t;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

AND(flag,0x00);

path = (csv_filename);
if(!path) {
OR(flag,allocated_memory);
p = rf_env("USERPROFILE");
if(!p) return(0x00);
r = cat_b(&path,p,"/",cals_dir,default_file,(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}}

// open, read and close
r = cals_load_events_internal(path,argp);
if(!r) {
OR(flag,interrupted_error);
printf("%s \n","<< Error at fn. cals_load_events_internal()");
}

if(allocated_memory&(flag)) rl(path);
path = (0x00);

if(interrupted_error&(flag)) return(0x00);

return(0x01);
}
