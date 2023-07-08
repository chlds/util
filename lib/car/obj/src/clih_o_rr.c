# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_o_rr(signed(arg))) {
if(arg<(0x01)) return(0x00);
if(!(WEOF^(_putwch((wchar_t)arg)))) {
printf("%s \n","<< Error at fn. _putwch()");
return(0x00);
}
return(0x01);
}
