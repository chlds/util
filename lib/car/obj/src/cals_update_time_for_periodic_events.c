/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_update_time_for_periodic_events(cals_event_t(*cache),cals_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;

auto time_t sec;
auto time_t t;
auto signed i,r;
auto signed short week,day,mon,year;
auto signed short yr,mo,di,wk;
auto signed short hr,mn,sm;
auto signed short dif;
auto signed short flag;

if(!cache) return(0x00);
if(!argp) return(0x00);

t = (*(CLI_OFFSET+(R(t,*argp))));
tp = localtime(&t);
if(!tp) return(0x00);

if(DBG) printf("[day,t/offset/index:%d,%lld/%lld/%lld] ",day,t,*(CLI_OFFSET+(R(t,*argp))),*(CLI_INDEX+(R(t,*argp))));

yr = (*(CALS_YR+(R(date,*cache))));
mo = (*(CALS_MO+(R(date,*cache))));
di = (*(CALS_DI+(R(date,*cache))));
wk = (*(CALS_WK+(R(date,*cache))));
hr = (*(CALS_HR+(R(time,*cache))));
mn = (*(CALS_MN+(R(time,*cache))));
sm = (*(CALS_SM+(R(time,*cache))));

AND(flag,0x00);
if(CALS_ANNUAL&(R(periodic,*cache))) flag++;
if(CALS_MONTHLY&(R(periodic,*cache))) flag++;
if(flag) {
/*
dif = (0x03);
if(mo^(R(tm_mon,*tp))) t = (t+(dif*(7*(24*(60*(60))))));
tp = localtime(&t);
if(!tp) return(0x00);
if(mo^(R(tm_mon,*tp))) OR(R(flag,*cache),CALS_INVALID);
//*/
dif = (-di+(R(tm_mday,*tp)));
dif = (0x01+(~dif));
t = (t+(dif*(24*(60*(60)))));
tp = localtime(&t);
if(!tp) return(0x00);
if(di^(R(tm_mday,*tp))) OR(R(flag,*cache),CALS_INVALID);
}

if(CALS_WEEKLY&(R(periodic,*cache))) {
dif = (-wk+(DAYS+(*(THEFIRST+(R(day,*argp))))));
dif = (dif%(DAYS));
dif = (0x01+(~dif));
// if(arg) {
if(!(EQ(t,*(CLI_INDEX+(R(t,*argp)))))) {
dif = (DAYS+(dif));
dif = (dif%(DAYS));
}
t = (t+(dif*(24*(60*(60)))));
if(DBG) {
printf("<");
cals_out_t(t);
printf("> ");
}}

if(CALS_DAILY&(R(periodic,*cache))) {
}

if(DBG) printf("[%2d:%02d:%02d] ",hr,mn,sm);
sec = (sm+(60*(mn+(60*(hr)))));
sec = (sec+(0x01+(~(R(tm_sec,*tp)))));
sec = (sec+(0x01+(~(60*(R(tm_min,*tp))))));
sec = (sec+(0x01+(~(60*(60*(R(tm_hour,*tp)))))));
t = (sec+(t));

R(t,*cache) = (t);

return(0x01);
}
