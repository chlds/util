/* **** Notes

Reversely count up to a non-blank place (or to the terminating null character).
*/


signed(__cdecl ct2nonblank_r_internal(signed(rest),signed char(*cur))) {

/* **** DATA, BSS and STACK */
static signed char const(SP) = (' ');

/* **** CODE/TEXT */
if(rest<(0x00)) return(0x00);
if(!rest) return(0x00);
if(!cur) return(0x00);

if(!(*cur)) return(0x00);

if(SP^(*cur)) return(0x00);

return(0x01+(ct2nonblank_r_internal(--rest,--cur)));
}
