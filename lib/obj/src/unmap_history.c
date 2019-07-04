/* **** Notes

Unmap a doubly linked list for history.

argp: Put the leading address of the snapshot structure at.

Remarks:
Please look at util/incl/ll.h
//*/


# define C_CODE_STDS
# define C_AS
# include "../../../incl/config.h"

signed(__cdecl unmap_history(SNAPSHOT(*argp))) {

/* **** DATA */
auto SNAPSHOT(*cache);

/* **** CODE/TEXT */
if(!argp) return(0x00);

cache = (argp);
argp = ((*argp).s);

if((*cache).p) {
free((*cache).p);
(*cache).p = (signed char(*)) (0x00);
}

free(cache);
// cache = (SNAPSHOT*) (0x00);
// Attention: The <cache> can not be overwritten i.e., the argument is not pushed in a double pointer

return(1+(unmap_history(argp)));
}
