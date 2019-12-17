/* **** Notes

Embed.
*/


signed(__cdecl embed_to(signed char(*argp),signed char(arg),signed(times))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(times<(0x01)) return(0x00);

*argp = (arg);
argp++;

return(0x01+(embed_to(argp,arg,--times)));
}
