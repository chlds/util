/* **** Notes

Store a backup file.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl wr_bkup_b(signed char(*extension),signed char(*argp))) {

auto signed char **v;
auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed char *(a[OBJS]);

if(!extension) return(0x00);
if(!argp) return(0x00);

v = (a);
r = init_b(0x00,OBJS,v);
if(!r) {
printf("%s \n","<< Error at fn. init_b()");
return(0x00);
}

b = (0x00);
r = cat_b(&b,argp,extension,(void*)0x00);
if(!r) {
printf("%s \n","<< Error at fn. cat_b()");
return(0x00);
}

*(0x01+(v)) = (argp);
*v = (b);
r = wr_ds_b(v);
if(!r) printf("%s \n","<< Error at fn. wr_ds_b()");

embed(0x00,b);
rl(b);
b = (0x00);

if(!(init_b(0x00,OBJS,v))) printf("%s \n","<< Error at fn. init_b()");

return(r);
}
