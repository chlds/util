/* **** Notes

Embed cipher n times out of an array.
*/


signed(__cdecl cipher_embed(signed char(*di), signed(arg))) {

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!arg) return(0x00);

--arg;

*di = ('\0');
di++;

return(1+(cipher_embed(di, arg)));
}
