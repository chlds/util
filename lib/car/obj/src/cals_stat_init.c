/* **** Notes

Initialise
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_stat_init(cals_stat_t(*argp))) {

/* **** DATA, BSS and STACK */
auto time_t t;
auto signed r;
auto signed short di;
auto signed short mo;

/* **** CODE/TEXT */
if(!argp) return(0x00);

r = cals_init(&(R(today,*argp)));
if(!r) return(0x00);

*(THEFIRST+(R(day,*argp))) = (MONDAY);
*(THEFIRST+(R(month,*argp))) = (JANUARY);
mo = (-0x01+(*(THEFIRST+(R(month,*argp)))));
if(mo<(0x00)) mo = (-0x01+(MONTHS));
*(THELAST+(R(month,*argp))) = (mo);
di = (-0x01+(*(THEFIRST+(R(day,*argp)))));
if(di<(0x00)) di = (-0x01+(DAYS));
*(THELAST+(R(day,*argp))) = (di);

r = cals_retrieve_week1(*(THEFIRST+(R(day,*argp))),*(THEFIRST+(R(month,*argp))),&t,R(t,R(today,*argp)));
if(!r) return(0x00);

r = (CALS_OBJS);
while(r) {
*(--r+(R(event,*argp))) = (0x00);
*(r+(R(wk1,*argp))) = (t);
*(r+(R(t,*argp))) = (R(t,R(today,*argp)));
}

R(insert,*argp) = (0x00);
R(flag,*argp) = (0x00);
R(optl,*argp) = (0x00);

OR(R(flag,*argp),CALS_INIT);

return(0x01);
}
