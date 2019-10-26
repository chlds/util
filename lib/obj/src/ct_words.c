/* **** Notes

Count words to the terminating null character.

retv: Put the address to retrieve the numbre of words at.
base: Put the leading address of an array for letters at.

Remarks:
Based on fn. ct_ars (to count arguments)
*/


# define LOCK (0x02)
# define PREPARE (0x01)
# define UNLOCK (0x00)

signed(__cdecl ct_words(signed(*retv),signed char(*base))) {

/* **** DATA */
auto signed short flag;
auto signed r;

/* **** CODE/TEXT */
if(!retv) return(0x00);
if(!base) return(0x00);

flag = (PREPARE);
*retv = (0x00);

r = ct_words_internal(flag,retv,base);
if(!r) return(0x00);

return(r);
}
