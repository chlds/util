/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed COL_R = (0x38);
auto signed WEEK = (0x07);

auto struct tm *tp;
auto signed short *w;
auto signed char *b;
auto cals_stat_t cs;
auto time_t curr_wk1;
auto time_t curr_t;
auto time_t tt,t;
auto signed curr_hr,curr_mn,curr_sm;
auto signed curr_yr,curr_mo,curr_di,curr_wk;
auto signed mm,m;
auto signed wk,di,hr;
auto signed i,l,n,r;
auto signed short months;
auto signed short jour,mois;
auto signed short flag;

/* **** CODE/TEXT */
months = (0x04);
if(0x01<(argc)) {
b = (*(argv+(argc+(~0x00))));
r = cv_da(0x0A,&i,b);
if(!r) return(0x00);
// if(i<(0x00)) i = (0x01+(~i));
months = (i);
}

r = cals_stat_init(&cs);
if(!r) return(0x00);

hr = (60*(60));
di = (24*(hr));
wk = (7*(di));

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


/* check calendar week 1
r = cals_retrieve_week1(*(THEFIRST+(R(day,cs))),*(THEFIRST+(R(month,cs))),&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. cals_retrieve_week1()");
return(0x00);
}
*(CLI_BASE+(R(wk1,cs))) = (t);
//*/

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
printf("\t%s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
printf("\n");

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

r = find_a_first_week(*(THEFIRST+(R(day,cs))),&t,curr_t);
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_week()");
return(0x00);
}

//* backward
if(months<(0x00)) {
r = cals_backward(months,&cs);
if(!r) {
printf("%s \n","<< Error at fn. cals_backward()");
return(0x00);
}
else {
//* check at calendar week 1 after going backward..
tp = localtime(CLI_BASE+(R(wk1,cs)));
if(!tp) return(0x00);
printf("\t%s, \n","CW 1 (after going backward)");
printf("\t[ %s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s %d, ","Daylight Savings Time",R(tm_isdst,*tp));
printf("%d %s ",R(tm_yday,*tp),"days since January 1");
printf("] \n");
printf("\n");
}
// *(CLI_BASE+(R(wk1/t, changed after going backward for months
*(CLI_OFFSET+(R(wk1,cs))) = (*(CLI_BASE+(R(wk1,cs))));
*(CLI_INDEX+(R(wk1,cs))) = (*(CLI_OFFSET+(R(wk1,cs))));
t = (*(CLI_BASE+(R(t,cs))));
}
else r = (months);

if(r<(0x00)) r = (0x01+(~r));
l = (0x01+(r));
mm = (0x00);

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

mois = (*(THELAST+(R(month,cs))));
if(!(mois^(m))) {
*(CLI_LEAD+(R(wk1,cs))) = (t+(di*(-0x01+(WEEK))));
tp = localtime(CLI_LEAD+(R(wk1,cs)));
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
mois = (*(THEFIRST+(R(month,cs))));
if(!(mois^(R(tm_mon,*tp)))) {
// if a week starts with Monday,
if(0x03<(R(tm_mday,*tp))) *(CLI_INDEX+(R(wk1,cs))) = (t);
}}
// also re-update the tp for t.
tp = localtime(&t);
if(!tp) return(0x00);

if(mm^(m)) {
if(!(--l)) break;
mm = (m);

r = sub_da(COL_R,*(month+(R(tm_mon,*tp))));
r++;
while(--r) printf("_");
printf("%s %d \n",*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));

//* nearby
if(!(curr_yr^(1900+(R(tm_year,*tp))))) {
if(!(curr_mo^(mm))) {
if(curr_di<(R(tm_mday,*tp))) {
// today 1/2
printf(" %2d %s ",curr_di,*(dayofthewk+(curr_wk)));
printf("%2d:%02d ",curr_hr,curr_mn);
printf("  ");
r = (-16+(5+(COL_R)));
if(r<(0x00)) return(0x00);
r++;
while(--r) printf("-");
printf("\n");
}}}
//*/

mois = (*(THEFIRST+(R(month,cs))));
if(!(mois^(R(tm_mon,*tp)))) {
curr_wk1 = (*(CLI_INDEX+(R(wk1,cs))));
if(!(curr_wk1^(*(CLI_OFFSET+(R(wk1,cs)))))) *(CLI_INDEX+(R(wk1,cs))) = (t);
*(CLI_OFFSET+(R(wk1,cs))) = (*(CLI_INDEX+(R(wk1,cs))));
}}

printf("\t%s %d, ","CW",ct_weeks(*(CLI_INDEX+(R(wk1,cs))),t));
printf("\t%s %d - ",*(month+(R(tm_mon,*tp))),R(tm_mday,*tp));
//
if(!(t^(tt))) OR(flag,FIRST_B);
if(t<(tt)) OR(flag,FIRST_B);
//
ADD(t,di*(-0x01+(WEEK)));
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
r = (-16+(5+(COL_R)));
if(r<(0x00)) return(0x00);
r++;
while(--r) printf("-");
printf("\n");
}}
//
ADD(t,di);
}

return(0x01);
}
