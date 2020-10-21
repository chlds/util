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
auto time_t tt,t;
auto time_t curr_t;
auto time_t curr_w1_t;
auto time_t prev_w1_t;
auto signed curr_hr,curr_mn,curr_sm;
auto signed curr_y,curr_m,curr_d,curr_w;
auto signed mm,m;
auto signed w;
auto signed d,h;
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


// check calendar week 1
h = (60*(60));
d = (24*(h));
w = (7*(d));
/* e.g., to debug
n = (0x02); // e.g., in two months
m = (n*(5*(w)));
t = (m+(t));
//*/

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
curr_w1_t = (t);

//* to debug
r = ct_weeks(curr_w1_t,curr_t);
printf("\t%s %d \n","Current CW:",r);
//*/

tp = localtime(&t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}

printf("\n");
printf("\t%s \n","Calendar week 1 of the year:");
printf("\t%s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");


// calendar
tt = (curr_t);
mm = (curr_m);
m = (mm);
--mm;

r = find_a_first_week(*day,&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_week()");
return(0x00);
}


//* backward
if(months<(0x00)) {
months = (0x01+(~months));
i = (months);
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
r = find_a_first_month(*mon,&prev_w1_t,t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_month()");
return(0x00);
}
tp = localtime(&prev_w1_t);
if(!tp) return(0x00);
// if a week starts with Monday,
if(0x04<(R(tm_mday,*tp))) prev_w1_t = (prev_w1_t+(-0x01*(d*(WEEK))));
curr_w1_t = (prev_w1_t);
}}}
//*/


//* check at calendar week 1 after going backward..
tp = localtime(&curr_w1_t);
if(!tp) return(0x00);
printf("\n");
printf("\t%s \n","Check at CW 1 (after going backward):");
printf("\t[ %s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s ",R(tm_yday,*tp),"days since January 1");
printf("] \n");
// ..also re-update the tp for (t).
tp = localtime(&t);
if(!tp) return(0x00);
//*/


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
printf("________________________________________________%s %d \n",*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));

//* nearby
if(!(curr_y^(1900+(R(tm_year,*tp))))) {
if(!(curr_m^(mm))) {
if(curr_d<(R(tm_mday,*tp))) {
// today 1/2
printf(" %2d %s ",curr_d,*(dayofthewk+(curr_w)));
printf("%2d:%02d ",curr_hr,curr_mn);
printf("  ");
printf("-------------------------------- ");
printf("\n");
}}}
//*/

mois = (*mon);
if(!(mois^(R(tm_mon,*tp)))) curr_w1_t = (t);

}
//
printf("\t%s %d, ","CW",ct_weeks(curr_w1_t,t));
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
printf(" %2d %s ",curr_d,*(dayofthewk+(curr_w)));
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
