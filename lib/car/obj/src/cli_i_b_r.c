/*

Get a byte or bytes for one character based on UTF-8 out of the key board.
*/


# define CAR
# include <conio.h>
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_i_b_r(signed(arg),signed char(**argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(_kbhit())) return(0x00);

r = _getch();
if(!(concatenate(0x01,argp,0x00))) {
printf("%s \n","<< Error at fn. concatenate()");
return(0x00);
}

b = (*argp);
b = (b+(ct(b)));
*b = (r);
b++;
*b = (0x00);
b = (0x00);

return(0x01+(cli_i_b_r(--arg,argp)));
}
