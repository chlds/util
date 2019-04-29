/* **** Notes

Copy to the <di> out of the <si>
*/


signed(__cdecl cpy(signed char(*di), signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char(cache);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) {
*di = (0x00);
return(0x00);
}

cache = (*si);
*di = (cache);

di++;
si++;
return(1+(cpy(di, si)));
}
