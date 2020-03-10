/* **** Notes

Embed.
*/


signed(__cdecl embed(signed short(flag),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = embed_internal(argp);

return(r);
}
