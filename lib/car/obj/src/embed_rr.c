/* **** Notes

Embed.
*/


signed(__cdecl embed_rr(signed(arg),signed char(*argp))) {

/* **** CODE/TEXT */
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

*(--arg+(argp)) = (0x00);

return(0x01+(embed_rr(arg,argp)));
}
