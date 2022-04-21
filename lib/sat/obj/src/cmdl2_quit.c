/* **** Notes

Commandlet to quit

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define SAT_H
# define STDIO_H
# include "./../../../config.h"

unsigned(__stdcall cmdl2_quit(SAT(*argp))) {
return(cmdl2_exit(argp));
}
