/* **** Notes

Embed.
*/


signed(__cdecl embedback(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

r = ct(argp);
if(r<(arg)) return(0x00);

return(embedback_r(arg,argp+(r)));
}
