/* **** Notes

Map a subject on the RAM.

Remarks:
Release the memory block.
Refer at fn. cals_entry and fn. cals_parse.
//*/


# define CALEND
# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl cv_subject(signed char(*b),cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char **(mon[]) = {
/* CAPS_MONTH,MONTH, */CAPS_MON,MON,(signed char(**)) (0x00),
};

auto signed char *p;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!b) return(0x00);
if(!argp) return(0x00);

// init.
R(w,*argp) = (0x00);
R(b,*argp) = (0x00);
OR(R(flag,*argp),CALS_NO_SUBJECT);

r = ct2words(mon,&i,b);
if(!r) return(0x00);
if(i<(0x00)) i = ct(b);

r = (i);
i++;
i = (i*(sizeof(*b)));
if(i<(0x00)) return(0x00);
p = (signed char(*)) malloc(i);
if(!p) return(0x00);

flag = (~CALS_NO_SUBJECT);
AND(R(flag,*argp),flag);

AND(flag,0x00);
r = ncpy(p,b,r);
if(!r) flag++;
if(i^(0x01+(r))) flag++;
if(flag) {
free(p);
p = (0x00);
return(0x00);
}

rm_trailing_blanks(p);

R(b,*argp) = (p);
p = (0x00);

return(i);
}
