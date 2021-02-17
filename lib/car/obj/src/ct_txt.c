/* **** Notes

Count letters to the terminating null character.

Remarks:
Along with alignement of the tab.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ct_txt(signed(arg/* align */),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!argp) return(0x00);

AND(i,0x00);
r = ct_txt_internal(arg,&i,argp);
if(!r) AND(i,0x00);

r = (i);
AND(i,0x00);

return(r);
}
