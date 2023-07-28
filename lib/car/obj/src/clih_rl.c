# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_rl(void(*argp),signed(__cdecl*f)(void(*argp)))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
if(!f) return(0x00);
b = (signed char *) (argp);
r = f(b);
embed(0x00,b);
rl(b);
b = (0x00);
return(r);
}
