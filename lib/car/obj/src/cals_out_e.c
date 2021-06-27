/* **** Notes

Output.

Remarks:
To debug
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_out_e(cals_event_t(*argp))) {

auto signed char *b;
auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short sm,mn,hr;
auto signed short wk,di,mo,yr;

if(!argp) return(0x00);

b = (R(b,*argp));

yr = (*(CALS_YR+(R(date,*argp))));
mo = (*(CALS_MO+(R(date,*argp))));
di = (*(CALS_DI+(R(date,*argp))));
wk = (*(CALS_WK+(R(date,*argp))));

hr = (*(CALS_HR+(R(time,*argp))));
mn = (*(CALS_MN+(R(time,*argp))));
sm = (*(CALS_SM+(R(time,*argp))));

printf("%2d:%02d:%02d ",hr,mn,sm);
printf("%s %d %s %d ",*(DAYOFTHEWK+(wk)),di,*(MONTH+(mo)),yr);

cli_outs(b);
if(CALS_DATE_TODAY&(R(flag,*argp))) printf(" [%s]","Today");
if(CALS_TIME_ALLDAY&(R(flag,*argp))) printf(" [%s]","All-day");

return(0x01);
}
