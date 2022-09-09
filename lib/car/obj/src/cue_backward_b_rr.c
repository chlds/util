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
auto signed fore;
auto signed mbyt = (0x02);
auto signed ht = (0x01);
auto signed sp = (0x02);
auto signed sy = (0x04);
auto signed le = (0x08);
auto signed mb = (0x10);
if(!argp) return(0x00);
b = (argp);
l = (0xFF&(*b));
// if(EQ(HT,l)) return(0x01);
AND(fore,0x00);
OR(fore,le);
r = ct_a(b);
if(mbyt<(r)) fore = (mb);
if(EQ(HT,l)) fore = (ht);
if(EQ(SP,l)) fore = (sp);
if(sym) {
r = ord(sym,*b);
if(r<(ct(sym))) fore = (sy);
}
return(cue_backward_b_rrr(fore,arg));
}
