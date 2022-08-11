/* **** Notes

Initialise

Remarks:
Deprecated..
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl init_flh(signed(arg),flh_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

// destroy
r = (OBJS);
if(arg) while(r) rl(*(--r+(R(v,*argp))));

// initialise
b = (0x00);
r = (OBJS);
while(r) {
--r;
AND(*(r+(R(fd,*argp))),0x00);
*(r+(R(v,*argp))) = (void*) (b);
}

return(0x01);
}
