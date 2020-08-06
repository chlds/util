/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define C_CODE_STDS
# define CALEND
# include "./../../../lib/incl/config.h"

signed(__cdecl main(signed(argc),signed char(**argv),signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto signed const QUANTUM = (0x10);
auto signed const SNOOZE = (0x04);
auto signed const DELAY = (0x02*(QUANTUM));

auto signed const SECS = (5);

auto struct tm *tp;
auto time_t t;
auto signed deadline;
auto signed r;

/* **** CODE/TEXT */
time(&t);

tp = localtime(&t);
if(!((signed long long) tp^(~(0x00)))) {
printf("%s\n","<< Error at fn. localtime() ");
printf("%s%Xh \n","<< The errno is: ",errno);
printf("%s \n",strerror(errno));
return(0x00);
}

/* Monitoring
printf("%s%p \n","tp is: ",tp);
printf("%s%Xh \n","t is: ",t);
//*/

printf(" %s %d %s\n","Please type <Ctrl-C> (or wait for about",SECS,"seconds) to stop. ");

time(&t);
deadline = (t+(SECS));

while(t<(deadline)) {
time(&t);
tp = localtime(&t);
if(!((signed long long) tp^(~(0x00)))) {
printf("%s\n","<< Error at fn. localtime().. ");
// printf("%s%Xh \n","<< The errno is: ",errno);
// printf("%s \n",strerror(errno));
return(0x00);
}

printf("\r %2d:%02d:%02d ",(*tp).tm_hour,(*tp).tm_min,(*tp).tm_sec);
printf("%s %d %s %d ",*(dayoftheweek+((*tp).tm_wday)),(*tp).tm_mday,*(month+((*tp).tm_mon)),1900+((*tp).tm_year));
// CPU idling
Sleep(DELAY);
}

printf("\n");

/* Auxiliaries
printf("%s%Xh \n","and the flag of the Daylight Savings Time is: ",(*tp).tm_isdst);
printf("%d%s\n",(*tp).tm_yday," days since January 1 ");
//*/

return(0x00);
}
