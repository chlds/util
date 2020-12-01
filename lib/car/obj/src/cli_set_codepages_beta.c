/* **** Notes

Set code pages for console input/output.

Along with C and Windows libraries

Remarks:
The beta edition is for Win32 API.
Based on UTF-8
*/


# define CAR

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl cli_set_codepages_beta(signed(codepage_input),signed(codepage_output))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(codepage_input) {
r = SetConsoleCP(codepage_input);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetConsoleCP() with error no.",r,"or",r);
return(0x00);
}}

if(codepage_output) {
r = SetConsoleOutputCP(codepage_output);
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetConsoleOutputCP() with error no.",r,"or",r);
return(0x00);
}}

if(DBG_D<(DBG)) {
codepage_input = GetConsoleCP();
if(!codepage_input) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetConsoleCP() with error no.",r,"or",r);
return(0x00);
}
codepage_output = GetConsoleOutputCP();
if(!codepage_output) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetConsoleOutputCP() with error no.",r,"or",r);
return(0x00);
}
printf("%s %d/%d \n","The new current code pages for input/output:",codepage_input,codepage_output);
printf("%s \n","The original code pages for console input/output will be automatically restored after terminating this program.");
}

return(0x01);
}
