# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_undo(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(0x00);
b = (argp);
r = ct(b);
if(!r) return(0x01);
b = (r+(b));
r = ct_a_back(b);
if(!r) {
printf("%s \n","<< Error at fn. ct_a_back()");
return(0x00);
}
b = (b+(0x01+(~r)));
if(!b) return(0x00);
if(!(*b)) return(0x00);
embed(0x00,b);
return(0x01);
}
