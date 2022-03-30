/* **** Notes

Initialise.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_alert(alert_t(*argp))) {

auto signed r;

if(!argp) return(0x00);

AND(r,0x00);
OR(r,OBJS);
while(r) *(--r+(R(r,*argp))) = (0x00);

return(0x01);
}
