# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl seyl_r(signed(argt),signed char(*args),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed mask = (0xFF);
if(!(0x00<(argt))) return(argp);
b = (0x00);
r = (signed)(mask&(*args));
argp = cat_xe(argp,ceyl(r),b);
--argt;
args++;
return(seyl_r(argt,args,argp));
}
