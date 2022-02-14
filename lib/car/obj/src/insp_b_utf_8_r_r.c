/* **** Notes

Inspect the byte order.
*/


# define CAR
# include <stdio.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl insp_b_utf_8_r_r(signed char(*argp),signed(cache),signed(fd),size_t(arg))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto size_t s;

if(fd<(0x00)) return(0x00);
if(!cache) return(0x01);
if(!arg) return(0x01);

b = (argp);
r = rd_b(fd,b,sizeof(*b));
if(!r) return(0x00);
if(EQ(r,~0x00)) {
printf("%s %Xh \n","<< Error at fn. rd_b() with errno.",errno);
return(0x00);
}

s = (arg);
r = ct_a(b);
if(!r) return(0x00);

arg = (arg+(0x01+(~r)));
if(!(arg<(s))) return(0x00);

i = (r);
while(--i) {
r = rd_b(fd,b,sizeof(*b));
if(EQ(r,~0x00)) {
printf("%s %Xh \n","<< Error at fn. rd_b() with errno.",errno);
return(0x00);
}
if(!r) return(0x00);
if(!(EQ(0x80,nbytechar(*b)))) return(0x00);
}

DEC(cache);
b = (0x00);

return(insp_b_utf_8_r_r(argp,cache,fd,arg));
}
