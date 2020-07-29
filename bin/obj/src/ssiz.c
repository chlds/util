/* **** Notes

Look the stack size

e.g.,
> cl -c ssiz.c
> link -stack:8192000 ssiz.obj

*/


# define C_CODE_STDS
# include "./../../../lib/incl/config.h"
# include <windows.h>


/* **** **** entry point */
char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {

/* **** **** DATA */
auto int long long unsigned(diff), (low), (high);
auto char signed(c);

/* **** **** CODE/TEXT */
printf("\n");
printf("%s%Xh\n", ("_WIN32_WINNT is: "), (_WIN32_WINNT));

if(_WIN32_WINNT<(0x0602)) return(NIL);

GetCurrentThreadStackLimits(&low, (&high));

printf("\n");
printf("%15I64Xh%s\n", (low), (" : High Limit"));
printf("%15I64Xh%s\n", (high), (" : Low Limit"));

diff = (high+(1+(~(low))));

printf("\n");
printf("%s\n", ("The stack size allocated by the system for this program:"));

printf("\n");
printf("%15I64Xh%s", (diff), (" ("));
printf("%I64d%s\n", (diff), (" Bytes)"));

return(XOR(c, c));
}
