/* **** Notes

Cue
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cue_backward_b_rr(signed(arg),signed char(*sym),signed char(*argp))) {
auto signed char *b;
auto signed l;
auto signed r;
auto signed symb;
auto signed sp = (0x01);
auto signed sy = (0x02);
auto signed le = (0x04);
if(!argp) return(0x00);
b = (argp);
l = (0xFF&(*b));
//
if(EQ(HT,l)) return(0x01);
if(EQ(SP,l)) {
if(arg&(sy|(le))) return(0x01);
}
AND(symb,0x00);
if(sym) {
r = ord(sym,*b);
if(r<(ct(sym))) {
OR(symb,0x01);
if(EQ(le,arg)) return(0x01);
}}
//
if(!symb) {
if(EQ(sy,arg)) return(0x01);
}
return(0x00);
}
