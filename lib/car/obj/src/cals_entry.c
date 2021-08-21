/* **** Notes

Entry an event.

Remarks:
Currently under construction
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_entry(signed char(**argv),cals_event_t(*argp))) {

auto signed short *w;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

if(!argv) return(0x00);
if(!argp) return(0x00);

r = concat_argv(0x02/* offset */,&b,argv);
if(!r) {
printf("\n");
printf("  %s \n","cals.exe e[v] <subject> [date] [time]");
return(0x01);
}

AND(flag,0x00);
r = cals_parse(b,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_parse()");
flag++;
}

if(!flag) {
if(CALS_VERBOSE&(R(flag,*argp))) {
printf("[%s: ","subject");
r = cli_outs(R(b,*argp));
printf("] ");
printf("[%s: %s %d, %d] ","date",*(CAPS_MONTH+(*(CALS_MO+(R(date,*argp))))),*(CALS_DI+(R(date,*argp))),*(CALS_YR+(R(date,*argp))));
printf("[%s: %02d:%02d] ","time",*(CALS_HR+(R(time,*argp))),*(CALS_MN+(R(time,*argp))));
printf("[%s: %Xh] ","flag",R(flag,*argp));
if(CALS_TIME_ALLDAY&(R(flag,*argp))) printf("[%s] ","All-day");
if(CALS_DATE_TODAY&(R(flag,*argp))) printf("[%s] ","Today");
if(CALS_PERIODIC&(R(flag,*argp))) printf("[%s: %Xh] ","periodic",R(periodic,*argp));
printf("\n");
}}

if(!flag) {
r = cals_store(argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_store()");
flag++;
}}

// after storing at file event.csv in directory ~/.cals/.
if(R(b,*argp)) rl(R(b,*argp));
R(b,*argp) = (0x00);

if(b) rl(b);
b = (0x00);

if(flag) return(0x00);

return(0x01);
}
