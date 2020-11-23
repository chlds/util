/* **** Notes

Count events scheduled for a week.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_count_scheduled_events_r(signed(*cache),cals_event_t(*term),cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short year,mon,day;
auto signed short yr,mo,di;
auto signed short flag;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!term) return(0x00);

if(!argp) {
flag = (~CALS_ERROR);
AND(R(flag,*term),flag);
return(0x00);
}

AND(i,0x00);

t = (R(t,*argp));
tp = localtime(&t);
if(!tp) return(0x00);
yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));

year = (*(CALS_YR+(R(date,*term))));
mon = (*(CALS_MO+(R(date,*term))));
day = (*(CALS_DI+(R(date,*term))));

// case 1.
if(!(yr^(year))) {
if(!(mo^(mon))) {
if(!(day^(di))) i++;
if(day<(di)) i++;
if(i) {
AND(i,0x00);
t = (R(t,*term));
t = (t+(6*(24*(60*(60)))));
tp = localtime(&t);
if(!tp) return(0x00);
if(mo^(R(tm_mon,*tp))) i++;
if(!(di^(R(tm_mday,*tp)))) i++;
if(di<(R(tm_mday,*tp))) i++;
}}}

if(!i) {
// case 2.
t = (R(t,*argp));
t = (t+(0x01+(~(6*(24*(60*(60)))))));
tp = localtime(&t);
if(!tp) return(0x00);
if(mo^(mon)) i++;
if(yr^(year)) i++;
if(i) {
AND(i,0x00);
if(!(year^(1900+(R(tm_year,*tp))))) {
if(!(mon^(R(tm_mon,*tp)))) {
day = (R(tm_mday,*tp));
if(!(day^(*(CALS_DI+(R(date,*term)))))) i++;
if(day<(*(CALS_DI+(R(date,*term))))) i++;
}}}}

if(i) INC(*cache);

argp = (R(s,*argp));

return(0x01+(cals_count_scheduled_events_r(cache,term,argp)));
}
