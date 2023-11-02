# define CK_H
# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_va_append_b(signed char(***args),signed char(**argp))) {
auto signed char ***d;
auto signed char **w;
auto signed char *b;
if(!args) return(0x00);
if(!argp) return(0x00);
d = (args);
w = (argp);
b = (*w);
if(!b) return(0x00);
cat_va_b(d,b,(void*)0x00);
// rl(b);
b = (0x00);
argp++;
return(0x01+(cat_va_append_b(args,argp)));
}
