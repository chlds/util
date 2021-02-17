/* **** Notes

Count letters to the terminating null character.

Remarks:
Along with alignement of the tab.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ct_txt_internal(signed(arg/* align */),signed(*retv),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed r;

/* **** CODE/TEXT */
if(!retv) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(HT^(*argp))) {
r = (*retv);
r = (r%(arg));
r = (-r+(arg));
*retv = (r+(*retv));
}
else (*retv)++;

argp++;

return(0x01+(ct_txt_internal(arg,retv,argp)));
}
