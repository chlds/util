/* **** Notes

Count periodic events scheduled for a week.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_count_scheduled_monthly_events_in_days(signed(*cache),cals_event_t(*term),cals_event_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;
auto time_t t,tt;
auto signed dif;
auto signed i,r;
auto signed short wk,di,mo,yr;
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
if(!term) return(0x00);
if(!argp) return(0x00);

if(!(CALS_IN_DAYS&(R(flag,*argp)))) return(0x00);

AND(r,0x00);
t = (R(t,*argp));
tt = (R(t,*term));
tt = (tt+(6*(24*(60*(60)))));
if(t<(tt)) OR(r,0x01);
if(cals_event_in_the_day(tt,argp)) OR(r,0x01);
if(!r) return(0x01);

periodic = (R(periodic,*argp));
AND(i,0x00);
while(*(ordinary_flag+(i))) {
if(periodic&(*(ordinary_flag+(i)))) break;
i++;
}

if(!(*(ordinary_flag+(i)))) return(0x00);

t = (R(t,*term));
tp = localtime(&t);
if(!tp) return(0x00);

wk = (*(CALS_WK+(R(date,*argp))));
dif = (wk+(0x01+(~(R(tm_wday,*tp)))));
if(dif<(0x00)) dif = (dif+(DAYS));

AND(r,0x00);
t = (t+(dif*(24*(60*(60)))));
if(CALS_THELAST&(R(periodic,*argp))) {
if(cals_last_days(t)) OR(r,0x01);
}
if(!r) {
i++;
if(!(i^(cv_ord_week(t)))) OR(r,0x01);
}
if(r) {
if(!(CALS_INVALID&(R(flag,*argp)))) INC(*cache);
}

return(0x01);
}
