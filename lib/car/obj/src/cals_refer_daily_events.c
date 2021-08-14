/* **** Notes

Refer

Remarks:
Refer at fn. cals_refer_events_internal.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_daily_events(signed short(arg),cals_event_t(*cache),cals_t(*argp))) {

auto struct tm *tp;
auto time_t t,tt;
auto signed dif;
auto signed i,r;
auto signed short wk,di,mo,yr;
auto signed short week,day,mon,year;
auto signed short flag;

if(!cache) return(0x00);
if(!argp) return(0x00);

tt = (*(CLI_INDEX+(R(t,*argp))));
tp = localtime(&tt);
if(!tp) return(0x00);

AND(flag,0x00);
day = (R(tm_mday,*tp));
if(!arg) {
--day;
tt = (tt+(0x01+(~(24*(60*(60))))));
OR(flag,0x01);
}
if(!flag) {
if(!(day<(DAYS))) day = (DAYS);
else {
day = (DAYS+(0x01+(~day)));
OR(R(flag,*cache),CALS_EOM);
}}

if(CALS_EOM&(R(flag,*cache))) {
dif = (day);
--dif;
tt = (*(CLI_OFFSET+(R(t,*argp))));
tt = (tt+(dif*(24*(60*(60)))));
}

AND(r,0x00);
t = (R(t,*cache));
while(day) {
AND(flag,0x00);
if(t<(tt)) OR(flag,0x01);
if(!flag) {
if(cals_event_in_the_day(tt,cache)) OR(flag,0x01);
}
if(!flag) break;
INC(r);
tt = (tt+(0x01+(~(24*(60*(60))))));
--day;
}

return(r);
}
