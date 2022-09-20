/* **** Notes

I/O

Remarks:
Call fn. rl later
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl kb(signed(colm),signed(arg),signed char(*sy))) {
auto signed r;
r = kb_r(colm,arg,sy);
return(r);
}
