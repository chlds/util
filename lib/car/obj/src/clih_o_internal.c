# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_o_internal(signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed(__cdecl**ff)(signed(arg),signed char(*argp));
auto signed(__cdecl*f)(signed(arg),signed char(*argp));
auto signed(__cdecl*(fn[]))(signed(arg),signed char(*argp)) = {
clih_o_ctrl_key,
clih_o_meta_key,
0x00,
};
if(!arg) return(0x00);
if(!argp) return(0x00);
b = (argp);
if(!(*b)) return(0x00);
ff = (fn);
if(0x01<(ct(b))) ff++;
f = (*ff);
if(!f) return(0x00);
return(f(arg,argp));
}
