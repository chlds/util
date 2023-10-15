/* **** Notes

Extract and execute
*/


# define CAR_H
# define STDIO_H
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../config.h"

signed char *(__cdecl xtt(signed char(*param),signed char(*path),signed(argt),signed char *(__cdecl*f)(signed(args/* fd */),signed(argt)))) {
auto signed char *b;
auto signed *d;
auto signed ac;
auto signed pm;
auto signed fd;
auto struct _stati64 stats;
if(!param) return(0x00);
if(!path) return(0x00);
b = (0x00);
if(!(0x01+(_stati64(path,&stats)))) {
if(!(EQ(ENOENT,errno))) {
if(DBG) printf("%s %Xh \n","<< Error at fn. _stati64() with errno.",errno);
return(b);
}}
if(!(xt_parse(&pm,&ac,param))) {
if(DBG) printf("%s \n","<< Error at fn. xt_parse()");
return(b);
}
d = (0x00);
if(pm) d = (&pm);
fd = op_b(path,&ac,d,(void*)0x00);
if(!(0x01+(fd))) {
if(DBG) {
printf("%s %Xh \n","<< Error at fn. op_b() with errno.",errno);
if(EQ(EEXIST,errno)) printf("%s \n","Error: Already in existence");
}
return(b);
}
if(f) b = f(fd,argt);
if(!(0x01+(cl_b(fd)))) {
if(DBG) printf("%s %Xh \n","<< Error at fn. cl_b() with errno.",errno);
embed_l(0x00,b);
rl(b);
b = (0x00);
}
return(b);
}
