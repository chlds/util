/* **** Notes

Count arguments to the terminating null character.

retv: Put an address to retrieve the numbre of arguments at.
base: Put the leading address of an array for letters at.

Remarks:
Construct using along with fn. ct_ars_internal
*/


signed(__cdecl ct_ars(signed(*retv),signed char(*base))) {

/* **** DATA */
auto signed short flag;
auto signed r;

/* **** CODE/TEXT */
if(!retv) return(0x00);
if(!base) return(0x00);

flag = (0x00);
*retv = (0x00);

r = ct_ars_internal(flag,retv,base);
if(!r) return(0x00);

return(r);
}
