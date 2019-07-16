/* **** Notes

Unmap a doubly linked list for history.

argp: Put the address of the cmdln_stat structure at.

Remarks:
Please look at util/incl/ll.h
//*/


# define C_CODE_STDS
# define C_AS
# define C_W32API
# define C_CMDLN
# include "../../../incl/config.h"

signed(__cdecl cmdln_unmap(CMDLN_STAT(*argp))) {

/* **** DATA */
auto KNOT(*cache);
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(!((*argp).l)) return(0x00);

cache = ((*argp).l);
(*argp).l = ((*((*argp).l)).s);

r = unmap_history(&((*cache).clih.l));

// It is empty ..or has occurred an error.
if(C_DBG) {
printf("%s%d%s", " < unmapped ", r, " snapshot histories taken for ");
printf("%s\n", (*cache).p);
}

(*cache).clih.l = (SNAPSHOT*) (0x00);
(*cache).clih.t = (SNAPSHOT*) (0x00);
(*cache).clih.b = (SNAPSHOT*) (0x00);

if((*cache).p) {
free((*cache).p);
(*cache).p = (signed char(*)) (0x00);
}

free(cache);
cache = (KNOT*) (0x00);

return(1+(cmdln_unmap(argp)));
}
