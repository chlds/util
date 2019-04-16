/* **** Notes

Count the arguments (to the terminating null character).

di: Put the address to retrieve the numbre of the arguments at.
base: Put the leading address of an array for letters at.
//*/


# include "../../../incl/config.h"

signed int(__cdecl ct_arg(signed int(*di), signed char(*base))) {

/* **** DATA */
static signed char const(WS) = (' ');
static signed short(flag) = (0x00);
static signed short(init) = (0x00);

/* **** CODE/TEXT */
if(!di) return(NIL);
if(!base) return(NIL);

if(!(*base)) {
XOR(flag,flag);
XOR(init,init);
return(NIL);
}

if(!init) {
init++;
*di = (NIL);
}

if(!(WS^(*base))) {
XOR(flag, flag);
base++;
return(1+(ct_arg(di, base)));
}

if(!flag) {
OR(flag, 0x01);
(*di)++;
}

base++;
return(1+(ct_arg(di, base)));
}
