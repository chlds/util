/* **** Notes

Convert to time out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_hr_r(signed short(*hr),signed short(*mn),signed char(*argp))) {

auto signed char *b;
auto signed i,r;
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
if(!(cv_mn(mn,argp))) return(0x00);

b = (argp);
r = ctdn2(':',b);
if(r<(0x01)) return(0x00);

b = (r+(b));
AND(flag,0x00);
AND(i,0x00);
while(*(i+(pm))) {
cmpr_part(&r,b,*(i+(pm)));
if(!r) OR(flag,0x01);
i++;
}

// hr.
embed(0x00,b);
r = ct(argp);
if(!r) return(0x00);

--b;
if(--r) {
--b;
if(!(cf_no(b))) b++;
}

r = ct_digits(b);
if(r<(0x01)) return(0x00);

if(!(cv_da(0x0A,&r,b))) return(0x00);
if(r<(0x00)) r = (0x01+(~r));
if(23<(r)) return(0x00);
// also
if(flag) {
r = (r%(12));
r = (12+(r));
// if(!(r<(24))) return(0x00);
}

*hr = (r);

return(0x01);
}
