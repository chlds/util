/* **** Notes

Set code pages for console input and output.

Along with C and Windows libraries

Remarks:
Based on UTF-8
*/


# define CBR
# define CLI_W32

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cli_kb_beta(CLI_W32_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto unsigned const UTF_8 = (65001);

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
// quit
if(!(CLI_QUIT^(R(flag,R(ty,*argp))))) return(0x01);

r = cli_backup_codepages_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_backup_codepages_beta()");
return(0x00);
}

r = cli_set_codepages_beta(UTF_8/* input */,0x00/* output */);
if(!r) {
printf("%s\n","<< Error at fn. cli_set_codepages_beta()");
return(0x00);
}


if(CLI_DBG_D<(CLI_DBG)) {
Sleep(1000);
system("cls");
}


p = (*(CLI_BASE+(R(base,R(roll,R(ty,*argp))))));
i = (*(CLI_BASE+(R(size,R(roll,R(ty,*argp))))));

/* recur */
r = cli_io_beta(p,i,argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_io_beta()");
return(0x00);
}


if(CLI_MONO) {
Sleep(250);
system("cls");
}


r = cli_restore_codepages_beta(argp);
if(!r) {
printf("%s\n","<< Error at fn. cli_restore_codepages_beta()");
return(0x00);
}

return(0x01);
}
