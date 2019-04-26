/* **** Notes

Count the arguments to the terminating null character.

di: Put the address to retrieve the numbre of the arguments at.
base: Put the leading address of an array for letters at.

Remarks:
Construct using along with fn. ct_ars_internal
*/


// # include<stdio.h>

signed(__cdecl ct_ars(signed(*di), signed char(*base))) {

/* **** DATA */
auto signed short(flag) = (0x00);
auto signed(retv) = (0x00);
auto signed(r);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!base) return(0x00);

r = ct_ars_internal(flag, &retv, base);
if(!r) return(0x00);

// Monitoring
// printf("%s%d\n", ("r is: "), (r));

*di = (retv);

return(r);
}