/* **** Notes

Convert to a month, day and year out of characters.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_date(signed char(*b),cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char **(mon[]) = {
/* CAPS_MONTH,MONTH, */CAPS_MON,MON,(signed char(**)) (0x00),
};

auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!b) return(0x00);
if(!argp) return(0x00);

// init.
i = (CALS_DATE);
while(i) *(--i+(R(date,*argp))) = (0x00);
AND(R(flag,*argp),0x00);

r = ct2words(mon,&i,b);
if(!r) return(0x00);
if(i<(0x00)) return(0x00);

b = (i+(b));
r = cv_mo(CALS_MO+(R(date,*argp)),b);
if(!r) return(0x00);
if(!(-0x01<(*(CALS_MO+(R(date,*argp)))))) return(0x00);

r = cv_da_first(0x0A,&i,b);
if(!r) return(0x00);
if(31<(i)) return(0x00);
if(0x00<(i)) *(CALS_DI+(R(date,*argp))) = (i);
else return(0x00);

b = (r+(b));
r = cv_da_first(0x0A,&i,b);
if(!r) return(0x00);
if(0x00<(i)) *(CALS_YR+(R(date,*argp))) = (i);
else return(0x00);

return(0x01);
}
