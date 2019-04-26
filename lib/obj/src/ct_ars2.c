/* **** Notes

Count the arguments to the terminating null character.

base: Put the leading address of an array for letters at.

Remarks:
Construct using along with fn. ct_ars_internal
//*/


// # include<stdio.h>

signed(__cdecl ct_ars2(signed char(*base))) {

/* **** DATA */
auto signed short(flag) = (0x00);
auto signed(retv) = (0x00);
auto signed(r);

/* **** CODE/TEXT */
if(!base) return(0x00);

r = ct_ars_internal(flag, &retv, base);
if(!r) return(0x00);

// Monitoring
// printf("%s%d\n", ("r is: "), (r));

return(retv);
}
