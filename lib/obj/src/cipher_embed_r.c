/* **** Notes

Embed cipher in an array.
*/


signed(__cdecl cipher_embed_r(signed char(*di), signed(argp))) {

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!argp) return(0x00);

*(di+(--argp)) = ('\0');

return(1+(cipher_embed_r(di, argp)));
}
