/* **** Notes

Check the environment variables

*/



# define C_CODE_STDS

# include "./../../../incl/config.h"

/*
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif
//*/



/* **** **** entry point */

char signed(__cdecl main(char signed(argc), char signed(**argv), char signed(**envp))) {


/* **** **** DATA */

auto const int signed(QUANTUM) = (int signed) (0x10);
auto const int signed(DELAY) = (int signed) (2*(QUANTUM));
// in milli-seconds

auto int signed(i);
auto char signed(c);


/* **** **** CODE/TEXT */

printf("\n");
printf("%s\n", ("The arguments:"));

XOR(i, i);

while(*(argv+(i))) {
printf((char(*)) ("%3d%s%s\n"), (int signed) (i), (char(*)) (".  "), (char(*)) (*(argv+(i++))));
}


printf("\n");
printf("%s\n", ("The environment variables:"));

XOR(i, i);

while(*(envp+(i))) {
printf((char(*)) ("%3d%s%s\n"), (int signed) (i), (char(*)) (".  "), (char(*)) (*(envp+(i++))));
// e.g., label/fn. signal, alarm, pause or.. to sleep
Sleep((int unsigned) (DELAY));
}


XOR(c, c);
return(char signed) (c);
}
