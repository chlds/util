/* **** Notes

Restore code pages for console input/output.

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

signed(__cdecl cli_restore_codepages_beta(signed short(flag),cli_codepage_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed io[0x02];
auto signed ci,co;
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = (CLI_BOIL);
i = (0x02);
if(!flag) r = (-i+(r));

while(i) *(--i+(io)) = (--r);

// for input
ci = (*(i+(io)));
r = SetConsoleCP(*(ci+(R(io,*argp))));
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetConsoleCP() with error no.",r,"or",r);
return(0x00);
}

// for output
i++;
co = (*(i+(io)));
r = SetConsoleOutputCP(*(co+(R(io,*argp))));
if(!r) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. SetConsoleOutputCP() with error no.",r,"or",r);
return(0x00);
}

if(DBG_D<(DBG)) printf("%s %d/%d \n","The current code pages for console input/output:",*(ci+(R(io,*argp))),*(co+(R(io,*argp))));

return(0x01);
}
