/* **** Notes

Go backward for months
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_backward_r(signed(arg),cals_t(*argp))) {

auto struct tm *tp;
auto time_t wk;
auto time_t t;
auto signed i,r;
auto signed short mo;

if(!argp) return(0x00);
if(!arg) return(0x00);

wk = (7*(24*(60*(60))));
t = (0x01+(~(0x03*(wk))));
*(CLI_BASE+(R(t,*argp))) = (t+(*(CLI_BASE+(R(t,*argp)))));
// subtract second minutes in three weeks out of a first day of the first week

r = cv_wk_mo(*(THEFIRST+(R(day,*argp))),CLI_BASE+(R(t,*argp)),*(CLI_BASE+(R(t,*argp))));
if(!r) {
printf("%s \n","<< Error at fn. cv_wk_mo()");
return(0x00);
}

tp = localtime(CLI_BASE+(R(t,*argp)));
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno.",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}

mo = (*(THELAST+(R(month,*argp))));
if(!(mo^(R(tm_mon,*tp)))) {
r = cv_wk_yr(*(THEFIRST+(R(day,*argp))),*(THEFIRST+(R(month,*argp))),CLI_BASE+(R(wk1,*argp)),*(CLI_BASE+(R(t,*argp))));
if(!r) {
printf("%s \n","<< Error at fn. cv_wk_yr()");
return(0x00);
}}

return(0x01+(cals_backward_r(--arg,argp)));
}
