/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_update_time_for_periodic_events(signed short(arg),cals_event_t(*cache),cals_t(*argp))) {

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

if(!arg) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);

if(CALS_IN_DAYS&(R(flag,*cache))) return(cals_update_time_for_periodic_events_in_days(cache,argp));

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

--arg;
if(CALS_DAILY&(R(periodic,*cache))) {
t = (*(CLI_INDEX+(R(t,*argp))));
if(!(t^(*(CLI_OFFSET+(R(t,*argp)))))) t = (t+(0x01+(~(24*(60*(60))))));
t = (t+(arg*(0x01+(~(24*(60*(60)))))));
if(CALS_EOM&(R(flag,*cache))) {
t = (*(CLI_OFFSET+(R(t,*argp))));
t = (t+(arg*(24*(60*(60)))));
}}

if(DBG) printf("[%2d:%02d:%02d] ",hr,mn,sm);

// also
if(!(cals_crown_midnight(&t))) return(0x00);

t = (t+(sm+(60*(mn+(60*(hr))))));
R(t,*cache) = (t);

return(0x01);
}
