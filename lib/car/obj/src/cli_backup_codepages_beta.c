/* **** Notes

Backup the current code pages for console input/output.

Remarks:
The beta edition is for Win32 API.
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl cli_backup_codepages_beta(signed short(flag),cli_codepage_t(*argp))) {

auto signed io[0x02];
auto signed ci,co;
auto signed i,r;

if(!argp) return(0x00);

r = (CLI_RULE);
i = (0x02);
if(!flag) r = (-i+(r));

while(i) *(--i+(io)) = (--r);

// for input
ci = (*(i+(io)));
*(ci+(R(io,*argp))) = GetConsoleCP();
if(!(*(ci+(R(io,*argp))))) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetConsoleCP() with error no.",r,"or",r);
return(0x00);
}

// for output
i++;
co = (*(i+(io)));
*(co+(R(io,*argp))) = GetConsoleOutputCP();
if(!(*(co+(R(io,*argp))))) {
r = GetLastError();
printf("%s %d %s %Xh \n","<< Error at fn. GetConsoleOutputCP() with error no.",r,"or",r);
return(0x00);
}

if(DBG_D<(DBG)) printf("%s %d/%d \n","The current code pages for console input/output:",*(ci+(R(io,*argp))),*(co+(R(io,*argp))));

return(0x01);
}
