/* **** Notes

Exchange the DI and the SI

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


/* **** **** entry point */
char signed(__cdecl sw(int signed(*di), int signed(*si))) {

/* **** **** DATA
auto int unsigned const(QUANTUM) = (int signed) (0x10);
auto int unsigned const(SNOOZE) = (int signed) (0x04);
auto int unsigned const(DELAY) = (int signed) (0x02*(QUANTUM));
//*/

auto int signed(cache);

/* **** **** CODE/TEXT */
if(!di) return(NIL);
if(!si) return(NIL);

cache = (*di);
*di = (*si);
*si = (cache);

return(1);
}
