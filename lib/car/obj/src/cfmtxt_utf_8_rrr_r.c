# define CAR_H
# include "./../../../config.h"

signed(__cdecl cfmtxt_utf_8_rrr_r(signed(args),signed(argp))) {
auto signed char *b;
auto signed r;
if(args<(0x00)) return(0x00);
if(!(0x00<(argp))) return(0x00);
b = (0x00);
if(!(cat_bb(&b,0x00))) return(0x00);
r = cfmtxt_utf_8_rrr_rr(b,args,argp);
embed(0x02,b);
rl(b);
b = (0x00);
return(r);
}
