/* **** Notes

Backup.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl backup_f(signed char(*extension),signed char(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!extension) return(0x00);
if(!argp) return(0x00);

b = (0x00);
r = cat_b(&b,argp,extension,(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}

r = cpy_f(b,argp);
if(!r) printf("%s \n","<< Error at fn. cpy_f()");

embed(0x00,b);
rl(b);
b = (0x00);

return(r);
}
