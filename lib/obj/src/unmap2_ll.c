/* **** Notes

Unmap a doubly linked list.

argp: Put the leading address of the <knot> structure at.

Remarks:
Please look at util/incl/ll.h
//*/


# define C_AS
# include "../../../incl/config.h"
# include <stdlib.h>

signed int(__cdecl unmap2_ll(struct knot(*argp))) {

/* **** DATA */
auto struct knot *cache;
auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (argp);
argp = R(s,*argp);

r = embed_to(R(p,*cache),0x00,ct(R(p,*cache)));
// printf("%s%d%s","<",r,"> ");

free(R(p,*cache));
R(p,*cache) = (0x00);

free(cache);
cache = (0x00);

return(0x01+(unmap2_ll(argp)));
}
