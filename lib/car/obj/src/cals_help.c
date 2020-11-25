/* **** Notes

Help.

Remarks:
Currently under construction
//*/


# define C_CODE_STDS
# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_help(void)) {

/* **** DATA, BSS and STACK */
auto time_t t;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
AND(flag,0x00);

printf("\n");
printf("\t%s \n","cals.exe [flags[FILE]] [months]");

printf("\n");
printf("\t%s \n","Flags:");
printf("\t%s \n","e Entry of events to be stored at file <event.csv> in directory ~/.cals/");
printf("\t%s \n","h Help");
printf("\t%s \n","l <FILE> Load a CSV - comma-separated values - file for events");
printf("\t%s \n","n Load no file for events");
printf("\t%s \n","v Verbose");

printf("\n");
printf("\t%s \n","Example:");
printf("\t%s \n","cals.exe ev Coffee with T Feb. 14, 2021, at 15:00");
printf("\t%s \n","cals.exe v 12");
printf("\t%s \n","cals.exe -6");
printf("\t%s \n","cals.exe n");
printf("\t%s \n","cals.exe");

return(0x01);
}
