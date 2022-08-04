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

signed(__cdecl xt(signed char(*param),signed char(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp)))) {
auto signed ac;
auto signed pm;
auto signed r;
auto signed fd;
auto struct _stati64 stats;
if(!param) return(0x00);
if(!path) return(0x00);
// if(!argp) return(0x00);
// if(!f) return(0x00);
if(!(0x01+(_stati64(path,&stats)))) {
if(!(EQ(ENOENT,errno))) {
printf("%s %Xh \n","<< Error at fn. _stati64() with errno.",errno);
return(0x00);
}}
if(!(xt_parse(&pm,&ac,param))) {
printf("%s \n","<< Error at fn. xt_parse()");
return(0x00);
}
if(pm) fd = op_b(path,&ac,&pm,(void*)0x00);
else fd = op_b(path,&ac,(void*)0x00);
if(EQ(fd,~0x00)) {
printf("%s %Xh \n","<< Error at fn. op_b() with errno.",errno);
if(EQ(EEXIST,errno)) printf("%s \n","Error: Already in existence");
return(0x00);
}
AND(r,0x00);
if(f) r = f(fd,argp);
else OR(r,0x01);
if(!(0x01+(cl_b(fd)))) {
printf("%s %Xh \n","<< Error at fn. cl_b() with errno.",errno);
return(0x00);
}
return(r);
}
