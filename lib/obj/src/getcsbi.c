/*

Retrieve information about the specified console screen buffer.
*/


# include <stdio.h>
# include "../../../incl/cli_w32.h"

signed(__cdecl getcsbi(CLI_W32_STAT(*argp))) {

auto signed i,r;

if(!argp) return(0x00);

if(!(*(CLI_OUT+((*argp).device)))) {
printf("%s\n","<< Get a handle to the standard output device.");
return(0x00);
}

r = GetConsoleScreenBufferInfo(*(CLI_OUT+((*argp).device)),&((*argp).csbi));

if(!r) {
r = GetLastError();
printf("%s%d%s%X\n","<< Error at fn. GetConsoleScreenBufferInfo() with error no. ",r," or ",r);
return(0x00);
}

return(0x01);
}
