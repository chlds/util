/* **** Notes

Count a specific letter only.
*/


signed(__cdecl ct_only(signed char(arg),signed char(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(arg^(*argp))) return(0x01+(ct_only(arg,++argp)));
return(ct_only(arg,++argp));
}
