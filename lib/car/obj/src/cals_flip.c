/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define CALEND
# define CAR
# include <errno.h>
# include <string.h>
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl cals_flip(signed(arg/* months */),signed char(*path),cals_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;
auto signed char *b;
auto cals_roll_t roll;
auto cals_event_t event;
auto time_t curr_wk1;
auto time_t curr_t;
auto time_t t;
auto signed curr_hr,curr_mn,curr_sm;
auto signed curr_yr,curr_mo,curr_di,curr_wk;
auto signed i,l,n,r;
auto signed short flag;
auto signed UPCOMING_DAYS = (0x03);

// if(!path) return(0x00);
if(!argp) return(0x00);

if(CALS_QUIT&(R(flag,*argp))) {
if(CALS_ERROR&(R(flag,*argp))) return(0x00);
return(0x01);
}

if(!(CALS_NONLOADING&(R(flag,*argp)))) {
r = cals_load_events(path,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_load_events()");
return(0x00);
}
//*
if(CALS_BOUND&(R(flag,R(roll,*argp)))) {
r = cals_upcoming_events(UPCOMING_DAYS,R(t,R(today,*argp)),&(R(roll,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cals_upcoming_events()");
return(0x00);
}}
//*/
}

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
r = cv_wk_yr(*(THEFIRST+(R(day,*argp))),*(THEFIRST+(R(month,*argp))),&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. cv_wk_yr()");
return(0x00);
}
*(CLI_BASE+(R(wk1,*argp))) = (t);
//*/

printf("\n");
if(CALS_VERBOSE&(R(flag,*argp))) {
// calendar week for today,
r = ct_weeks(*(CLI_BASE+(R(wk1,*argp))),curr_t);
if(!r) return(0x00);
printf(" %s %d %s, \n","CW",r,"for today");
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

if(CALS_VERBOSE&(R(flag,*argp))) {
// calendar week 1 of the year,
printf(" %s, \n","Calendar week 1 of the year");
// update the tp for CW 1 of the year,
tp = localtime(CLI_BASE+(R(wk1,*argp)));
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

r = (arg); // for months
//* backward i.e., *(CLI_BASE+(R(wk1/t, to be changed after going backward for months
if(r<(0x00)) {
r = cals_backward(r,argp);
if(!r) {
printf("%s \n","<< Error at fn. cals_backward()");
return(0x00);
}
if(CALS_VERBOSE&(R(flag,*argp))) {
//* check at calendar week 1 after going backward..
tp = localtime(CLI_BASE+(R(wk1,*argp)));
if(!tp) return(0x00);
printf(" %s, \n","CW 1 (after going backward)");
printf("\t%s %d %s %d, ",*(DAYOFTHEWEEK+(R(tm_wday,*tp))),R(tm_mday,*tp),*(MONTH+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");
}}

if(r<(0x00)) r = (0x01+(~r));

r = cals_opt(r,argp);
// if(!r) return(0x00);
if(!r) printf("%s \n","<< Error at fn. cals_opt()");

if(CALS_VERBOSE&(R(flag,*argp))) {
printf("\n");
printf("\t%s %d %s \n","about",r,"weeks displayed");
}

if(DBG) {
printf("\n");
printf("[%s] \n","DBG");
AND(i,0x00);
ev = (*(CLI_LEAD+(R(event,R(roll,*argp)))));
while(ev) {
if(!(CALS_INVALID&(R(flag,*ev)))) {
OR(i,0x01);
printf("%s %d, %d ",*(MONTH+(*(CALS_MO+(R(date,*ev))))),*(CALS_DI+(R(date,*ev))),*(CALS_YR+(R(date,*ev))));
printf("%s %02d:%02d ","at",*(CALS_HR+(R(time,*ev))),*(CALS_MN+(R(time,*ev))));
printf("(%Xh) ",R(flag,*ev));
if(!(cli_outs(R(b,*ev)))) {
printf("%s \n","<< Oops..");
break;
}
printf("\n");
}
ev = (*(CLI_SI+(R(event,*ev))));
}}

return(r);
}
