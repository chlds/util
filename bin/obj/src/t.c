/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define CAR_H
# define CAT_H
# define TIME_H
# define STDIO_H
# include <errno.h>
# include <string.h>
# include "./../../../lib/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {
auto struct tm *tp;
auto time_t t;
auto signed deadline;
auto signed i,r;
auto signed QUANTUM = (0x10);
auto signed SNOOZE = (0x04);
auto signed DELAY = (0x03*(QUANTUM));
auto signed SECS = (5);
auto signed char *(wk[]) = {
"Sun","Mon","Tue","Wed","Thu","Fri","Sat",0x00,
};
auto signed char *(mo[]) = {
"January","February","March","April","May","June","July","August","September","October","November","December",0x00,
};
time(&t);
deadline = (t+(SECS));
tp = localtime(&t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
/* Monitoring
printf("%s %p \n","tp is:",tp);
printf("%s %zd \n","t is:",t);
//*/
printf("%s %d %s \n","Please type <Ctrl-C> (or wait for about",SECS,"seconds) to stop.");
i = (~0x00);
while(t<(deadline)) {
time(&t);
tp = localtime(&t);
if(!tp) {
r = (errno);
printf("%s %d %s %Xh \n","<< Error at fn. localtime() with errno",r,"or",r);
printf("%s \n",strerror(r));
return(0x00);
}
if(i^(R(tm_sec,*tp))) {
printf("\r%02d:%02d:%02d ",(*tp).tm_hour,(*tp).tm_min,(*tp).tm_sec);
printf("%s %d %s %d",*(wk+(R(tm_wday,*tp))),R(tm_mday,*tp),*(mo+(R(tm_mon,*tp))),1900+(R(tm_year,*tp)));
}
i = (R(tm_sec,*tp));
// CPU idling
Sleep(DELAY);
}
printf("\n");
//* Auxiliaries
printf("%s %Xh \n","and the flag of the Daylight Savings Time is:",R(tm_isdst,*tp));
printf("%d %s \n",R(tm_yday,*tp),"days since January 1");
//*/
return(0x00);
}
