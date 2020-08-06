/* **** Notes

Unmap a circular/doubly linked list.

flag: 0x00 is in a doubly linked list and the others are in a circular linked list.

Remarks:
Please look at util/incl/ll.h
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl unmap_ll(signed short(flag),REEL(*argp))) {

auto KNOT *cache;
auto signed i,r;

if(!argp) return(0x00);

cache = (*(CLI_LEAD+(R(knot,*argp))));
r = unmap_ll_internal(flag,cache,*(CLI_BASE+(R(knot,*argp))));
if(!r) return(0x00);

i = (COMMON_OBJS);
while(i) {
*(--i+(R(knot,*argp))) = (0x00);
}

return(r);
}
