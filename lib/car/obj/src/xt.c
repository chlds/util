/* **** Notes

Extract and execute.
*/


# define C_CODE_STDS
# define C_AS
# define CAR
# include "./../../../incl/config.h"

signed(__cdecl xt(signed char(*param),signed char(*path),void(*argp),signed(__cdecl*f)(signed(arg),void(*argp)))) {

auto struct stat stats;
auto signed ac;
auto signed pm;
auto signed i,r;
auto signed fd;
auto signed short flag;

if(!param) return(0x00);
if(!path) return(0x00);
// if(!argp) return(0x00);
// if(!f) return(0x00);

r = stat(path,&stats);
if(EQ(r,~0x00)) {
if(!(EQ(ENOENT,errno))) {
printf("%s \n","<< Error at fn. stat()");
return(0x00);
}}

r = xt_parse(&pm,&ac,param);
if(!r) {
printf("%s \n","<< Error at fn. xt_parse()");
return(0x00);
}

if(pm) fd = op_b(path,&ac,&pm,(void*)0x00);
else fd = op_b(path,&ac,(void*)0x00);
if(EQ(fd,~0x00)) {
printf("%s \n","<< Error at fn. op_b()");
return(0x00);
}

AND(r,0x00);
if(!f) OR(r,0x01);
if(f) r = f(fd,argp);

AND(i,0x00);
NOT(i);
if(EQ(i,cl_b(fd))) {
printf("%s \n","<< Error at fn. cl_b()");
return(0x00);
}

return(r);
}
