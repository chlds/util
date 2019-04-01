/* **** Notes

Bubbly sort

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


/* **** **** entry point */
char signed(__cdecl sortbbl(int signed(*cache), int signed(di), int signed(si))) {

/* **** **** DATA
auto int unsigned const(QUANTUM) = (int signed) (0x10);
auto int unsigned const(SNOOZE) = (int signed) (0x04);
auto int unsigned const(DELAY) = (int signed) (0x02*(QUANTUM));
//*/

auto int signed(limit);
auto char signed(c);

/* **** **** CODE/TEXT */
if(!cache) return(NIL);
if(!di) return(NIL);
if(!si) return(NIL);

c = sortb(cache, (di), (si));
if(!c) return(NIL);

return(1+(sortbbl(cache, (--di), (si))));
}
