# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_io_rrr(signed(arg),signed char(**argp))) {
auto signed char *b;
auto signed r;
if(!arg) return(0x00);
if(!argp) return(0x00);
b = clih_i();
if(!b) return(0x00);
if(clih_internal(b)) return(clih_rl(b,clih_ctrl_meta_key));
cat_b(argp,b,(void*)0x00);
embed(0x00,b);
rl(b);
b = (0x00);
return(CTRL_KEYS);
}
