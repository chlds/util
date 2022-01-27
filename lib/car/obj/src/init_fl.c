/* **** Notes

Initialise

Remarks:
Refer at fn. cli_restore.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_fl(signed(arg),fl_t(*argp))) {

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
