/* **** Notes

Help
*/


# define SCHED_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl sched_help(void)) {
printf("\n");
printf("\t%s \n","Schedule.");
printf("\n");
printf("\t%s \n","Syntax:");
printf("\t%s \n","sched <APP> <TIME>");
printf("\n");
printf("\t%s \n","Examples:");
printf("\t%s \n","sched notepad.exe at 15:00");
printf("\n");
//*
printf("\t%s \n","Remarks:");
printf("\t%s \n","Pressing any key cancels the schedule.");
printf("\t%s \n","Enclose the entire path in double quotation marks if the path contains spaces.");
printf("\n");
//*/
printf("\t%s \n","GitHub: github.com/chlds/util/");
return(0x01);
}
