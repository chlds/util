/*

Get a byte or Unicode bytes for one character based on UTF-8 out of the key board.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_i_r(signed(arg),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!(--arg)) return(0x00);
if(!argp) return(0x00);
if(*argp) return(0x00);

r = c_getch(0x00);
if(!(EOF^(r))) {
printf("%s\n","<< Error at fn. c_getch()");
return(0x00);
}

*argp = (r);
argp++;
*argp = (0x00);

return(0x01+(cli_i_r(arg,argp)));
}
