/* **** Notes

Go for months
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_r_r(signed short(mo),signed(arg),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed COL_R = (0x38);
auto signed WEEK = (0x07);

auto struct tm *tp;
auto signed short *w;
auto signed char *b;
auto time_t curr_wk1;
auto time_t curr_t;
auto time_t t;
auto time_t hr;
auto time_t di;
auto time_t wk;
auto signed i,r;
auto signed short curr_yr;
auto signed short curr_mo;
auto signed short curr_di;
auto signed short curr_wk;
auto signed short day;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!arg) return(0x00);

flag = (0x00);

hr = (60*(60));
di = (24*(hr));
wk = (7*(di));

t = (*(CLI_INDEX+(R(t,*argp))));

tp = localtime(&t);
if(!tp) return(0x00);

curr_yr = (1900+(R(tm_year,*tp)));
curr_mo = (R(tm_mon,*tp));
curr_di = (R(tm_mday,*tp));
curr_t = (t);

if(!(curr_mo^(*(THELAST+(R(month,*argp)))))) {
t = (curr_t+(di*(-0x01+(WEEK))));
tp = localtime(&t);
if(!tp) return(0x00);
curr_mo = (R(tm_mon,*tp));
if(!(curr_mo^(*(THEFIRST+(R(month,*argp)))))) {
// if a week starts with Monday,
if(0x03<(R(tm_mday,*tp))) *(CLI_INDEX+(R(wk1,*argp))) = (curr_t);
}}

// also re-update the tp for curr_t.
tp = localtime(&curr_t);
if(!tp) return(0x00);

curr_mo = (R(tm_mon,*tp));

if(curr_mo^(mo)) {
if(!(--arg)) return(0x00);
mo = (curr_mo);
r = sub_da(COL_R,*(MONTH+(R(tm_mon,*tp))));
r++;
while(--r) printf("_");
printf("%s %d \n",*(MONTH+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
//* nearby
if(!(curr_yr^(*(CALS_YR+(R(date,R(today,*argp))))))) {
if(!(curr_mo^(*(CALS_MO+(R(date,R(today,*argp))))))) {
day = (*(CALS_DI+(R(date,R(today,*argp)))));
if(day<(curr_di)) {
// today 1/2
printf(" %2d %s ",day,*(CAPS_DAYOFTHEWK+(*(CALS_WK+(R(date,R(today,*argp)))))));
printf("%2d:%02d ",*(CALS_HR+(R(time,R(today,*argp)))),*(CALS_MN+(R(time,R(today,*argp)))));
printf("  ");
r = (-16+(5+(COL_R)));
if(r<(0x00)) return(0x00);
r++;
while(--r) printf("-");
printf("\n");
}}}
//*/
if(!(curr_mo^(*(THEFIRST+(R(month,*argp)))))) {
curr_wk1 = (*(CLI_INDEX+(R(wk1,*argp))));
if(!(curr_wk1^(*(CLI_OFFSET+(R(wk1,*argp)))))) *(CLI_INDEX+(R(wk1,*argp))) = (curr_t);
*(CLI_OFFSET+(R(wk1,*argp))) = (*(CLI_INDEX+(R(wk1,*argp))));
}}

printf("\t%s %d, ","CW",ct_weeks(*(CLI_INDEX+(R(wk1,*argp))),curr_t));
printf("\t%s %d - ",*(MONTH+(R(tm_mon,*tp))),R(tm_mday,*tp));
//
t = (R(t,R(today,*argp)));
if(!(curr_t^(t))) OR(flag,FIRST_B);
if(curr_t<(t)) OR(flag,FIRST_B);
ADD(curr_t,di*(-0x01+(WEEK)));
tp = localtime(&curr_t);
if(!tp) return(0x00);
if(curr_mo^(R(tm_mon,*tp))) printf("%s %d \n",*(MONTH+(R(tm_mon,*tp))),R(tm_mday,*tp));
else printf("%d \n",R(tm_mday,*tp));
//
if(flag) {
if(t<(curr_t)) OR(flag,SECOND_B);
if(!(t^(curr_t))) OR(flag,SECOND_B);
if(SECOND_B<(flag)) {
// today 2/2
printf(" %2d %s ",*(CALS_DI+(R(date,R(today,*argp)))),*(CAPS_DAYOFTHEWK+(*(CALS_WK+(R(date,R(today,*argp)))))));
printf("%2d:%02d ",*(CALS_HR+(R(time,R(today,*argp)))),*(CALS_MN+(R(time,R(today,*argp)))));
printf("  ");
r = (-16+(5+(COL_R)));
if(r<(0x00)) return(0x00);
r++;
while(--r) printf("-");
printf("\n");
}}

ADD(curr_t,di);
*(CLI_INDEX+(R(t,*argp))) = (curr_t);

return(0x01+(cals_r_r(mo,arg,argp)));
}
