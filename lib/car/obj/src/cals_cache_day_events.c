/* **** Notes

Cache events.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_cache_day_events(time_t(criterion),cals_roll_t(*cache),cals_roll_t(*argp))) {

/* **** DATA, BSS and STACK */
auto cals_event_t *ev;
auto struct tm *tp;

// auto cals_roll_t roll;
auto cals_event_t event;
auto time_t t;
auto signed i,r;
auto signed short mo,di,yr;
auto signed short wk;
auto signed short hr,mn;
auto signed short flag;

/* **** CODE/TEXT */
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

r = cals_init_roll(cache);
if(!r) {
printf("%s \n","<< Error at fn. cals_init_roll()");
return(0x00);
}

r = cals_sort_events(argp);
if(DBG) printf("[%s %d] ","Sorted",r);
if(!r) {
/*
printf("%s \n","<< Error at fn. cals_sort_events()");
return(0x00);
//*/
}

AND(flag,0x00);
r = cals_init_event(&event);
if(!r) return(0x00);
t = (criterion);
tp = localtime(&t);
if(!tp) return(0x00);
*(CALS_YR+(R(date,event))) = (1900+(R(tm_year,*tp)));
*(CALS_MO+(R(date,event))) = (R(tm_mon,*tp));
*(CALS_DI+(R(date,event))) = (R(tm_mday,*tp));
*(CALS_WK+(R(date,event))) = (R(tm_wday,*tp));
//*
*(CALS_HR+(R(time,event))) = (R(tm_hour,*tp));
*(CALS_MN+(R(time,event))) = (R(tm_min,*tp));
*(CALS_SM+(R(time,event))) = (R(tm_sec,*tp));
//*/
ev = (*(CLI_LEAD+(R(event,*argp))));

OR(R(flag,*cache),CALS_ERROR);
r = cals_cache_day_events_r(flag,&event,ev,cache);
if(CALS_ERROR&(R(flag,*cache))) r = (0x00);

return(r);
}
