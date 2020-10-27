/* **** Notes

Initialise
//*/


# define CAR
# include "../../../incl/config.h"
# include <time.h>

signed(__cdecl cals_init(cals_t(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

i = (CALS_DATE);
while(i) {
*(--i+(R(date,*argp))) = (0x00);
}

i = (CALS_TIME);
while(i) {
*(--i+(R(time,*argp))) = (0x00);
}

R(flag,*argp) = (0x00);

R(b,*argp) = (0x00);
R(w,*argp) = (0x00);
R(optl,*argp) = (0x00);

return(0x01);
}
