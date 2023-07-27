# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_internal(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!argp) return(0x00);
b = (argp);
if(!(*b)) return(0x00);
r = (signed) (mask&(*b));
if(!(r<(CTRL_KEYS))) return(0x00);
return(0x01);
}
