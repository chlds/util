/* **** Notes

Partially compare strings
*/


signed(__cdecl cmpr_partially(signed(*cache),signed char(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char(c);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) {
*cache = (0x00);
return(0x01);
}

c = (*di);

if(c^(*si)) {
*cache = (signed) (c+(0x01+(~(*si))));
return(0x01);
}

di++;
si++;

return(0x01+(cmpr_partially(cache,di,si)));
}
