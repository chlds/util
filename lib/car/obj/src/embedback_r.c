/* **** Notes

Embed.
*/


signed(__cdecl embedback_r(signed(arg),signed char(*argp))) {

/* **** CODE/TEXT */
if(arg<(0x01)) return(0x00);
if(!argp) return(0x00);

*(--argp) = ('\0');

return(0x01+(embedback_r(--arg,argp)));
}
