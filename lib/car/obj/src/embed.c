/* **** Notes

Embed.
*/


signed(__cdecl embed(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

if(arg) r = embed_rr(arg,argp);
else r = embed_r(argp);

return(r);
}
