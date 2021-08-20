/* **** Notes

Load events i.e., map events at *(CLI_B/O/I/L+(R(event,R(roll,*argp)))) on the RAM.
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_load_events_internals(signed(fd),cals_t(*argp))) {

auto signed commas = (0x04);
auto signed char comma = (',');
auto signed char delim = ('\n');

auto cals_event_t *ev;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(CALS_INTERRUPT&(R(flag,*argp))) return(0x00);

if(CALS_LOADED&(R(flag,*argp))) {
flag = (CALS_ERROR|(CALS_LOADED));
flag = (~flag);
AND(R(flag,*argp),flag);
return(0x00);
}

b = (0x00);
r = read_f(&b,delim,fd);
if(!b) {
printf("%s \n","<< Error at fn. read_f()");
return(0x00);
}

if(!r) OR(R(flag,*argp),CALS_LOADED);

r = ct_only(comma,b);
if(commas<(r)) {
r = cals_bind_events(&(R(roll,*argp)));
if(!r) {
OR(R(flag,*argp),CALS_INTERRUPT);
printf("%s \n","<< Error at fn. cals_bind_events()");
// return(0x00);
}
if(!(CALS_INTERRUPT&(R(flag,*argp)))) {
ev = (*(CLI_INDEX+(R(event,R(roll,*argp)))));
r = cals_convert(b,ev);
if(!r) OR(R(flag,*ev),CALS_INVALID);
if(!(CALS_INVALID&(R(flag,*ev)))) {
if(CALS_MERIDIEM&(R(flag,*argp))) OR(R(flag,*ev),CALS_MERIDIEM);
}}}

embed(0x00,b);
if(b) rl(b);
b = (0x00);

return(0x01+(cals_load_events_internals(fd,argp)));
}
