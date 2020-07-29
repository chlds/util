/* **** Notes

Convert to a signed double word out of characters.
//*/


signed(__cdecl cv_da_internal(signed short(radix),signed char(*table),signed(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;
auto signed char c;

/* **** CODE/TEXT */
if(!table) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) return(0x00);

c = (*si);
r = ord(table,c);
if(r<(radix)) *di = (r+(radix*(*di))) /* % LIMIT */ ;

si++;

return(0x01+(cv_da_internal(radix,table,di,si)));
}
