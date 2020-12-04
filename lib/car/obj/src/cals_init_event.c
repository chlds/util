/* **** Notes

Initialise
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_init_event(cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto struct tm *tp;
auto time_t t;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

time(&t);
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

/*
i = (CALS_DATE);
while(i) {
*(--i+(R(date,*argp))) = (0x00);
}
i = (CALS_TIME);
while(i) {
*(--i+(R(time,*argp))) = (0x00);
}
//*/

R(b,*argp) = (0x00);
R(w,*argp) = (0x00);
R(flag,*argp) = (0x00);
R(recur,*argp) = (0x00);
R(d,*argp) = (0x00);
R(s,*argp) = (0x00);
R(optl,*argp) = (0x00);

OR(R(flag,*argp),CALS_INIT);

return(0x01);
}
