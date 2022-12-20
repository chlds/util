/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_in_roman_r(signed(arg),signed char(**argp))) {
auto signed a,r;
auto signed n = (1000);
auto signed char *(m[]) = {
"","M","MM","MMM",0x00,
};
if(!argp) return(0x00);
if(*argp) return(0x00);
AND(a,0x00);
r = (arg);
while(0x01) {
r = (r+(0x01+(~n)));
if(r<(0x00)) break;
a++;
}
if(!(a<(ct_v_b(m)))) return(0x00);
if(a) cat_b(argp,*(a+(m)),(void*)0x00);
r = (n+(r));
return(cv_in_roman_rr(r,argp));
}
