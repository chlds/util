/* **** Notes

Unmap a doubly linked list.

argp: Put the leading address of the <knot> structure at.

Remarks:
Please look at util/incl/ll.h
//*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_unmap_history(CMDLN_STAT(*argp))) {

/* **** DATA */
auto struct knot(*cache);

/* **** CODE/TEXT */
if(!argp) return(NIL);

if(!((*argp).clih.l)) return(0x00);

cache = ((*argp).clih.l);
(*argp).clih.l = ((*((*argp).clih.l)).s);
free((*cache).p);
free(cache);

return(1+(cmdln_unmap_history(argp)));
}
