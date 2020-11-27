/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed FOR_MONTHS = (0x04);

auto cals_event_t *ev;
auto struct tm *tp;
auto signed short *w;
auto signed char *b;
auto signed char *path;

auto cals_t cs;
auto cals_event_t event;
auto time_t curr_wk1;
auto time_t curr_t;
auto time_t t;
auto signed curr_hr,curr_mn,curr_sm;
auto signed curr_yr,curr_mo,curr_di,curr_wk;
auto signed i,l,n,r;
auto signed short for_months;
auto signed short flag;

/* **** CODE/TEXT */
AND(flag,0x00);

path = (0x00);
if(0x02<(argc)) {
r = cmpr_parts(&i,*(argv+(0x01)),"l");
if(!i) path = (*(argv+(0x02)));
}

if(0x01<(argc)) {
r = cmpr_parts(&i,*(argv+(0x01)),"n");
if(!i) OR(flag,CALS_NONLOADING);
}

if(0x01<(argc)) {
r = cmpr_parts(&i,*(argv+(0x01)),"v");
if(!i) OR(flag,CALS_VERBOSE);
}

if(0x01<(argc)) {
r = cmpr_parts(&i,*(argv+(0x01)),"h");
if(!i) {
r = cals_help();
return(0x01);
}}

if(0x01<(argc)) {
r = cmpr_parts(&i,*(argv+(0x01)),"e");
if(!i) {
r = cals_init_event(&event);
if(!r) {
printf("%s \n","<< Error at fn. cals_init_event()");
return(0x00);
}
if(CALS_VERBOSE&(flag)) OR(R(flag,event),CALS_VERBOSE);
r = cals_entry(argv,&event);
if(!r) {
printf("%s \n","<< Error at fn. cals_entry()");
return(0x00);
}
return(0x01);
}}

for_months = (FOR_MONTHS);
if(0x01<(argc)) {
b = (*(argv+(argc+(~0x00))));
r = cv_da(0x0A,&i,b);
if(!r) return(0x00);
if(!i) i = (FOR_MONTHS);
// if(i<(0x00)) i = (0x01+(~i));
for_months = (i);
}

r = cals_init(&cs);
if(!r) return(0x00);

r = cals_allocate_for_today(&cs);
if(!r) return(0x00);

// also
OR(R(flag,cs),flag);

if(!(CALS_NONLOADING&(flag))) {
r = cals_load_events(path,&cs);
if(!r) {
printf("%s \n","<< Error at fn. cals_load_events()");
return(0x00);
}
r = cals_cache_upcoming_events(R(t,R(today,cs)),&ev,&(R(roll,cs)));
if(!r) {
printf("%s \n","<< Error at fn. cals_cache_upcoming_events()");
return(0x00);
}}

time(&t);
tp = localtime(&t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}

if(DBG) {
printf("%s %p \n","tp is:",tp);
printf("%s %lld %s %llXh \n","t is:",t,"or",t);
}

curr_t = (t);

/*
curr_yr = (1900+(R(tm_year,*tp)));
curr_mo = (R(tm_mon,*tp));
curr_di = (R(tm_mday,*tp));
curr_wk = (R(tm_wday,*tp));
curr_hr = (R(tm_hour,*tp));
curr_mn = (R(tm_min,*tp));
curr_sm = (R(tm_sec,*tp));
//*/

/* check for calendar week 1
r = cals_retrieve_week1(*(THEFIRST+(R(day,cs))),*(THEFIRST+(R(month,cs))),&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. cals_retrieve_week1()");
return(0x00);
}
*(CLI_BASE+(R(wk1,cs))) = (t);
//*/

if(CALS_VERBOSE&(flag)) {
// calendar week for today,
printf("\n");
r = ct_weeks(*(CLI_BASE+(R(wk1,cs))),curr_t);
if(!r) return(0x00);
printf("\t%s %d %s, \n","CW",r,"for today");
// and update the tp for today,
tp = localtime(&curr_t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
printf("\t%s %d %s %d, ",*(DAYOFTHEWEEK+(R(tm_wday,*tp))),R(tm_mday,*tp),*(MONTH+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");
}
else printf("\n");

// Upcoming events
if(!ev) printf("%s \n","No event today or tomorrow");
else {
printf("\t%s, \n","Upcoming");
printf("\t%2d:%02d ",*(CALS_HR+(R(time,*ev))),*(CALS_MN+(R(time,*ev))));
printf("%s %s %d, %d, ","on",*(MONTH+(*(CALS_MO+(R(date,*ev))))),*(CALS_DI+(R(date,*ev))),*(CALS_YR+(R(date,*ev))));
printf("%s \n",R(b,*ev));
}

printf("\n");

if(CALS_VERBOSE&(flag)) {
// calendar week 1 of the year,
printf("\t%s, \n","Calendar week 1 of the year");
// update the tp for CW 1 of the year,
tp = localtime(CLI_BASE+(R(wk1,cs)));
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
printf("\t%s %d %s %d, ",*(DAYOFTHEWEEK+(R(tm_wday,*tp))),R(tm_mday,*tp),*(MONTH+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");
}

//* backward i.e., *(CLI_BASE+(R(wk1/t, to be changed after going backward for months
if(for_months<(0x00)) {
r = cals_backward(for_months,&cs);
if(!r) {
printf("%s \n","<< Error at fn. cals_backward()");
return(0x00);
}
if(CALS_VERBOSE&(flag)) {
//* check at calendar week 1 after going backward..
tp = localtime(CLI_BASE+(R(wk1,cs)));
if(!tp) return(0x00);
printf("\t%s, \n","CW 1 (after going backward)");
printf("\t[ %s %d %s %d, ",*(DAYOFTHEWEEK+(R(tm_wday,*tp))),R(tm_mday,*tp),*(MONTH+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s ",R(tm_yday,*tp),"days since January 1");
printf("] \n");
printf("\n");
}}
else r = (for_months);

if(r<(0x00)) r = (0x01+(~r));

r = cals_r(r,&cs);
if(!r) return(0x00);

if(CALS_VERBOSE&(flag)) {
printf("\n");
printf("\t%d %s \n",r,"weeks displayed");
}

if(DBG) {
AND(i,0x00);
ev = (*(CLI_LEAD+(R(event,R(roll,cs)))));
while(ev) {
if(!(CALS_INVALID&(R(flag,*ev)))) {
OR(i,0x01);
printf("\n");
printf("%s %d, %d ",*(MONTH+(*(CALS_MO+(R(date,*ev))))),*(CALS_DI+(R(date,*ev))),*(CALS_YR+(R(date,*ev))));
printf("%s %02d:%02d ","at",*(CALS_HR+(R(time,*ev))),*(CALS_MN+(R(time,*ev))));
printf("%s ",R(b,*ev));
}
ev = (R(s,*ev));
}
if(i) printf("\n");
}

if(CALS_LOADED&(R(flag,cs))) {
r = cals_unbind_events(&(R(roll,cs)));
if(!r) {
printf("%s \n","<< Error at fn. cals_unbind_events()");
return(0x00);
}}

r = cals_release_for_today(&cs);
if(!r) {
printf("%s \n","<< Error at fn. cals_release_for_today()");
return(0x00);
}

return(0x01);
}
