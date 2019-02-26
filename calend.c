/* **** **** **** **** Notes

Refer at path "./incl/decl/config.h", at <corecrt_wtime.h> or..

Please enter the following command to make an executable file (calend.exe) to run on the (CMD.exe) console for Windows 10 64-bit OS:

nmake T=calend

//*/


# define C_CODE_STDS
# define C_CALEND

# include "./incl/decl/config.h"


char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


auto int signed(i), (j), (l);
auto char signed(*p);

auto struct tm(*tp);
auto time_t(t);


/* **** **** CODE/TEXT */

time(&(t));

tp = localtime(&(t));

if(!((int long long signed) tp^(~(NIL)))) {
printf("\n%s", ("<< Error at fn. localtime().."));
printf("\n%s%Xh", ("<< The errno is: "), (errno));
printf("\n%s", (char signed(*)) (strerror(errno)));
return(char signed) (~(NIL));
}

else {
}

/* **** Monitoring
printf("\n%s%p", ("the tp is: "), (tp));
printf("\n%s%Xh", ("the t is: "), (t));
//*/


/* **** Output */

// printf("\n%d:%02d:%02d", ((*tp).tm_hour), ((*tp).tm_min), ((*tp).tm_sec));
printf(" %s %d %s %d\n", (*(dayoftheweek+((*tp).tm_wday))), ((*tp).tm_mday), (*(month+((*tp).tm_mon))), (1900+((*tp).tm_year)));


/* **** Auxiliaries
printf("\n%s%Xh", ("and the flag of the Daylight Savings Time is: "), ((*(tp)).tm_isdst));
printf("\n%d%s", ((*tp).tm_yday), (" days since January 1"));
//*/


return(char signed) (NIL);
}
