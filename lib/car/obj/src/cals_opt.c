/* **** Notes

Opt
//*/


# define CALEND
# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cals_opt(signed(arg),cals_t(*argp))) {

auto signed r;
auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);

if(!(CALS_INIT&(R(flag,*argp)))) return(0x00);

r = cals_opt_r(arg,argp);
if(!r) printf("%s \n","<< Error at fn. cals_opt_r()");

return(r);
}
