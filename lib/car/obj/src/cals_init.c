/* **** Notes

Initialise
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl cals_init(cals_t(*argp))) {

auto time_t t;
auto signed r;
auto signed short di;
auto signed short mo;

if(!argp) return(0x00);

r = cals_init_event(&(R(today,*argp)));
if(!r) return(0x00);

OR(R(periodic,R(today,*argp)),CALS_APERIODIC);

r = cals_init_roll(&(R(roll,*argp)));
if(!r) return(0x00);

r = (~0x00);
*(THEFIRST+(R(day,*argp))) = (MONDAY);
*(THEFIRST+(R(month,*argp))) = (JANUARY);
mo = (r+(*(THEFIRST+(R(month,*argp)))));
if(mo<(0x00)) mo = (r+(MONTHS));
*(THELAST+(R(month,*argp))) = (mo);
di = (r+(*(THEFIRST+(R(day,*argp)))));
if(di<(0x00)) di = (r+(DAYS));
*(THELAST+(R(day,*argp))) = (di);

r = cv_wk_yr(*(THEFIRST+(R(day,*argp))),*(THEFIRST+(R(month,*argp))),&t,R(t,R(today,*argp)));
if(!r) return(0x00);

r = (CALS_OBJS);
while(r) {
*(--r+(R(wk1,*argp))) = (t);
*(r+(R(t,*argp))) = (R(t,R(today,*argp)));
}

R(flag,*argp) = (0x00);
R(optl,*argp) = (0x00);

// also
r = cli_init_property(0x00,&(R(property,*argp)));
if(!r) {
printf("%s \n","<< Error at fn. cli_init_property()");
return(0x00);
}

OR(R(flag,*argp),CALS_INIT);

return(0x01);
}
