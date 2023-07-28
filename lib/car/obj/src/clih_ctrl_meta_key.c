# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_ctrl_meta_key(signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed(__cdecl**ff)(signed char(*argp));
auto signed(__cdecl*f)(signed char(*argp));
auto signed(__cdecl*(fn[]))(signed char(*argp)) = {
clih_ctrl_key,
clih_meta_key,
0x00,
};
if(!argp) return(0x00);
b = (argp);
if(!(*b)) return(0x00);
ff = (fn);
if(0x01<(ct(b))) ff++;
f = (*ff);
if(!f) return(0x00);
return(f(argp));
}
