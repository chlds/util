/* **** Notes

Initialise

Remarks:
Refer at fn. cli_restore.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl init_fl(fl_t(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!argp) return(0x00);

// initialise
b = (0x00);
r = (OBJS);
while(r) {
AND(*(--r+(R(fd,*argp))),0x00);
*(r+(R(v,*argp))) = (void*) (b);
}

return(0x01);
}
