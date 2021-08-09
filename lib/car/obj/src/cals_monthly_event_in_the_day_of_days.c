/* **** Notes

Confirm.

Remarks:
Refer at fn. cals_periodic_event_in_the_day.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_monthly_event_in_the_day_of_days(time_t(arg),cals_event_t(*argp))) {

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short wk,di,mo,yr;
auto signed short day;
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

if(!argp) return(0x00);

r = cals_event_in_the_day(arg,argp);
if(r) return(0x01);

t = (R(t,*argp));
if(arg<(t)) return(0x00);

tp = localtime(&t);
if(!tp) return(0x00);

wk = (R(tm_wday,*tp));

t = (arg);
tp = localtime(&t);
if(!tp) return(0x00);

periodic = (R(periodic,*argp));
AND(i,0x00);
while(*(ordinary_flag+(i))) {
if(periodic&(*(ordinary_flag+(i)))) break;
i++;
}

if(!(*(ordinary_flag+(i)))) return(0x00);

if(!(wk^(R(tm_wday,*tp)))) {
i++;
if(CALS_THELAST&(*(ordinary_flag+(i)))) {
AND(r,0x00);
if(cals_last_days(t)) OR(r,0x01);
return(r);
}
r = cv_ord_week(t);
if(!(i^(r))) return(0x01);
}

return(0x00);
}
