# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_o_r(signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!arg) return(0x00);
if(!argp) return(0x00);
b = (argp);
if(!(*b)) return(0x00);
r = (signed) (mask&(*b));
if(EQ(DEL,r)) r = (BS);
*b = (signed char) (mask&(r));
return(clih_o_rr(arg,argp));
}
