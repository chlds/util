/* **** Notes

Go backward for months
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_backward_r(signed(arg),cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
auto struct tm *tp;
auto time_t wk;
auto time_t t;
auto signed i,r;
auto signed short mo;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!arg) return(0x00);

wk = (7*(24*(60*(60))));
t = (0x01+(~(0x03*(wk))));
*(CLI_BASE+(R(t,*argp))) = (t+(*(CLI_BASE+(R(t,*argp)))));
// subtract second minutes in three weeks out of a first day of the first week

r = find_a_first_week(*(THEFIRST+(R(day,*argp))),CLI_BASE+(R(t,*argp)),*(CLI_BASE+(R(t,*argp))));
if(!r) {
printf("%s \n","<< Error at fn. find_a_first_week()");
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
r = cals_retrieve_week1(*(THEFIRST+(R(day,*argp))),*(THEFIRST+(R(month,*argp))),CLI_BASE+(R(wk1,*argp)),*(CLI_BASE+(R(t,*argp))));
if(!r) {
printf("%s \n","<< Error at fn. cals_retrieve_week1()");
return(0x00);
}}

return(0x01+(cals_backward_r(--arg,argp)));
}
