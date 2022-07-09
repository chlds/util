/* **** Notes

Convert to time out of characters
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_hr_light_r(signed short(*hr),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed short flag;
auto signed meridiem = (12);
auto signed char *(am[]) = {
"am","a.m.","AM","A.M.",0x00,
};
auto signed char *(pm[]) = {
"pm","p.m.","PM","P.M.",0x00,
};
if(!hr) return(0x00);
if(!argp) return(0x00);
AND(flag,0x00);
b = (argp);
r = ctdn_v(am,b);
r = (r+(0x01+(~(ctdn_v(pm,b)))));
if(!r) return(0x00);
if(r<(0x00)) OR(flag,0x01);
if(flag) r = ctdn_v(pm,b);
else r = ctdn_v(am,b);
b = (r+(b));
embed(0x00,b);
r = cv_hr_light_rr(hr,argp);
if(!r) return(0x00);
r = (*hr);
if(23<(r)) return(0x00);
// also
if(!flag) {
if(EQ(meridiem,r)) AND(r,0x00);
}
else {
r = (r%(meridiem));
r = (meridiem+(r));
}
*hr = (r);
return(0x01);
}
