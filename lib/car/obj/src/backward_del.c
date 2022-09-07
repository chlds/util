/* **** Notes

Delete

Remarks:
Return CTRL_Z or CTRL_W
Return (0x00) on failure
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl backward_del(signed char(*sym),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
if(!(*argp)) return(CTRL_W);
b = (argp);
r = ct(b);
b = (r+(b));
r = ct_a_back(b);
if(!r) {
printf("%s \n","<< Error at fn. ct_a_back()");
return(0x00);
}
b = (b+(0x01+(~r)));
if(EQ(r,ct(argp))) return(CTRL_Z);
if(!(EQ(SP,*b))) {
r = ct_a_back(b);
if(!r) {
printf("%s \n","<< Error at fn. ct_a_back()");
return(0x00);
}
b = (b+(0x01+(~r)));
if(EQ(SP,*b)) return(CTRL_Z);
}
return(CTRL_W);
}
