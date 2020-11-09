/* **** Notes

Store an event at file event.csv in directory ~/.cals/.

Remarks:
Currently under construction
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_store(cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

// open
// read/write
// close

return(0x01);
}
