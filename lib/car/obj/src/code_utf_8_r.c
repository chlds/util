# define CAR_H
# include "./../../../config.h"

signed(__cdecl code_utf_8_r(signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (argp);
r = caract(cara(cara_b(b)));
if(!r) return(r);
if(--r) {
r = code_utf_8_rr(r,argp);
if(!r) return(r);
argp = (r+(argp));
}
argp++;
r++;
return(r+(code_utf_8_r(argp)));
}
