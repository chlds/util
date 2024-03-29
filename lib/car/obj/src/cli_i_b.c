/*

Get a byte or bytes for one character based on UTF-8 out of the keyboard

Remarks:
Call fn. rl() later
Refer at fn. cli_i
Call fn. _getch twice to read <Ctrl-@>
The first call returns (0x00) and the second call returns (0x03)..
Return the number of bytes for one character
Return (~0x00) if a meta key starting from (0x00) is detected
*/


# define CAR_H
# define STDIO_H
# include <conio.h>
# include "./../../../config.h"

signed(__cdecl cli_i_b(signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
if(*argp) return(0x00);
r = _getch();
if(!(cat_bb(argp,r))) {
printf("%s \n","<< Error at fn. cat_bb()");
return(0x00);
}
if(!(**argp)) return(cli_i_except(argp));
// for a meta key starting from (0x00).
r = ct_a(*argp);
if(!r) {
embed(0x00,*argp);
rl(*argp);
*argp = (0x00);
return(0x00);
}
return(0x01+(cli_i_b_r(--r,argp)));
}
