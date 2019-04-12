/* **** Notes

Table scanning
//*/


signed int(__cdecl tablescan(signed char(di), signed char(*si))) {

/* **** CODE/TEXT */
if(!si) return(0x00);
if(!(*si)) return(0x00);

if(!(di^(*si))) return(0x00);

si++;
return(1+(tablescan(di, si)));
}
