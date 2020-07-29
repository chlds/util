/* **** Notes

Count offset out of the last arg.
*/


signed(__cdecl ct_offset_out_of_last_internal(signed char(arg), signed(len), signed char(*argp))) {

/* **** CODE/TEXT */
if(!len) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(arg^(*(argp+(--len))))) return(0x00);

return(1+(ct_offset_out_of_last_internal(arg,len,argp)));
}
