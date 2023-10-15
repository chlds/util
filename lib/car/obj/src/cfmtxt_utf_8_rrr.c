# define CAR_H
# include "./../../../config.h"

signed(__cdecl cfmtxt_utf_8_rrr(signed(args/* fd */),void(*argp/* size to be checked */))) {
auto signed r;
if(args<(0x00)) return(0x00);
if(!argp) return(0x00);
r = (*(signed*)(argp));
return(cfmtxt_utf_8_rrr_r(args,r));
}
