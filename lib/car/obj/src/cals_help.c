/* **** Notes

Help.

Remarks:
Currently under construction
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_help(cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto time_t t;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

AND(flag,0x00);

printf("\n");
printf("\t%s \n","cals.exe [flags[FILE]] [months]");

printf("\n");
printf("\t%s \n","Flags:");
printf("\t%s \n","e Entry of events to be stored at file <event.csv> in directory ~/.cals/");
printf("\t%s \n","h Help");
printf("\t%s \n","l <FILE> Load a CSV - comma-separated values - file for events");
printf("\t%s \n","m Display in the 12-hour clock");
printf("\t%s \n","n Load no file for events");
printf("\t%s \n","v Verbose");

printf("\n");
printf("\t%s \n","Example:");
printf("\t%s \n","cals.exe ev Conference second Tue. of every month, Sep. 2021, at 14:00");
printf("\t%s \n","cals.exe ev 20-minute workout Sep. 1, at 5:50, every day");
printf("\t%s \n","cals.exe ev Coffee with T Feb. 14, 2021, at 15:00");
printf("\t%s \n","cals.exe e A Happy New Year Jan. 1, every year");
printf("\t%s \n","cals.exe v 12");
printf("\t%s \n","cals.exe -6");
printf("\t%s \n","cals.exe n");
printf("\t%s \n","cals.exe");
printf("\t%s \n","cals.exe ev Coffee \"&\" Sandwiches at 12:00");

printf("\n");
printf("\t%s \n","Remarks:");
printf("\t%s \n","Ampersands on the command line should be enclosed in double quotation marks.");

printf("\n");
printf("\t%s \n","GitHub: github.com/chlds/util/");

printf("\n");
printf("\t%s \n","Version 0.8");

OR(R(flag,*argp),CALS_QUIT);

return(0x01);
}
