# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_o_16b(signed(arg))) {
auto signed short w;
auto signed mask = (0xFFFF);
if(arg<(0x01)) return(0x00);
w = (signed short) (mask&(arg));
if(!(WEOF^(_putwch((wchar_t)w)))) {
printf("%s \n","<< Error at fn. _putwch()");
return(0x00);
}
return(0x01);
}
