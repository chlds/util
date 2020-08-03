/* **** Notes

Unmap a doubly linked list

Remarks:
Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"
# include <stdlib.h>

signed(__cdecl unmap_ll_internal(KNOT(*argp))) {

auto KNOT *cache;
auto signed i,r;

if(!argp) return(0x00);

cache = (argp);
argp = (R(s,*argp));

if(R(p,*cache)) {
// r = embed_to(R(p,*cache),0x00,ct(R(p,*cache)));
embed(0x00/* flag */,R(p,*cache));
free(R(p,*cache));
R(p,*cache) = (signed char(*)) (0x00);
}

free(cache);
cache = (0x00);

return(0x01+(unmap_ll_internal(argp)));
}
