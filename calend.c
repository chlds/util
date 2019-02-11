/* **** **** **** **** Notes

Refer at path "./incl/decl/config.h", at <corecrt_wtime.h> or..

Please enter the following command to make an executable file (calend.exe) to run on the (CMD.exe) console for Windows 10 64-bit OS:

nmake -f makefile.mak T=calend

//*/


# define C_CODE_STDS
# include "./incl/decl/config.h"


char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {

auto char signed(*(w[])) = {
(char signed(*)) ("Sunday"),
(char signed(*)) ("Monday"),
(char signed(*)) ("Tuesday"),
(char signed(*)) ("Wednesday"),
(char signed(*)) ("Thursday"),
(char signed(*)) ("Friday"),
(char signed(*)) ("Saturday"),
(char signed(*)) (NIL)
};

auto char signed(*(m[])) = {
(char signed(*)) ("January"),
(char signed(*)) ("February"),
(char signed(*)) ("March"),
(char signed(*)) ("April"),
(char signed(*)) ("May"),
(char signed(*)) ("June"),
(char signed(*)) ("July"),
(char signed(*)) ("August"),
(char signed(*)) ("Septembre"),
(char signed(*)) ("Octobre"),
(char signed(*)) ("Novembre"),
(char signed(*)) ("Decembre"),
(char signed(*)) (NIL)
};

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
printf("\n%s", (strerror(errno)));
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
printf(" %s %d %s %d\n", (*(w+((*tp).tm_wday))), ((*tp).tm_mday), (*(m+((*tp).tm_mon))), (1900+((*tp).tm_year)));


/* **** Auxiliaries
printf("\n%s%Xh", ("and the flag of the Daylight Savings Time is: "), ((*(tp)).tm_isdst));
printf("\n%d%s", ((*tp).tm_yday), (" days since January 1"));
//*/


return(char signed) (NIL);
}
