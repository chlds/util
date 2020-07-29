/* **** Notes

Reversely count up to a non-blank place (or to the terminating null character).
*/


signed(__cdecl ct2nonblank_r(signed char(*cur),signed char(*orig))) {

/* **** DATA, BSS and STACK */
auto signed r;

/* **** CODE/TEXT */
if(!cur) return(0x00);
if(!orig) return(0x00);

r = ct2here(cur,orig);
if(!r) return(0x00);

r = ct2nonblank_r_internal(r,cur);

return(r);
}
