/* **** Notes

Copy to the <di> out of the <si> by the specified bytes.
*/


signed(__cdecl ncpy(signed char(*di), signed char(*si), signed(arg))) {

/* **** DATA, BSS and STACK */
auto signed char(cache);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);
if(arg<(0x00)) return(0x00);

if(!arg) {
*di = ('\0');
return(0x00);
}

if(!(*si)) {
*di = (0x00);
return(0x00);
}

cache = (*si);
*di = (cache);

di++;
si++;
--arg;
return(1+(ncpy(di, si, arg)));
}
