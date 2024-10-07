# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl ser_r(signed char(**args),signed char(*argp))) {
auto signed char *b;
if(!args) return(argp);
if(!(*args)) return(argp);
if(!argp) return(argp);
b = (0x00);
b = cath(argp,*args,b);
embed(0x00,argp);
rl(argp);
argp = (b);
args++;
return(ser_r(args,argp));
}
