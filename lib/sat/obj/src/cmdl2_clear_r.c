/* **** Notes

Commandlet to clear the console screen

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define SAT_H
# define STDIO_H
# define STDLIB_H
# include "./../../../config.h"

signed(__cdecl cmdl2_clear_r(SAT(*argp))) {

auto signed r;

system("cls");
printf("\n");

printf("%s \n", "Please type --exit or press <Ctrl-C> to stop.");
printf("%s \n", "Commandlet or text:");
printf("\n");

return(0x01);
}
