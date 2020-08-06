/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define C_CODE_STDS
# define CALEND

# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto struct tm *tp;
auto time_t t;
auto signed d,h;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
h = (60*(60));
d = (24*(h));
time(&t);
tp = localtime(&t);
if(!((signed long long) tp^(~(0x00)))) {
r = (errno);
printf("%s%d%s%Xh\n","<< Error at fn. localtime() with errno. ",r," or ",r);
printf("%s\n",strerror(r));
return(0x00);
}

/* Monitoring
printf("%s%p\n","tp is: ",tp);
printf("%s%d%s%Xh\n","t is: ",t," or ",t);
//*/

printf("\n");
printf("  %s %d %s %d, ",*(dayoftheweek+(R(tm_wday,*tp))),R(tm_mday,*tp),*(month+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
printf("%d:%02d:%02d, ",R(tm_hour,*tp),R(tm_min,*tp),R(tm_sec,*tp));
printf("%s%d, ","Daylight Savings Time ",R(tm_isdst,*tp));
printf("%d%s\n",R(tm_yday,*tp)," days since January 1");
printf("\n");

i = R(tm_mon,*tp);
while(0x01) {
if(i^(R(tm_mon,*tp))) break;
printf("  %2d %s",R(tm_mday,*tp),*(dayofthewk+(R(tm_wday,*tp))));
printf("\n");
t = (d+(t));
tp = localtime(&t);
if(!((signed long long) tp^(~(0x00)))) {
r = (errno);
printf("%s%d%s%Xh\n","<< Error at fn. localtime() with errno. ",r," or ",r);
printf("%s\n",strerror(r));
return(0x00);
}}

return(0x01);
}
