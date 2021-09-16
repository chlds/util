/*

I/O.

Remarks:
Return the number of bytes.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_k(void(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

/*
b = (0x00);
r = cli_i(&b);
if(!r) {
printf("%s\n","<< Error at fn. cli_i()");
return(r);
}

AND(flag,0x00);
r = (*b);
if(!(r&(~CTRL_MASK))) OR(flag,0x01);

if(flag) {
r = ctrl_fn(b,(void*)0x01);
}

if(!flag) {
r = cli_o(b);
if(!r) printf("%s \n","<< Error at fn. cli_o()");
}

embed(0x00,b);
rl(b);
b = (0x00);

return(r);
//*/

return(0x01);
}
