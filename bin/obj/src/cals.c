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
JANUARY,FEBRUARY,MARCH,APRIL,MAY,JUNE,JULY,AUGUST,SEPTEMBER,OCTOBER,NOVEMBER,DECEMBER,MONTHS,
};

enum {
SUNDAY,MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,DAYS,
};

enum {
THEFIRST,THELAST,
};

auto signed WEEK = (0x07);

auto signed short day[0x02];
auto signed short mon[0x02];
auto struct tm *tp;

auto time_t wk1[COMMON_OBJS];
auto time_t curr_wk1;
auto time_t curr_t;
auto time_t tt,t;
auto signed curr_hr,curr_mn,curr_sm;
auto signed curr_yr,curr_mo,curr_di,curr_wk;
auto signed mm,m;
auto signed w,d,h;
auto signed i,l,n,r;
auto signed short months;
auto signed short jour,mois;
auto signed short flag;
auto signed char *b;

/* **** CODE/TEXT */
months = (0x04);
if(0x01<(argc)) {
b = (*(argv+(argc+(~0x00))));
r = cv_da(0x0A,&i,b);
if(!r) return(0x00);
// if(i<(0x00)) i = (0x01+(~i));
months = (i);
}


*(day+(THEFIRST)) = (MONDAY);
*(mon+(THEFIRST)) = (JANUARY);
mois = (-0x01+(*mon));
if(mois<(0x00)) mois = (-0x01+(MONTHS));
*(mon+(THELAST)) = (mois);
jour = (-0x01+(*day));
if(jour<(0x00)) jour = (-0x01+(DAYS));
*(day+(THELAST)) = (jour);


h = (60*(60));
d = (24*(h));
w = (7*(d));

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
curr_yr = (1900+(R(tm_year,*tp)));
curr_mo = (R(tm_mon,*tp));
curr_di = (R(tm_mday,*tp));
curr_wk = (R(tm_wday,*tp));
curr_hr = (R(tm_hour,*tp));
curr_mn = (R(tm_min,*tp));
curr_sm = (R(tm_sec,*tp));


// check calendar week 1
r = find_a_first_month(*mon,&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_month()");
return(0x00);
}

r = find_a_first_week(*day,&t,t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_week()");
return(0x00);
}

tp = localtime(&t);
if(!tp) return(0x00);

// if a week starts with Monday,
if(0x04<(R(tm_mday,*tp))) t = (t+(-0x01*(d*(WEEK))));
*(CLI_INDEX+(wk1)) = (t);

// calendar week for today,
printf("\n");
r = ct_weeks(*(CLI_INDEX+(wk1)),curr_t);
printf("\t%s %d %s, \n","CW",r,"for today");
// and update the tp for today,
tp = localtime(&curr_t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
printf("\t%s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");


// calendar week 1 of the year,
printf("\t%s, \n","Calendar week 1 of the year");
// update the tp for CW 1 of the year,
tp = localtime(CLI_INDEX+(wk1));
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
printf("\t%s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");


// calendar
tt = (curr_t);
mm = (curr_mo);
m = (mm);
--mm;

r = find_a_first_week(*day,&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_week()");
return(0x00);
}


//* backward
l = (0x00);
if(months<(0x00)) {
months = (0x01+(~months));
i = (months);
l++;
while(i) {
--i;
--mm;
t = (t+(0x01+(~(0x03*(w))))); // subtract second minutes in three weeks out of a first day of the first week
r = find_a_first_week(*day,&t,t);
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
mois = (*(mon+(THELAST)));
if(!(mois^(R(tm_mon,*tp)))) {
r = find_a_first_month(*mon,CLI_OFFSET+(wk1),t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_month()");
return(0x00);
}
tp = localtime(CLI_OFFSET+(wk1));
if(!tp) return(0x00);
// if a week starts with Monday,
if(0x04<(R(tm_mday,*tp))) ADD(*(CLI_OFFSET+(wk1)),(-0x01*(d*(WEEK))));
*(CLI_INDEX+(wk1)) = (*(CLI_OFFSET+(wk1)));
}}}
//*/


//* check at calendar week 1 after going backward..
if(l) {
tp = localtime(CLI_INDEX+(wk1));
if(!tp) return(0x00);
printf("\t%s, \n","CW 1 (after going backward)");
printf("\t[ %s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s ",R(tm_yday,*tp),"days since January 1");
printf("] \n");
printf("\n");
}
//*/


*(CLI_OFFSET+(wk1)) = (*(CLI_INDEX+(wk1)));
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

mois = (*(mon+(THELAST)));
if(!(mois^(m))) {
*(CLI_LEAD+(wk1)) = (t+(d*(-0x01+(WEEK))));
tp = localtime(CLI_LEAD+(wk1));
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
mois = (*(mon+(THEFIRST)));
if(!(mois^(R(tm_mon,*tp)))) {
// if a week starts with Monday,
if(0x03<(R(tm_mday,*tp))) *(CLI_INDEX+(wk1)) = (t);
}}
// also re-update the tp for t.
tp = localtime(&t);
if(!tp) return(0x00);

if(mm^(m)) {
if(!(--l)) break;
mm = (m);
printf("________________________________________________%s %d \n",*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));

//* nearby
if(!(curr_yr^(1900+(R(tm_year,*tp))))) {
if(!(curr_mo^(mm))) {
if(curr_di<(R(tm_mday,*tp))) {
// today 1/2
printf(" %2d %s ",curr_di,*(dayofthewk+(curr_wk)));
printf("%2d:%02d ",curr_hr,curr_mn);
printf("  ");
printf("-------------------------------- ");
printf("\n");
}}}
//*/

mois = (*mon);
if(!(mois^(R(tm_mon,*tp)))) {
curr_wk1 = (*(CLI_INDEX+(wk1)));
if(!(curr_wk1^(*(CLI_OFFSET+(wk1))))) *(CLI_INDEX+(wk1)) = (t);
*(CLI_OFFSET+(wk1)) = (*(CLI_INDEX+(wk1)));
}}

printf("\t%s %d, ","CW",ct_weeks(*(CLI_INDEX+(wk1)),t));
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
//
if(m^(R(tm_mon,*tp))) printf("%s %d \n",*(month+(R(tm_mon,*tp))),R(tm_mday,*tp));
else printf("%d \n",R(tm_mday,*tp));
//
if(flag) {
if(tt<(t)) OR(flag,SECOND_B);
if(!(tt^(t))) OR(flag,SECOND_B);
if(SECOND_B<(flag)) {
// today 2/2
printf(" %2d %s ",curr_di,*(dayofthewk+(curr_wk)));
printf("%2d:%02d ",curr_hr,curr_mn);
printf("  ");
printf("-------------------------------- ");
printf("\n");
}}
//
ADD(t,d);
}

return(0x01);
}
