/*

Get a byte or bytes for one meta key started from (0x00).
*/


# define CAR
# include <conio.h>
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_i_except_r(signed char(**argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(_kbhit())) return(0x00);

r = _getch();
if(!(cat_bb(argp,r))) {
printf("%s \n","<< Error at fn. cat_bb()");
return(0x00);
}

AND(r,0x00);
NOT(r);

return(r+(cli_i_except_r(argp)));
}
