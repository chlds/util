/*

Get a byte or bytes for one character based on UTF-8 out of the keyboard
*/


# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed(__cdecl ci_b_rrr(signed(arg),signed char(**argp))) {
auto signed r;
if(!arg) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(_kbhit())) return(0x00);
r = _getch();
r = (0xFF&(r));
if(!(cat_ab(argp,r))) {
printf("%s \n","<< Error at fn. cat_ab()");
return(0x00);
}
return(0x01+(ci_b_rrr(--arg,argp)));
}
