/* **** Notes

Count letters to the last space.

Remarks:
Along with fn. ct2lastsp
Refer at util/incl/recur.h
*/


signed(__cdecl ctdn2lastsp_internal(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed char(SP) = (' ');

/* **** CODE/TEXT */
if(!arg) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(SP^(*(--arg+(argp))))) return(0x00);

return(0x01+(ctdn2lastsp_internal(arg,argp)));
}
