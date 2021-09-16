/*

Get a byte or bytes for one character based on UTF-8 out of the key board.

Remarks:
Call fn. rl() later.
Return the number of bytes for one character.

Notes:
Call fn. _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_i(signed char(**argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto signed SEQ_FLAG = (0x80);

if(!argp) return(0x00);
if(*argp) return(0x00);

r = c_getch(0x00);
if(!(EOF^(r))) {
printf("%s\n","<< Error at fn. c_getch()");
return(0x00);
}

if(!(concatenate(0x01,argp,0x00))) {
printf("%s \n","<< Error at fn. concatenate()");
return(0x00);
}

b = (*argp);
*b = (r);
b++;
*b = (0x00);
b = (0x00);

return(0x01+(cli_i_r(argp)));
}
