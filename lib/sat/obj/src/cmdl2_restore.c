/* **** Notes

Commandlet to restore the window

Remarks:
unsigned int(__stdcall fn(void(*argp))) for fn. _beginthreadex
*/


# define SAT_H
# define STDIO_H
# include "./../../../config.h"

unsigned(__stdcall cmdl2_restore(SAT(*argp))) {

auto signed r;

r = restore_window();

return(0x01);
}
