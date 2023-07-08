# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_o_rrr_r(signed short(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(WEOF^(_putwch((wchar_t)*argp)))) {
printf("%s \n","<< Error at fn. _putwch()");
return(0x00);
}
argp++;
return(0x01+(clih_o_rrr_r(argp)));
}
