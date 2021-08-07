/* **** Notes

Overwrite time
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_modify_time_of_events_in_days(cals_event_t(*argp))) {

auto cals_event_t *ev;
auto struct tm *tp;

auto time_t t;
auto signed i,r;
auto signed short yr,mo,di,wk;
auto signed short hr,mn,sm;
auto signed short dif;
auto signed short flag;
auto signed short ordinary[] = {
CALS_THEFIRST,
CALS_THESECOND,
CALS_THETHIRD,
CALS_THEFOURTH,
CALS_THELAST,
0x00,
};

if(!argp) return(0x00);

if(!(CALS_IN_DAYS&(R(flag,*argp)))) return(0x00);

wk = (*(CALS_WK+(R(date,*argp))));
mo = (*(CALS_MO+(R(date,*argp))));
yr = (*(CALS_YR+(R(date,*argp))));
r = cals_crown(mo,yr,&(R(t,*argp)));
if(!r) return(0x00);

t = (R(t,*argp));
tp = localtime(&t);
if(!tp) return(0x00);
if(wk^(R(tm_wday,*tp))) dif = (wk+(0x01+(~(R(tm_wday,*tp)))));
if(dif<(0x00)) dif = (dif+(DAYS));

t = (t+(dif*(24*(60*(60)))));
AND(i,0x00);
while(*(ordinary+(i))) {
flag = (*(ordinary+(i)));
if(flag&(R(periodic,*argp))) break;
i++;
}

if(!(*(ordinary+(i)))) return(0x00);

AND(flag,0x00);
if(CALS_THELAST&(*(ordinary+(i)))) OR(flag,0x01);
if(flag) --i;

t = (t+(i*(DAYS*(24*(60*(60))))));
if(flag) {
if(cals_no_last_days(t)) t = (t+(DAYS*(24*(60*(60)))));
}

R(t,*argp) = (t);
tp = localtime(&t);
if(!tp) return(0x00);

*(CALS_YR+(R(date,*argp))) = (1900+(R(tm_year,*tp)));
*(CALS_MO+(R(date,*argp))) = (R(tm_mon,*tp));
*(CALS_DI+(R(date,*argp))) = (R(tm_mday,*tp));
*(CALS_WK+(R(date,*argp))) = (R(tm_wday,*tp));
*(CALS_HR+(R(time,*argp))) = (R(tm_hour,*tp));
*(CALS_MN+(R(time,*argp))) = (R(tm_min,*tp));
*(CALS_SM+(R(time,*argp))) = (R(tm_sec,*tp));

return(0x01);
}
