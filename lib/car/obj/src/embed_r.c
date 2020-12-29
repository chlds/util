/* **** Notes

Embed.
*/


signed(__cdecl embed_r(signed char(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

*argp = (0x00);
argp++;

return(0x01+(embed_r(argp)));
}
