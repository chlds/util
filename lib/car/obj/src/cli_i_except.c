/*

Get a byte or bytes for one character based on UTF-8 out of the keyboard

Remarks:
Call fn. rl() later
Refer at fn. cli_i_b
Call fn. _getch twice to read <Ctrl-@>
The first call returns (0x00) and the second call returns (0x03)..
Return the number of bytes for one meta key starting from (0x00)
*/


# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed(__cdecl cli_i_except(signed char(**argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(**argp) return(0x00);
r = _getch();
if(!(cat_ab(argp,r))) {
printf("%s \n","<< Error at fn. cat_ab()");
return(0x00);
}
AND(r,0x00);
NOT(r);
return(r+(cli_i_except_r(argp)));
}
