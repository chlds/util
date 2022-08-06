/*

Get a byte or bytes for one meta key started from (0x00)
*/


# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed(__cdecl cli_i_except_r(signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(_kbhit())) return(0x00);
r = _getch();
if(!(cat_ab(argp,r))) {
printf("%s \n","<< Error at fn. cat_ab()");
return(0x00);
}
AND(r,0x00);
NOT(r);
return(r+(cli_i_except_r(argp)));
}
