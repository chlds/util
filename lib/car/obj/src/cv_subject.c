/* **** Notes

Map a subject on the RAM.

Remarks:
Release the memory block.
Refer at fn. cals_entry and fn. cals_parse.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_subject(signed char(*b),cals_event_t(*argp))) {

auto signed char *p;
auto signed i,r;
auto signed short mo;
auto signed short flag;

if(!b) return(0x00);
if(!argp) return(0x00);

// init.
R(w,*argp) = (0x00);
R(b,*argp) = (0x00);
OR(R(flag,*argp),CALS_NO_SUBJECT);

r = cv_ords(0x01/* from behind */,MONTH_V,&i,b);
// if(!r) return(0x00);
mo = (signed short) (i);
if(11<(mo)) return(0x00);
if(mo<(0x00)) AND(r,0x00);
if(!r) r = ct(b);

r++;
r = (r*(sizeof(*b)));
if(r<(0x00)) return(0x00);
p = (signed char(*)) alloc(r);
if(!p) return(0x00);

flag = (~CALS_NO_SUBJECT);
AND(R(flag,*argp),flag);

AND(flag,0x00);
i = (r);
r = ncpy(--i,p,b);
if(!r) flag++;
if(i^(r)) flag++;
if(flag) {
rl(p);
p = (0x00);
return(0x00);
}

rm_trailing_blanks(p);

R(b,*argp) = (p);
p = (0x00);

r++;

return(r);
}
