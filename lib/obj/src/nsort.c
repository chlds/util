/* **** Notes

Sort e.g., using with fn. bsort()

count: Put the numbre of the elements for an array of values at.
base: Put the leading address of an array of values at.

Remarks:
Refer at fn. n_sort (and fn. b_sort).
*/


# include "./../../../incl/config.h"


int signed(__cdecl nsort(int signed(count), int signed(*base))) {

/* **** DATA, BSS, STACK */
static int signed(*di) = (NIL);
static int signed(*si) = (NIL);
static short signed(flag) = (NIL);

auto int signed(craft);
auto char signed(c);

/* **** **** CODE/TEXT */
if(!count) {
XOR(flag, flag);
return(NIL);
}

if(!base) return(NIL);

if(!(--count)) {
XOR(flag, flag);
return(NIL);
}

if(!flag) {
OR(flag, 0x01);
di = (base);
si = (base);
}

di++;
craft = (*di);

if(craft<(*si)) {
*di = (*si);
STR(si,craft) ; //*si = (craft);
}

si++;
return(1+(nsort(count, base)));
}
