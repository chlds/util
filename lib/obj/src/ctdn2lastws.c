/* **** Notes

Count down letters to the last whitespace.

Remarks:
Refer at util/incl/recur.h
*/


signed(__cdecl ctdn2lastws(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ct(argp);

r = ctdn2lastws_internal(r,argp);

return(r);
}
