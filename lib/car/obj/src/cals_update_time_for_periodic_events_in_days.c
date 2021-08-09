/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_update_time_for_periodic_events_in_days(cals_event_t(*cache),cals_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;

auto time_t t;
auto signed i,r;
auto signed short week,day,mon,year;
auto signed short yr,mo,di,wk;
auto signed short hr,mn,sm;
auto signed short dif;
auto signed short flag;

if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(CALS_MONTHLY&(R(periodic,*cache)))) return(0x00);
if(!(CALS_IN_DAYS&(R(flag,*cache)))) return(0x00);

t = (*(CLI_OFFSET+(R(t,*argp))));
if(DBG) {
printf("<");
cals_out_t(t);
printf("> ");
}

tp = localtime(&t);
if(!tp) return(0x00);

wk = (*(CALS_WK+(R(date,*cache))));
dif = (wk+(0x01+(~(R(tm_wday,*tp)))));
if(dif<(0x00)) dif = (dif+(DAYS));

t = (t+(dif*(24*(60*(60)))));
if(DBG) {
printf("<");
cals_out_t(t);
printf("> ");
}

// also
if(!(cals_crown_midnight(&t))) return(0x00);

hr = (*(CALS_HR+(R(time,*cache))));
mn = (*(CALS_MN+(R(time,*cache))));
sm = (*(CALS_SM+(R(time,*cache))));
t = (t+(sm+(60*(mn+(60*(hr))))));
R(t,*cache) = (t);

return(0x01);
}
