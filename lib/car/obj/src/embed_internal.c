/* **** Notes

Embed.
*/


signed(__cdecl embed_internal(signed char(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

*argp = (0x00);
argp++;

return(0x01+(embed_internal(argp)));
}
