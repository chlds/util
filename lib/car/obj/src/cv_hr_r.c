/* **** Notes

Convert to time out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_hr_r(signed short(*hr),signed short(*mn),signed char(*argp))) {

auto signed char *b;
auto signed i,l,r;
auto signed short flag;
auto signed char *(pm[]) = {
"pm",
"p.m.",
"PM",
"P.M.",
0x00,
};

if(!hr) return(0x00);
if(!mn) return(0x00);
if(!argp) return(0x00);

b = (argp);
r = ctdn2(':',b);
if(r<(0x02)) return(0x00);

b = (r+(b));
if(!(*b)) return(0x00);
if(!(*(0x01+(b)))) return(0x00);
if(!(*(0x02+(b)))) return(0x00);

AND(flag,0x00);
AND(l,0x00);
while(*(pm+(l))) {
r = cmpr_part(&i,b,*(pm+(l)));
if(!i) OR(flag,0x01);
l++;
}

embed(0x00,0x03+(b));
b++;
r = ct_digits(b);
if(r<(0x02)) return(0x00);

// mn.
r = cv_da(0x0A,&i,b);
if(!r) return(0x00);
if(59<(i)) return(0x00);
if(i<(0x00)) return(0x00);
*mn = (i);

// hr.
--b;
embed(0x00,b);
b = (b+(~0x01));
r = ct_digits(b);
if(r<(0x02)) {
b++;
r = ct_digits(b);
if(r<(0x01)) return(0x00);
}

r = cv_da(0x0A,&i,b);
if(!r) return(0x00);
if(i<(0x00)) i = (0x01+(~i));
if(23<(i)) return(0x00);
// also
if(flag) {
i = (12+(i));
if(!(i<(24))) return(0x00);
}

*hr = (i);

return(0x01+(cv_hr_r(hr,mn,argp)));
}
