/* **** Notes

Backup the current code pages for console input/output.

Along with C and Windows libraries

Remarks:
The beta edition is for Win32 API.
Based on UTF-8
*/


# define R(D,S) ((S).D)
// A local macro function

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli.h"

signed(__cdecl cli_backup_codepages_beta(CLI_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto unsigned const UTF_8 = (65001);
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

*(CLI_IN+R(io,R(codepage,*argp))) = GetConsoleCP();
if(!(*(CLI_IN+R(io,R(codepage,*argp))))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

*(CLI_OUT+R(io,R(codepage,*argp))) = GetConsoleOutputCP();
if(!(*(CLI_OUT+R(io,R(codepage,*argp))))) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}

if(CLI_DBG_D<(CLI_DBG)) printf("%s%d%s%d\n","The current code pages for console input/output: ",*(CLI_IN+R(io,R(codepage,*argp))),"/",*(CLI_OUT+R(io,R(codepage,*argp))));

return(0x01);
}
