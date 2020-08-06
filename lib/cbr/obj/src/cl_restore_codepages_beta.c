/* **** Notes

Restore code pages for console input/output.

Along with C and Windows libraries

Remarks:
The beta edition is for Win32 API.
Based on UTF-8
*/


# define CBR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cl_restore_codepages_beta(CLI_STAT(*argp))) {

/* **** DATA, BSS and STACK */
auto unsigned const UTF_8 = (65001);
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = SetConsoleCP(*(CLI_INDEX+R(io,R(codepage,*argp))));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}

r = SetConsoleOutputCP(*(CLI_LEAD+R(io,R(codepage,*argp))));
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}

if(CLI_DBG_D<(CLI_DBG)) printf("%s%d%s%d\n","The current code pages for console input/output: ",*(CLI_INDEX+R(io,R(codepage,*argp))),"/",*(CLI_LEAD+R(io,R(codepage,*argp))));

return(0x01);
}
