/*

Cue
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cue_pg_rr(signed short(arg),signed char(*sym),pg_t(*argp))) {
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed short ht = (0x01);
auto signed short sp = (0x02);
auto signed short sy = (0x04);
auto signed short le = (0x08);
if(!arg) return(0x00);
// if(!sym) return(0x00);
if(!argp) return(0x00);
AND(flag,0x00);
b = (*(CLIH_BASE+(R(b,*argp))));
if(!b) return(0x00);
if(!(*b)) return(0x00);
if(EQ(HT,*b)) return(0x00);
if(EQ(SP,*b)) OR(flag,sp);
if(sym) {
r = ord(sym,*b);
if(r<(ct(sym))) OR(flag,sy);
}
if(!flag) OR(flag,le);
if(!(EQ(arg,flag))) return(0x00);
argp = (*(CLIH_DI+(R(p,*argp))));
return(0x01+(cue_pg_rr(arg,sym,argp)));
}
