/* **** Notes

For fn. bubblysort()

count: Put the numbre of the elements for an array of values at.
base: Put the leading address of an array of values at.

*/


# define C_CODE_STDS
# include "./../../../incl/config.h"


/* **** **** entry point */
char signed(__cdecl nsort(int signed(count), int signed(*base))) {

/* **** **** DATA, BSS, STACK */
// static int signed(cache) = (NIL);
static int signed(flag) = (NIL);
static int signed(*di) = (NIL);
static int signed(*si) = (NIL);
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

(di++);
craft = (*di);

if(craft<(*si)) {
c = sw(di, si);
if(!c) {
XOR(flag, flag);
return(NIL);
}}

(si++);
return(1+(nsort(count, base)));
}
