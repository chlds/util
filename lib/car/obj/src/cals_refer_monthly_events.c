/* **** Notes

Refer

Remarks:
Refer at fn. cals_refer_events_internal.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_monthly_events(signed short(arg),cals_event_t(*cache),cals_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short wk,di,mo,yr;
auto signed short day,mon;
auto signed short flag;

if(!cache) return(0x00);
if(!argp) return(0x00);

if(CALS_IN_DAYS&(R(flag,*cache))) return(cals_refer_monthly_events_in_days(arg,cache,argp));

t = (R(t,*cache));
tp = localtime(&t);
if(!tp) return(0x00);

if(DBG) printf("[t/offset/index:%lld/%lld/%lld] ",t,*(CLI_OFFSET+(R(t,*argp))),*(CLI_INDEX+(R(t,*argp))));

yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));
wk = (R(tm_wday,*tp));

t = (*(CLI_OFFSET+(R(t,*argp))));
tp = localtime(&t);
if(!tp) return(0x00);

AND(i,0x00);
AND(flag,0x00);
mon = (R(tm_mon,*tp));
if(yr<(1900+(R(tm_year,*tp)))) OR(flag,0x01);
if(!(yr^(1900+(R(tm_year,*tp))))) {
if(!(mon<(mo))) OR(flag,0x01);
}

if(!flag) return(0x00);

day = (R(tm_mday,*tp));
//*
if(!arg) {
AND(r,0x00);
if(di<(day)) OR(r,0x01);
return(r);
}
//*/
if(!(day^(di))) OR(i,0x01);
if(day<(di)) OR(i,0x01);
if(!i) return(0x00);

t = (*(CLI_INDEX+(R(t,*argp))));
tp = localtime(&t);
if(!tp) return(0x00);
day = (R(tm_mday,*tp));
if(!(di^(day))) OR(i,0x02);
if(di<(day)) OR(i,0x02);
// also
if(mon^(R(tm_mon,*tp))) {
if(day<(di)) OR(i,0x02);
}

if(i<(0x02)) return(0x00);

return(0x01);
}
