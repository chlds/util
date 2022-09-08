/* **** Notes

Cue
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cue_backward_b_r(signed char(*sym),signed char(*argp))) {
auto signed char *b;
auto signed l;
auto signed r;
auto signed end;
auto signed sp = (0x01);
auto signed sy = (0x02);
auto signed le = (0x04);
if(!argp) return(0x00);
b = (argp);
l = (0xFF&(*b));
if(EQ(HT,l)) return(0x01);
//
AND(end,0x00);
if(EQ(SP,l)) OR(end,sp);
if(!end) {
if(sym) {
r = ord(sym,*b);
if(r<(ct(sym))) OR(end,sy);
}}
if(!end) OR(end,le);
//
r = ct_a_back(b);
if(!r) {
printf("%s \n","<< Error at fn. ct_a_back()");
return(0x00);
}
b = (b+(0x01+(~r)));
return(cue_backward_b_rr(end,sym,b));
}
