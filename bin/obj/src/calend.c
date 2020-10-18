/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define C_CODE_STDS
# define CALEND
# define CAR

# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
enum {
SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,DAYS,
};

auto signed WEEK = (0x07);

auto struct tm *tp;
auto time_t tt,t;
auto time_t curr_t;
auto signed curr_hr,curr_mn,curr_sm;
auto signed curr_y,curr_m,curr_d,curr_w;
auto signed mm,m;
auto signed w;
auto signed d,h;
auto signed i,l,n,r;
auto signed short months,day;
auto signed short flag;
auto signed char *b;

/* **** CODE/TEXT */
months = (0x04);
if(0x01<(argc)) {
b = (*(argv+(argc+(~0x00))));
r = cv_da(0x0A,&i,b);
if(!r) return(0x00);
if(i<(0x00)) i = (0x01+(~i));
months = (i);
}

day = (SUNDAY);

h = (60*(60));
d = (24*(h));

time(&t);
tp = localtime(&t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}

curr_t = (t);
curr_y = (1900+(R(tm_year,*tp)));
curr_m = (R(tm_mon,*tp));
curr_d = (R(tm_mday,*tp));
curr_w = (R(tm_wday,*tp));
curr_hr = (R(tm_hour,*tp));
curr_mn = (R(tm_min,*tp));
curr_sm = (R(tm_sec,*tp));

if(DBG) {
printf("%s %p \n","tp is:",tp);
printf("%s %lld %s %llXh \n","t is:",t,"or",t);
}

// today
printf("\n");
printf("\t%s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");


// Calendar Week 1
/* e.g., to debug
h = (60*(60));
d = (24*(h));
w = (7*(d));
n = (0x02); // e.g., in two months
m = (n*(5*(w)));
t = (m+(t));
//*/

r = find_a_first_month(0x00/* January */,&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_month()");
return(0x00);
}

r = find_a_first_week(day,&t,t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_week()");
return(0x00);
}

tp = localtime(&t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}

printf("\t%s \n","CW 1:");
printf("\t%s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");


// Calendar
tt = (curr_t);
mm = (curr_m);
m = (mm);
--mm;

r = find_a_first_week(day,&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_week()");
return(0x00);
}

l = (0x01+(months));
while(0x01) {
flag = (0x00);
tp = localtime(&t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
//
m = (R(tm_mon,*tp));
if(mm^(m)) {
if(!(--l)) break;
mm = (m);
printf("\t________________________________%s %d \n",*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));

//* nearby
if(!(curr_y^(1900+(R(tm_year,*tp))))) {
if(!(curr_m^(mm))) {
if(curr_d<(R(tm_mday,*tp))) {
// today 1/2
printf("\t%d %s ",curr_d,*(dayofthewk+(curr_w)));
printf("%d:%02d:%02d \n",curr_hr,curr_mn,curr_sm);
}}}
//*/

}
//
printf("\t%s %d - ",*(month+(R(tm_mon,*tp))),R(tm_mday,*tp));
//
if(!(t^(tt))) OR(flag,FIRST_B);
if(t<(tt)) OR(flag,FIRST_B);
//
ADD(t,d*(-0x01+(WEEK)));
tp = localtime(&t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
printf("%d \n",R(tm_mday,*tp));
//
if(flag) {
if(tt<(t)) OR(flag,SECOND_B);
if(!(tt^(t))) OR(flag,SECOND_B);
if(SECOND_B<(flag)) {
// today 2/2
printf("\t%d %s ",curr_d,*(dayofthewk+(curr_w)));
printf("%d:%02d:%02d \n",curr_hr,curr_mn,curr_sm);
}}
//
ADD(t,d);
}

return(0x01);
}
