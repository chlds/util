# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_ctrl_key(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(0x00);
b = (argp);
if(!(*b)) return(0x00);
r = (signed) (mask&(*b));
return(ctrl_key(r,argp));
}
