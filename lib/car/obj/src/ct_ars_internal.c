/* **** Notes

Count arguments to the terminating null character.

Remarks:
Using along with fn. ct_ars2 or with fn. ct_ars.
*/


# define UNLOCK (0x00)
# define LOCK (0x01)

signed(__cdecl ct_ars_internal(signed short(flag),signed(*retv),signed char(*base))) {

/* **** DATA, BSS and STACK */
static signed char const SP = (' ');

/* **** CODE/TEXT */
if(!retv) return(0x00);
if(!base) return(0x00);

if(!(*base)) return(0x00);

if(!(SP^(*base))) flag = (UNLOCK);

else {
if(!(flag^(UNLOCK))) {
flag = (LOCK);
(*retv)++;
}}

base++;

return(0x01+(ct_ars_internal(flag,retv,base)));
}
