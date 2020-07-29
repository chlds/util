/* **** Notes

Count letters to the last whitespace.

Remarks:
Along with fn. ct2lastws
Refer at util/incl/recur.h
*/


signed(__cdecl ctdn2lastws_internal(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed char(SP) = (' ');
static signed char(HT) = ('\t');

/* **** CODE/TEXT */
if(!arg) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(SP^(*(--arg+(argp))))) return(0x00);
if(!(HT^(*(arg+(argp))))) return(0x00);

return(0x01+(ctdn2lastws_internal(arg,argp)));
}
