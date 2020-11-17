/* **** Notes

Load events i.e., map events at *(CLI_B/O/I/L+(R(event,*argp))) on the RAM.

Remarks:
Currently under construction
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_load_events_internals(signed(fd),cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
static signed commas = (0x03);
static signed char comma = (',');

auto signed short interrupted_error = (0x02);
auto signed short allocated_memory = (0x01);
auto signed char delim = ('\n');

auto cals_t *event;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(CALS_INTERRUPT&(R(flag,*argp))) return(0x00);

if(CALS_LOADED&(R(flag,*argp))) {
flag = (~CALS_ERROR);
AND(R(flag,*argp),flag);
return(0x00);
}

r = read_b(fd,delim,&b);
if(!r) {
printf("%s \n","<< Error at fn. read_b()");
return(0x00);
}

if(0x01<(r)) OR(R(flag,*argp),CALS_LOADED);

r = ct_only(comma,b);
if(commas<(r)) {
r = cals_bind_events(argp);
if(!r) {
OR(R(flag,*argp),CALS_INTERRUPT);
printf("%s \n","<< Error at fn. cals_bind_events()");
// return(0x00);
}
if(!(CALS_INTERRUPT&(R(flag,*argp)))) {
event = (*(CLI_INDEX+(R(event,*argp))));
r = cals_convert(b,event);
if(!r) OR(R(flag,*event),CALS_INVALID);
}}

if(b) {
embed(0x00/* flag */,b);
free(b);
}
b = (0x00);

return(0x01+(cals_load_events_internals(fd,argp)));
}
