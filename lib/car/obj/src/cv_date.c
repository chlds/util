/* **** Notes

Convert to a month, day and year out of characters.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_date(cals_t(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

// init.
i = (CALS_DATE);
while(i) *(--i+(R(date,*di))) = (0x00);
R(flag,*di) = (0x00);

r = cv_mo(CALS_MO+(R(date,*di)),si);
if(!r) return(0x00);
if(!(-0x01<(*(CALS_MO+(R(date,*di)))))) return(0x00);

r = cv_da_first(0x0A,&i,si);
if(!r) return(0x00);
if(31<(i)) return(0x00);
if(0x00<(i)) *(CALS_DI+(R(date,*di))) = (i);
else return(0x00);

r = cv_da_first(0x0A,&i,r+(si));
if(!r) return(0x00);
if(0x00<(i)) *(CALS_YR+(R(date,*di))) = (i);
else return(0x00);

return(0x01);
}
