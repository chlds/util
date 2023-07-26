# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_o_21b_r(signed short(*argp))) {
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = (signed) (*argp);
if(!(clih_o_16b(r))) {
printf("%s \n","<< Error at fn. clih_o_16b()");
return(0x00);
}
argp++;
return(0x01+(clih_o_21b_r(argp)));
}
