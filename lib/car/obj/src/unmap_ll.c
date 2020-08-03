/* **** Notes

Unmap a doubly linked list

Remarks:
Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"

signed(__cdecl unmap_ll(REEL(*argp))) {

auto KNOT *cache;
auto signed i,r;

if(!argp) return(0x00);

cache = (*(CLI_LEAD+(R(knot,*argp))));
r = unmap_ll_internal(cache);

return(r);
}
