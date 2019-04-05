/* **** Notes

For fn. bubbly_sort()

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


/* **** **** entry point */
char signed(__cdecl bsort(int signed(cache), int signed(di), int signed(*si))) {

auto int signed(craft);
auto char signed(c);

/* **** **** CODE/TEXT */
if(!cache) return(NIL);
if(!di) return(NIL);
if(!si) return(NIL);

if(!(cache)) return(NIL);
if(!(--di)) return(NIL);

craft = (*(si+(di)));

if(craft<(*(si+(di+(~(NIL)))))) {
c = sw(si+(di), (si+(di+(~(NIL)))));
if(!c) return(NIL);
}

return(1+(bsort(--cache, (di), (si))));
}
