/* **** Notes

Unmap a doubly linked list

argp: Put address of a leading address of the knot structure at.

Remarks:
Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl unmap_ll(KNOT(**argp))) {

auto KNOT *cache;
auto signed i,r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

cache = (*argp);
*argp = (R(s,*cache));

if(R(p,*cache)) {
// r = embed_to(R(p,*cache),0x00,ct(R(p,*cache)));
embed(0x00/* flag */,R(p,*cache));
free(R(p,*cache));
R(p,*cache) = (signed char(*)) (0x00);
}

free(cache);
cache = (0x00);

return(0x01+(unmap_ll(argp)));
}
