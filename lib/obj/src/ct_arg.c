/* **** Notes

Count the arguments with the static variables to the terminating null character.

di: Put the address to retrieve the numbre of the arguments at.
base: Put the leading address of an array for letters at.

Remarks:
Being Deprecated..
Please use fn. ct_args, fn. ct_ars2 or fn. ct_ars.
//*/


# include "../../../incl/config.h"

signed int(__cdecl ct_arg(signed int(*di), signed char(*base))) {

/* **** DATA */
static signed short(flag) = (0x00);
static signed short(init) = (0x00);
auto signed char const(WS) = (' ');

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!base) return(0x00);

if(!(*base)) {
XOR(flag, flag);
XOR(init, init);
return(0x00);
}

if(!init) {
init++;
*di = (0x00);
}

if(!(WS^(*base))) {
XOR(flag, flag);
base++;
return(1+(ct_arg(di, base)));
}

if(!flag) {
flag++;
(*di)++;
}

base++;
return(1+(ct_arg(di, base)));
}
