/* **** Notes

Set code pages for console input/output.

Along with C and Windows libraries

Remarks:
The beta edition is for Win32 API.
Based on UTF-8
*/


# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli.h"

signed(__cdecl cli_set_codepages_beta(unsigned(codepage_input),unsigned(codepage_output))) {

/* **** DATA, BSS and STACK */
auto unsigned const UTF_8 = (65001);
auto unsigned codepage_in;
auto unsigned codepage_out;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(codepage_input) {
r = SetConsoleCP(codepage_input);
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}}

if(codepage_output) {
r = SetConsoleOutputCP(codepage_output);
if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. SetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}}

if(CLI_DBG_D<(CLI_DBG)) {
codepage_in = GetConsoleCP();
if(!codepage_in) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleCP() with error no. ",r," or ",r);
return(0x00);
}
codepage_out = GetConsoleOutputCP();
if(!codepage_out) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleOutputCP() with error no. ",r," or ",r);
return(0x00);
}
printf("%s%d%s%d\n","The new current code pages for input/output: ",codepage_in,"/",codepage_out);
printf("%s\n","The original code pages for console input/output will be automatically restored after terminating this program.");
}

return(0x01);
}
