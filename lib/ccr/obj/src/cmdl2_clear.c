/* **** Notes

Commandlet to clear the console screen

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define CCR
# include <stdio.h>
# include "../../../incl/config.h"

unsigned(__stdcall cmdl2_clear(SAT(*argp))) {

auto signed r;

if(!argp) printf("%s \n","<< Error at cmdl2_clear()");

INC(R(run,*argp));
r = cmdl2_clear_r(argp);
if(!r) printf("%s \n","<< Error at cmdl2_clear_r()");

DEC(R(run,*argp));

return(r);
}
