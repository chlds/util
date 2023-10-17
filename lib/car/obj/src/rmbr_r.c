# define CAR_H
# include "./../../../config.h"

signed(__cdecl rmbr_r(signed(arg),signed char(*argp))) {
auto signed r;
if(!(0x00<(arg))) return(0x00);
if(!argp) return(0x00);
AND(r,0x00);
if(EQ(HT,cara_b(argp))) OR(r,0x01);
if(EQ(LF,cara_b(argp))) OR(r,0x01);
if(EQ(CR,cara_b(argp))) OR(r,0x01);
if(EQ(SP,cara_b(argp))) OR(r,0x01);
if(!r) return(r);
*argp = (0x00);
return(r+(rmbr_r(--arg,--argp)));
}
