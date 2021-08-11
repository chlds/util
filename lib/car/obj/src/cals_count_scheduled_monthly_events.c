/* **** Notes

Count periodic events scheduled for a week.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_count_scheduled_monthly_events(signed(*cache),cals_event_t(*term),cals_event_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short year,mon,day;
auto signed short yr,mo,di;
auto signed short flag;

if(!cache) return(0x00);
if(!term) return(0x00);
if(!argp) return(0x00);

if(CALS_IN_DAYS&(R(flag,*argp))) return(cals_count_scheduled_monthly_events_in_days(cache,term,argp));

t = (R(t,*argp));
tp = localtime(&t);
if(!tp) return(0x00);

yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));

year = (*(CALS_YR+(R(date,*term))));
mon = (*(CALS_MO+(R(date,*term))));
day = (*(CALS_DI+(R(date,*term))));

AND(i,0x00);
AND(flag,0x00);
if(yr<(year)) OR(flag,0x01);
if(!(yr^(year))) {
if(!(mon<(mo))) OR(flag,0x01);
}
// also
t = (R(t,*argp));
t = (t+(0x01+(~(6*(24*(60*(60)))))));
tp = localtime(&t);
if(!tp) return(0x00);
yr = (1900+(R(tm_year,*tp)));
if(!(mon^(R(tm_mon,*tp)))) {
if(!(year^(yr))) OR(flag,0x01);
}

if(!flag) return(0x01);

// case 1.
if(!(day^(di))) OR(i,0x01);

// case 2.
t = (R(t,*term));
t = (t+(6*(24*(60*(60)))));
tp = localtime(&t);
if(!tp) return(0x00);

if(!(di^(R(tm_mday,*tp)))) OR(i,0x01);

if(day<(di)) {
if(mon^(R(tm_mon,*tp))) OR(i,0x01);
if(!(mon^(R(tm_mon,*tp)))) {
if(di<(R(tm_mday,*tp))) OR(i,0x01);
}}

if(di<(day)) {
if(mon^(R(tm_mon,*tp))) {
if(di<(R(tm_mday,*tp))) OR(i,0x01);
}}

if(i) {
// i.e., February 29
if(!(1^(*(CALS_MO+(R(date,*term)))))) {
if(28<(*(CALS_DI+(R(date,*argp))))) AND(i,0x00);
if(!(29^(*(CALS_DI+(R(date,*argp)))))) {
r = rf_leap_years(year);
if(r) OR(i,0x01);
}}
// on the 30th or 31st day
if(!(31^(*(CALS_DI+(R(date,*argp)))))) {
AND(i,0x00);
r = cals_thirty_first_day(*(CALS_MO+(R(date,*term))));
if(r) OR(i,0x01);
}}

if(i) {
if(!(CALS_INVALID&(R(flag,*argp)))) INC(*cache);
}

return(0x01);
}
