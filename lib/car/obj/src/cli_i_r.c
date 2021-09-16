/*

Get a byte or bytes for one character based on UTF-8 out of the key board.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_i_r(signed char(**argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(c_kbhit())) return(0x00);

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
b = (b+(ct(b)));
*b = (r);
b++;
*b = (0x00);
b = (0x00);

return(0x01+(cli_i_r(argp)));
}
