/* **** Notes

Count a specific letter only to the specific address.
*/


signed(__cdecl ct2_only(signed char(di), signed char(*deadline), signed char(*argp))) {

/* **** CODE/TEXT */
if(!deadline) return(0x00);
if(!argp) return(0x00);
if(deadline==(argp)) return(0x00);
if(deadline<(argp)) return(0x00);
if(!(*argp)) return(0x00);
if(!(di^(*argp))) return(0x01+(ct2_only(di,deadline,++argp)));
return(ct2_only(di,deadline,++argp));
}
