/* **** Notes

Count down letters to the last space.

Remarks:
Refer at util/incl/recur.h
*/


signed(__cdecl ctdn2lastsp(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ct(argp);

r = ctdn2lastsp_internal(r,argp);

return(r);
}
