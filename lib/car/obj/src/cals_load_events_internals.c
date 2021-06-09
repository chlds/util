/* **** Notes

Load events i.e., map events at *(CLI_B/O/I/L+(R(event,R(roll,*argp)))) on the RAM.

Remarks:
Currently under construction
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_load_events_internals(signed(fd),cals_t(*argp))) {

static signed commas = (0x04);
static signed char comma = (',');

auto signed short interrupted_error = (0x02);
auto signed short allocated_memory = (0x01);
auto signed char delim = ('\n');

auto cals_event_t *event;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short flag;

if(!argp) return(0x00);

if(CALS_INTERRUPT&(R(flag,*argp))) return(0x00);

if(CALS_LOADED&(R(flag,*argp))) {
flag = (~CALS_ERROR);
AND(R(flag,*argp),flag);
return(0x00);
}

b = (0x00);
r = read_b(&b,delim,fd);
if(!b) {
printf("%s \n","<< Error at fn. read_b()");
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
event = (*(CLI_INDEX+(R(event,R(roll,*argp)))));
r = cals_convert(b,event);
if(!r) OR(R(flag,*event),CALS_INVALID);
}}

embed(0x00,b);
if(b) rl(b);
b = (0x00);

return(0x01+(cals_load_events_internals(fd,argp)));
}
