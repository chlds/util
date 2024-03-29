/* **** Notes

Refer

Remarks:
Refer at fn. cals_refer_events_internal.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_monthly_events_in_days(signed short(arg),cals_event_t(*cache),cals_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short wk,di,mo,yr;
auto signed short week,day,mon,year;
auto signed short periodic;
auto signed short flag;
auto signed short ordinary_flag[] = {
CALS_THEFIRST,
CALS_THESECOND,
CALS_THETHIRD,
CALS_THEFOURTH,
CALS_THELAST,
0x00,
};

if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_MONTHLY&(R(periodic,*cache)))) return(0x00);
if(!(CALS_IN_DAYS&(R(flag,*cache)))) return(0x00);

periodic = (R(periodic,*cache));
AND(i,0x00);
while(*(ordinary_flag+(i))) {
if(periodic&(*(ordinary_flag+(i)))) break;
i++;
}

if(!(*(ordinary_flag+(i)))) return(0x00);

t = (R(t,*cache));
tp = localtime(&t);
if(!tp) return(0x00);

AND(r,0x00);
if(t<(*(CLI_INDEX+(R(t,*argp))))) OR(r,0x01);
if(cals_event_in_the_day(*(CLI_INDEX+(R(t,*argp))),cache)) OR(r,0x01);
if(!r) return(0x00);

if(DBG) printf("[t/offset/index:%lld/%lld/%lld] ",t,*(CLI_OFFSET+(R(t,*argp))),*(CLI_INDEX+(R(t,*argp))));

yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));
wk = (R(tm_wday,*tp));

t = (*(CLI_OFFSET+(R(t,*argp))));
tp = localtime(&t);
if(!tp) return(0x00);

week = (R(tm_wday,*tp));
day = (R(tm_mday,*tp));
mon = (R(tm_mon,*tp));
year = (1900+(R(tm_year,*tp)));

if(!arg) {
if(CALS_THELAST&(R(periodic,*cache))) return(0x00);
while(--day) {
t = (t+(0x01+(~(24*(60*(60))))));
week = day_before(week);
if(!(wk^(week))) {
i++;
if(!(i^(cv_ord_week(t)))) return(0x01);
}}
return(0x00);
}

t = (*(CLI_INDEX+(R(t,*argp))));
tp = localtime(&t);
if(!tp) return(0x00);

day = (R(tm_mday,*tp));
if(mon^(R(tm_mon,*tp))) day = (DAYS+(0x01+(~day)));
else day = (DAYS);

t = (*(CLI_OFFSET+(R(t,*argp))));
tp = localtime(&t);
if(!tp) return(0x00);

week = (R(tm_wday,*tp));
while(day) {
if(!(wk^(week))) {
if(CALS_THELAST&(R(periodic,*cache))) {
AND(r,0x00);
if(cals_last_days(t)) OR(r,0x01);
return(r);
}
i++;
if(!(i^(cv_ord_week(t)))) return(0x01);
}
week = day_after(week);
t = (t+(24*(60*(60))));
--day;
}

return(0x00);
}
