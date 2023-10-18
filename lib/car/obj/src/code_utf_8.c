# define CAR_H
# include "./../../../config.h"

signed(__cdecl code_utf_8(signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
b = (argp);
r = code_utf_8_r(b);
if(!(EQ(r,ct(b)))) return(0x00);
b = (0x00);
return(r);
}
