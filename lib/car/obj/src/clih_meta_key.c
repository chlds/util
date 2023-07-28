# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_meta_key(signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
b = (argp);
if(!(*b)) return(0x00);
// e.g.,
r = (CTRL_L);
return(ctrl_key(r,argp));
}
