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
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

/* **** CODE/TEXT */
if(!csv_filename) return(0x00);
if(!argp) return(0x00);

// open
// close

return(0x01);
}
