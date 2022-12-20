/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_in_roman_rrrr(signed(arg),signed char(**argp))) {
auto signed a,r;
auto signed n = (1);
auto signed char *(i[]) = {
"","I","II","III","IV","V","VI","VII","VIII","IX",0x00,
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
if(!(a<(ct_v_b(i)))) return(0x00);
if(a) cat_b(argp,*(a+(i)),(void*)0x00);
return(0x01);
}
