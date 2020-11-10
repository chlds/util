/* **** Notes

Entry an event.

Remarks:
Currently under construction
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_entry(signed char(**argv),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed short *w;
auto signed char *b;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

/* **** CODE/TEXT */
if(!argv) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);

r = concat_argv(0x02/* offset */,&b,argv);
// if(!r) return(0x00);
if(!r) {
printf("\n");
printf("  %s \n","cals.exe e[v] <subject> [date] [time]");
return(0x01);
}

r = cals_parse(b,argp);
// if(!r) return(0x00);
if(!r) {
printf("%s \n","<< Error at fn. cals_parse()");
flag++;
}

if(!flag) {
r = cals_store(argp);
// if(!r) return(0x00);
if(!r) {
printf("%s \n","<< Error at fn. cals_store()");
flag++;
}}

if(!flag) {
if(CALS_VERBOSE&(R(flag,*argp))) {
printf("[%s: %s] ","subject",R(b,*argp));
printf("[%s: %s %d, %d] ","date",*(CAPS_MONTH+(*(CALS_MO+(R(date,*argp))))),*(CALS_DI+(R(date,*argp))),*(CALS_YR+(R(date,*argp))));
printf("[%s: %02d:%02d] ","time",*(CALS_HR+(R(time,*argp))),*(CALS_MN+(R(time,*argp))));
if(CALS_TIME_ALLDAY&(R(flag,*argp))) printf("[%s] ","All-day");
if(CALS_DATE_TODAY&(R(flag,*argp))) printf("[%s] ","Today");
printf("\n");
}}

// after storing at file event.csv in directory ~/.cals/.
if(R(b,*argp)) {
free(R(b,*argp));
R(b,*argp) = (0x00);
}

if(b) {
free(b);
b = (0x00);
}

if(flag) return(0x00);

return(0x01);
}
