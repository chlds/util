/* **** Notes

Compare strings
*/


signed(__cdecl cmpr(signed(*cache), signed char(*di), signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char(c);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) {
*cache = (signed) (*di);
return(0x01);
}

c = (*di);

if(c^(*si)) {
*cache = (signed) (c+(1+(~(*si))));
return(0x01);
}

di++;
si++;

return(1+(cmpr(cache, di, si)));
}
