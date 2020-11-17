/* **** Notes

Load events i.e., map events at *(CLI_B/O/I/L+(R(event,*argp))) on the RAM.

Remarks:
Currently under construction
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_load_events(signed char(*csv_filename),cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *second_half = ("/.cals/event.csv");
auto signed short interrupted_error = (0x02);
auto signed short allocated_memory = (0x01);

auto signed char *path;
auto time_t t;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

AND(flag,0x00);

path = (csv_filename);
if(!path) {
OR(flag,allocated_memory);
r = concat2home(&path,second_half);
if(!r) {
printf("%s \n","<< Error at fn. concat2home()");
return(0x00);
}}

// open, read and close
r = cals_load_events_internal(path,argp);
if(!r) {
OR(flag,interrupted_error);
printf("%s \n","<< Error at fn. cals_load_events_internal()");
}

if(allocated_memory&(flag)) free(path);
path = (0x00);

if(interrupted_error&(flag)) return(0x00);

return(0x01);
}
