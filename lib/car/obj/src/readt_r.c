# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl readt_r(signed char(*argp),signed(args/* fd */),signed(argt/* letters */))) {
auto signed char *b;
if(!argp) return(argp);
if(args<(0x00)) return(argp);
if(!(--argt)) return(argp);
b = readl(args);
if(!b) return(argp);
b = cat_xe(argp,b,(void*)0x00);
if(!b) return(b);
return(readt_r(b,args,argt));
}
