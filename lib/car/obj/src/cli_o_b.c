/*

Output one character or characters based on UTF-8 to the console screen in UTF-16

Remarks:
Return a number of bytes decoded out of the array
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cli_o_b(signed(arg),signed char(*argp))) {
auto signed short *w;
auto signed i,r;
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = decode_b(&i,argp);
if(!r) {
printf("%s \n","<< Error at fn. decode_b()");
return(0x00);
}
w = (0x00);
if(0x03<(r)) {
r = pair_wd(&w,i);
if(!(EQ(0x04,r))) {
rl(w);
printf("%s \n","<< Error at fn. pair_wd()");
return(0x00);
}
i = (*(0x01+(w)));
if(!(WEOF^(_putwch((wchar_t)*w)))) {
rl(w);
printf("%s \n","<< Error at fn. _putwch()");
return(0x00);
}}
if(!(WEOF^(_putwch((wchar_t)i)))) {
rl(w);
printf("%s \n","<< Error at fn. _putwch()");
return(0x00);
}
arg = (arg+(0x01+(~r)));
argp = (r+(argp));
if(w) {
embed_w(0x00,w);
rl(w);
w = (0x00);
}
return(r+(cli_o_b(arg,argp)));
}
