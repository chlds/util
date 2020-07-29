/* **** Notes

Check the ordinal number.
//*/


signed(__cdecl ord(signed char(*di),signed char(si))) {

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!(*di)) return(0x00);

if(!(si^(*di))) return(0x00);

di++;

return(0x01+(ord(di,si)));
}
