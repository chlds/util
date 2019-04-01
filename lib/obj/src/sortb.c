/* **** Notes

For fn. sortbbl()

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


/* **** **** entry point */
char signed(__cdecl sortb(int signed(*cache), int signed(di), int signed(si))) {

/* **** **** DATA
auto int unsigned const(QUANTUM) = (int signed) (0x10);
auto int unsigned const(SNOOZE) = (int signed) (0x04);
auto int unsigned const(DELAY) = (int signed) (0x02*(QUANTUM));
//*/

auto int signed(craft);
auto char signed(c);

/* **** **** CODE/TEXT */
if(!cache) return(NIL);
if(!di) return(NIL);
if(!si) return(NIL);

if(!(--di)) return(NIL);
if(!(--si)) return(NIL);

craft = (*(cache+(si)));
if(craft<(*(cache+(si+(~(NIL)))))) {
c = sw(cache+(si), (cache+(si+(~(NIL)))));
/* Monitor
printf("%s%d\n", ("craft: "), (craft));
printf("%s%d\n", ("*(cache+(si+(~(NIL)))): "), (*(cache+(si+(~(NIL))))));
printf("%s%d\n", ("*(cache+(si)): "), (*(cache+(si))));
//*/
if(!c) return(NIL);
/* Monitor
printf("%s%d\n", ("craft: "), (craft));
printf("%s%d\n", ("*(cache+(si+(~(NIL)))): "), (*(cache+(si+(~(NIL))))));
printf("%s%d\n", ("*(cache+(si)): "), (*(cache+(si))));
//*/
}

return(1+(sortb(cache, (di), (si))));
}
