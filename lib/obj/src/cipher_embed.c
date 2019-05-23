/* **** Notes

Embed cipher in an array.
*/


signed(__cdecl cipher_embed(signed char(*di), signed(argp))) {

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!argp) return(0x00);

--argp;

*di = ('\0');
di++;

return(1+(cipher_embed(di, argp)));
}
