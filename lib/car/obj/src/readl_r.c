# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl readl_r(signed char(*argp),signed(args/* fd */),signed(argt/* times */))) {
auto signed char *b;
if(!argp) return(argp);
if(args<(0x00)) return(argp);
if(!(--argt)) return(argp);
b = cat_xe(argp,readb(args),(void*)0x00);
if(!b) return(b);
return(readl_r(b,args,argt));
}
