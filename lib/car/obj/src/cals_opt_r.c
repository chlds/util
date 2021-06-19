/* **** Notes

Opt
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_opt_r(signed(arg),cals_t(*argp))) {

auto signed i,r;
auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

if(!(cals_allocate_for_today(argp))) {
printf("%s \n","<< Error at fn. cals_allocate_for_today()");
return(0x00);
}

r = cals_r(arg,argp);
if(!r) printf("%s \n","<< Error at fn. cals_r()");

if(!(cals_release_for_today(argp))) {
printf("%s \n","<< Error at fn. cals_release_for_today()");
return(0x00);
}

return(r);
}
