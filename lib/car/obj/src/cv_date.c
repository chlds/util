/* **** Notes

Convert to a month, day and year out of characters.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_date(signed char(*b),cals_event_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char **(mon[]) = {
/* CAPS_MONTH,MONTH, */CAPS_MON,MON,(signed char(**)) (0x00),
};

auto struct tm *tp;
auto time_t t;
auto signed i,r;
auto signed short mo;
auto signed short flag;

/* **** CODE/TEXT */
if(!b) return(0x00);
if(!argp) return(0x00);

// init.
i = (CALS_DATE);
while(i) *(--i+(R(date,*argp))) = (0x00);

// default
time(&t);
tp = localtime(&t);
*(CALS_YR+(R(date,*argp))) = (1900+(R(tm_year,*tp)));
*(CALS_MO+(R(date,*argp))) = (R(tm_mon,*tp));
*(CALS_DI+(R(date,*argp))) = (R(tm_mday,*tp));
OR(R(flag,*argp),CALS_DATE_TODAY);

r = ct2words(mon,&i,b);
if(!r) return(0x00);
if(i<(0x00)) return(0x00);

flag = (~CALS_DATE_TODAY);
AND(R(flag,*argp),flag);

b = (i+(b));
r = cv_mo(&mo,b);
if(!r) return(0x00);
if(11<(mo)) return(0x00);
if(-0x01<(mo)) *(CALS_MO+(R(date,*argp))) = (mo);

r = cv_da_first(0x0A,&i,b);
if(!r) return(0x00);
if(31<(i)) return(0x00);
if(0x00<(i)) *(CALS_DI+(R(date,*argp))) = (i);
else return(0x00);

b = (r+(b));
if(!(*b)) return(0x01);
if(!(':'^(*b))) return(0x00);

r = cv_da_first(0x0A,&i,b);
// if(!r) return(0x00);
if(1899<(i)) *(CALS_YR+(R(date,*argp))) = (i);

return(0x01);
}
