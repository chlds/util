/* **** Notes

Commandlet to minimise the window

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define SAT_H
# define STDIO_H
# include "./../../../config.h"

unsigned(__stdcall cmdl2_min(SAT(*argp))) {

auto signed r;

r = min_window();

return(0x01);
}
