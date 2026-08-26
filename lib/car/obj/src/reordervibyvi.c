# define CAR_H
# include "./../../../config.h"

signed(__cdecl reordervibyvi(signed(args),signed(argp))) {
auto signed r;
auto signed a = (0x06);
//*
if(!(0x00<(--argp))) return(extractlow6bits(args));
r = extractlow6bits(shr_xxe(args,a*(argp)));
//*/
/*
if(!(0x00<(--argp))) return(args);
r = extractlow6bits(shr_xxe(args,a*(argp)));
args = (args&(gnb(a*(argp))));
//*/
return(combinewithlow6bits(r,reordervibyvi(args,argp)));
}
