/* **** Notes

Count the arguments to the terminating null character.

retv: Put the address to retrieve the numbre of the arguments at.
base: Put the leading address of an array for letters at.

Remarks:
Construct using along with fn. ct_ars_internal
*/


# define LOCK (0x02)
# define PREPARE (0x01)
# define UNLOCK (0x00)

signed(__cdecl ct_ars(signed(*retv),signed char(*base))) {

/* **** DATA */
auto signed short flag;
auto signed r;

/* **** CODE/TEXT */
if(!retv) return(0x00);
if(!base) return(0x00);

flag = (PREPARE);
*retv = (0x00);

r = ct_ars_internal(flag,retv,base);
if(!r) return(0x00);

return(r);
}
