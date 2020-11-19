/* **** Notes

Refer
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_refer_events(signed short(flag),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *event;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short mo,di,yr;
auto signed short wk;
auto signed short hr,mn;
auto signed short day;

/* **** CODE/TEXT */
if(!argp) return(0x00);

AND(i,0x00);

t = (R(t,R(today,*argp)));
tp = localtime(&t);
if(!tp) return(0x00);

if(DBG) printf("[t/offset/index:%lld/%lld/%lld] ",t,*(CLI_OFFSET+(R(t,*argp))),*(CLI_INDEX+(R(t,*argp))));

yr = (1900+(R(tm_year,*tp)));
mo = (R(tm_mon,*tp));
di = (R(tm_mday,*tp));
wk = (R(tm_wday,*tp));
hr = (R(tm_hour,*tp));
mn = (R(tm_min,*tp));

t = (*(CLI_OFFSET+(R(t,*argp))));
tp = localtime(&t);
if(!tp) return(0x00);
if(!(yr^(1900+(R(tm_year,*tp))))) {
if(!(mo^(R(tm_mon,*tp)))) {
day = (R(tm_mday,*tp));
//*
if(!flag) {
if(di<(day)) return(0x01);
else return(0x00);
}
//*/
if(!(day^(di))) i++;
if(day<(di)) i++;
}}

if(!i) return(0x00);

t = (*(CLI_INDEX+(R(t,*argp))));
tp = localtime(&t);
if(!tp) return(0x00);
day = (R(tm_mday,*tp));
if(!(di^(day))) i++;
if(di<(day)) i++;

if(i<(0x02)) return(0x00);

return(0x01);
}
