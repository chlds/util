/* **** Notes

Store an event at file event.csv in directory ~/.cals/.

Remarks:
Currently under construction
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_store(cals_event_t(*argp))) {

auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

if(!argp) return(0x00);

AND(flag,0x00);

// map
b = (0x00);
r = cals_reparse(&b,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_reparse()");
return(0x00);
}

if(CALS_VERBOSE&(R(flag,*argp))) {
printf("[%s: ","CSV");
r = cli_outs(b);
printf("] \n");
}

// open, write and close
r = cals_store_internal(b,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_store_internal()");
// return(0x00);
OR(flag,0x01);
}

// unmap
if(b) rl(b);
b = (0x00);

if(flag) return(0x00);

return(0x01);
}
