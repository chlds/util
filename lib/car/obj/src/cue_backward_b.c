/* **** Notes

Cue

Remarks:
Refer at fn. backward_del
Return (0x01) on ready
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl cue_backward_b(signed char(*sym),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
b = (argp);
r = ct(b);
b = (r+(b));
r = ct_a_back(b);
if(!r) {
printf("%s \n","<< Error at fn. ct_a_back()");
return(0x00);
}
b = (b+(0x01+(~r)));
if(EQ(r,ct(argp))) return(0x01);
return(cue_backward_b_r(sym,b));
}
