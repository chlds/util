/*

Get a byte or bytes for one meta key started from (0x00)
*/


# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed(__cdecl ci_b_except_r(signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(_kbhit())) return(0x00);
r = _getch();
r = (0xFF&(r));
if(!(cat_ab(argp,r))) {
printf("%s \n","<< Error at fn. cat_ab()");
return(0x00);
}
return(0x01+(ci_b_except_r(argp)));
}
