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
printf("\t%s \n","cals.exe [flag[file]] [months]");

printf("\n");
printf("\t%s \n","Flags:");
printf("\t%s \n","e Entry events at ~/.cals/event.csv");
printf("\t%s \n","h Help");
printf("\t%s \n","l <file> Load a csv file for events");
printf("\t%s \n","v Verbose");

printf("\n");
printf("\t%s \n","Example:");
printf("\t%s \n","cals.exe e[v] <subject> [date] [time]");
printf("\t%s \n","cals.exe v -1");
printf("\t%s \n","cals.exe 6");
printf("\t%s \n","cals.exe");

return(0x01);
}
