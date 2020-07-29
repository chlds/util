/* **** Notes

Count a specific letter only.
*/


signed(__cdecl ct_only(signed char(di), signed char(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(di^(*argp))) return(1+(ct_only(di, ++argp)));
return(ct_only(di, ++argp));
}
