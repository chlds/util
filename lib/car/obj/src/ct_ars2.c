/* **** Notes

Count the arguments to the terminating null character.
//*/


// # include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl ct_ars2(signed char(*base))) {

/* **** DATA */
auto signed short flag;
auto signed retv;
auto signed r;

/* **** CODE/TEXT */
if(!base) return(0x00);

AND(flag,0x00);
AND(retv,0x00);

r = ct_ars_internal(flag,&retv,base);
if(!r) return(0x00);

// printf("%s %d \n","r is:",r);

return(retv);
}
