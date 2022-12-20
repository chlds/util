/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_in_roman_rr(signed(arg),signed char(**argp))) {
auto signed a,r;
auto signed n = (100);
auto signed char *(c[]) = {
"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM",0x00,
};
if(!argp) return(0x00);
if(arg<(0x01)) return(0x01);
AND(a,0x00);
r = (arg);
while(0x01) {
r = (r+(0x01+(~n)));
if(r<(0x00)) break;
a++;
}
if(!(a<(ct_v_b(c)))) return(0x00);
if(a) cat_b(argp,*(a+(c)),(void*)0x00);
r = (n+(r));
return(cv_in_roman_rrr(r,argp));
}
