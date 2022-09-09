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
auto signed rear;
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
AND(rear,0x00);
OR(rear,le);
r = ct_a(b);
if(mbyt<(r)) rear = (mb);
if(EQ(HT,l)) rear = (ht);
if(EQ(SP,l)) rear = (sp);
if(sym) {
r = ord(sym,*b);
if(r<(ct(sym))) rear = (sy);
}
r = ct_a_back(b);
if(!r) {
printf("%s \n","<< Error at fn. ct_a_back()");
return(0x00);
}
b = (b+(0x01+(~r)));
return(cue_backward_b_rr(rear,sym,b));
}
