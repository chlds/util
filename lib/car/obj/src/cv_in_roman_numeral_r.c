# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_in_roman_numeral_r(signed char(**di),signed char(***si),signed(*base),signed(arg))) {
auto signed i,r;
if(!di) return(0x00);
if(!si) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x01);
if(!(*si)) return(0x01);
AND(i,0x00);
r = (*base);
while(0x01) {
arg = (arg+(0x01+(~r)));
if(arg<(0x00)) break;
i++;
}
if(!(i<(ct_v_b(*si)))) return(0x00);
if(i) *di = catna_xe(*di,*(i+(*si)));
arg = (arg+(*base));
base++;
si++;
return(cv_in_roman_numeral_r(di,si,base,arg));
}
