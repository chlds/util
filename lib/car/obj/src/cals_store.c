/* **** Notes

Store an event at file event.csv in directory ~/.cals/.

Remarks:
Currently under construction
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cals_store(cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

AND(flag,0x00);

// map
r = concat_in_csv(&b,argp);
if(!r) {
printf("%s \n","<< Error at fn. concat_in_csv()");
return(0x00);
}

if(CALS_VERBOSE&(R(flag,*argp))) {
printf("[%s: %s] \n","CSV",b);
}

// open, write and close
r = cals_store_internal(b,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_store_internal()");
// return(0x00);
flag++;
}

// unmap
if(b) free(b);
b = (0x00);

if(flag) return(0x00);

return(0x01);
}
