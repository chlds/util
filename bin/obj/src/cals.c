/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "./../../../lib/incl/config.h"

signed(__cdecl wmain(signed(argc),signed short(**argv),signed short(**envp))) {

/* **** DATA, BSS and STACK */
auto signed UPCOMING_DAYS = (0x03);
auto signed FOR_MONTHS = (0x04);

auto signed(__cdecl *(fn[])) (cals_t(*argp)) = {
(signed(__cdecl*) (cals_t(*))) (cals_flag_e),
(signed(__cdecl*) (cals_t(*))) (cals_flag_h),
(signed(__cdecl*) (cals_t(*))) (cals_flag_n),
(signed(__cdecl*) (cals_t(*))) (cals_flag_v),
(signed(__cdecl*) (cals_t(*))) (0x00),
};

auto signed char *(fl[]) = {
"e","h","n","v",0x00,
};

auto signed char **v;

auto cals_event_t *ev;
auto struct tm *tp;
auto signed short *w;
auto signed char *b;

auto signed char *path;
auto signed short *path_w;

auto cals_t cs;
auto cals_roll_t roll;
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
r = cals_init(&cs);
if(!r) return(0x00);

r = cv_argv_bw(&v,argv);
if(!r) return(0x00);

*(CLI_BASE+(R(argv,R(property,cs)))) = (v);
*(CLI_BASE+(R(argv_w,R(property,cs)))) = (argv);

AND(flag,0x00);

path = (0x00);
path_w = (0x00);
if(0x02<(argc)) {
r = cmpr_parts(&i,*(v+(0x01)),"l");
if(!i) {
path_w = (*(argv+(0x02)));
path = (*(v+(0x02)));
}}

if(0x01<(argc)) {
l = ct_f(fn);
while(l) {
r = cmpr_parts(&i,*(v+(0x01)),*(--l+(fl)));
if(!i) {
r = (*(l+(fn))) (&cs);
if(!r) {
printf("%s (*(%d+(%s))) () \n","<< Error at fn.",l,"fn");
r = rl_argv(&v);
if(!r) printf("%s \n","<< Error at fn. rl_argv()");
v = (0x00);
return(0x00);
}}}}

if(CALS_QUIT&(R(flag,cs))) {
r = rl_argv(&v);
if(!r) {
printf("%s \n","<< Error at fn. rl_argv()");
return(0x00);
}
v = (0x00);
return(0x01);
}

for_months = (FOR_MONTHS);
if(0x01<(argc)) {
b = (*(v+(argc+(~0x00))));
r = cv_da(0x0A,&i,b);
if(!r) return(0x00);
if(!i) i = (FOR_MONTHS);
// if(i<(0x00)) i = (0x01+(~i));
for_months = (i);
}
// also
if(0x04<(argc)) for_months = (FOR_MONTHS);

if(!(CALS_NONLOADING&(R(flag,cs)))) {
r = cals_load_events(path,&cs);
if(!r) {
printf("%s \n","<< Error at fn. cals_load_events()");
return(0x00);
}
//*
if(CALS_BOUND&(R(flag,R(roll,cs)))) {
r = cals_upcoming_events(UPCOMING_DAYS,R(t,R(today,cs)),&(R(roll,cs)));
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
r = cals_retrieve_week1(*(THEFIRST+(R(day,cs))),*(THEFIRST+(R(month,cs))),&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. cals_retrieve_week1()");
return(0x00);
}
*(CLI_BASE+(R(wk1,cs))) = (t);
//*/

if(CALS_VERBOSE&(R(flag,cs))) {
// calendar week for today,
printf("\n");
r = ct_weeks(*(CLI_BASE+(R(wk1,cs))),curr_t);
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
else printf("\n");

if(CALS_VERBOSE&(R(flag,cs))) {
// calendar week 1 of the year,
printf(" %s, \n","Calendar week 1 of the year");
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
if(CALS_VERBOSE&(R(flag,cs))) {
//* check at calendar week 1 after going backward..
tp = localtime(CLI_BASE+(R(wk1,cs)));
if(!tp) return(0x00);
printf(" %s, \n","CW 1 (after going backward)");
printf("\t%s %d %s %d, ",*(DAYOFTHEWEEK+(R(tm_wday,*tp))),R(tm_mday,*tp),*(MONTH+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");
}}
else r = (for_months);

if(r<(0x00)) r = (0x01+(~r));

r = cals_opt(r,&cs);
// if(!r) return(0x00);
if(!r) printf("%s \n","<< Error at fn. cals_opt()");

if(CALS_VERBOSE&(R(flag,cs))) {
printf("\n");
printf("\t%s %d %s \n","about",r,"weeks displayed");
}

if(DBG) {
printf("\n");
printf("[%s] \n","DBG");
AND(i,0x00);
ev = (*(CLI_LEAD+(R(event,R(roll,cs)))));
while(ev) {
if(!(CALS_INVALID&(R(flag,*ev)))) {
OR(i,0x01);
printf("%s %d, %d ",*(MONTH+(*(CALS_MO+(R(date,*ev))))),*(CALS_DI+(R(date,*ev))),*(CALS_YR+(R(date,*ev))));
printf("%s %02d:%02d ","at",*(CALS_HR+(R(time,*ev))),*(CALS_MN+(R(time,*ev))));
printf("(%Xh) ",R(flag,*ev));
r = cli_outs(R(b,*ev));
if(!r) {
printf("%s \n","<< Oops..");
break;
}
printf("\n");
}
ev = (R(s,*ev));
}}

if(CALS_BOUND&(R(flag,R(roll,cs)))) {
r = cals_unbind_events(&(R(roll,cs)));
if(!r) {
printf("%s \n","<< Error at fn. cals_unbind_events()");
return(0x00);
}}

r = rl_argv(&v);
if(!r) {
printf("%s \n","<< Error at fn. rl_argv()");
return(0x00);
}

v = (0x00);
*(CLI_BASE+(R(argv,R(property,cs)))) = (v);
*(CLI_BASE+(R(argv_w,R(property,cs)))) = (0x00);

return(0x01);
}
