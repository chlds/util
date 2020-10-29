/* **** Notes

Convert
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_sched(cals_t(*argp),time_t(arg))) {

/* **** DATA, BSS and STACK */
auto struct tm *tp;
auto time_t t;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cals_init(argp);
if(!r) return(0x00);

t = (arg);
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
