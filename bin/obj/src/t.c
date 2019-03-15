/* **** **** **** **** Notes

Refer at <corecrt_wtime.h>

Please type e.g., the following command on directory ../../../ to make the (t.exe) executable file to run on the (CMD.exe) console for Windows 10 64-bit OS:

nmake T=t MYLIBS= LIBS=

//*/



# define C_CODE_STDS
# define C_CALEND
# define C_AS

# include "./../../../incl/config.h"



char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


auto const int signed(DELAY) = (int signed) (100);

auto const int signed(SECS) = (int signed) (5);

auto int signed(i), (j), (l), (r);

auto char signed(c);
auto char signed(*p);

auto struct tm(*tp);
auto time_t(t);


/* **** **** CODE/TEXT */

time(&(t));

tp = localtime(&(t));

if(!((int long long signed) tp^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. localtime().."));
printf("\n%s%Xh", ("<< The errno is: "), (errno));
printf("\n%s", (char(*)) (strerror(errno)));
return(char signed) (~(NIL));
}

else {
}

/* **** Monitoring
printf("\n%s%p", ("the tp is: "), (tp));
printf("\n%s%Xh", ("the t is: "), (t));
//*/


/* **** Output */

printf(" %s %d %s\n", ("Please type <Ctrl-C> (or wait for about"), (SECS), ("seconds) to stop."));

i = (int signed) (10*(SECS));

while(--(i)) {
time(&(t));
tp = localtime(&(t));
if(!((int long long signed) tp^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. localtime().."));
// printf("\n%s%Xh", ("<< The errno is: "), (errno));
// printf("\n%s", (strerror(errno)));
return(char signed) (~(NIL));
}
else {
}
// Output
printf("\r %2d:%02d:%02d", ((*tp).tm_hour), ((*tp).tm_min), ((*tp).tm_sec));
printf(" %s %d %s %d", (*(dayoftheweek+((*tp).tm_wday))), ((*tp).tm_mday), (*(month+((*tp).tm_mon))), (1900+((*tp).tm_year)));
// CPU idling
Sleep(DELAY);
}


printf("\n");


/* **** Auxiliaries
printf("\n%s%Xh", ("and the flag of the Daylight Savings Time is: "), ((*(tp)).tm_isdst));
printf("\n%d%s", ((*tp).tm_yday), (" days since January 1"));
//*/


return(char signed) (NIL);
}
