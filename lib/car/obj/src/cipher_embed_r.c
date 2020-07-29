/* **** Notes

Embed cipher n times out of an array.
*/


signed(__cdecl cipher_embed_r(signed char(*di), signed(arg))) {

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!arg) return(0x00);

*(di+(--arg)) = ('\0');

return(1+(cipher_embed_r(di, arg)));
}
