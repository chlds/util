/* **** Notes

Flag
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_flag_e(cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char **argv;

auto cals_event_t event;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cals_init_event(&event);
if(!r) {
printf("%s \n","<< Error at fn. cals_init_event()");
return(0x00);
}

if(CALS_VERBOSE&(R(flag,*argp))) OR(R(flag,event),CALS_VERBOSE);

argv = (*(CLI_BASE+(R(argv,R(property,*argp)))));
if(!argv) return(0x00);

r = cals_entry(argv,&event);
if(!r) {
printf("%s \n","<< Error at fn. cals_entry()");
return(0x00);
}

OR(R(flag,*argp),CALS_QUIT);

return(0x01);
}
