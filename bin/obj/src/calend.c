/* **** Notes

Refer at <corecrt_wtime.h>
*/


# define C_CODE_STDS
# define C_CALEND
# define C_AS
# include "./../../../incl/config.h"

signed(__cdecl main(signed(argc), signed char(**argv), signed char(**envp))) {

/* **** DATA, BSS and STACK */
auto struct tm(*tp);
auto time_t(t);
auto signed(r);

/* **** CODE/TEXT */
time(&t);

tp = localtime(&t);

if(!((signed long long) tp^(~(NIL)))) {
printf("%s\n", "<< Error at fn. localtime().");
printf("%s%Xh\n", "<< The errno is: ", errno);
printf("%s\n", strerror(errno));
return(XNOR(r));
}

else {
}

/* Monitoring
printf("%s%p\n", "tp is: ", tp);
printf("%s%Xh\n", "t is: ", t);
//*/

/* Output */
printf("\n");
// printf("%d:%02d:%02d", (*tp).tm_hour, (*tp).tm_min, (*tp).tm_sec);
printf(" %s %d %s %d\n", *(dayoftheweek+((*tp).tm_wday)), (*tp).tm_mday, *(month+((*tp).tm_mon)), 1900+((*tp).tm_year));

/* Auxiliaries
printf("%s%Xh\n", "and the flag of the Daylight Savings Time is: ", (*tp).tm_isdst);
printf("%d%s\n", (*tp).tm_yday, " days since January 1");
//*/

return(0x00);
}
