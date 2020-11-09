/* **** Notes

Concatenate

Remarks:
Release at the *di.
*/


# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl concat_argv(signed(offset),signed char(**di),signed char(**si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(offset<(0x00)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

if(!(*si)) return(0x00);

i = (offset);
while(i) if(!(*(--i+(si)))) return(0x00);

r = concat_argv_r(&i,offset+(si));
if(!r) return(0x00);

i = (i*(sizeof(**di)));
*di = (signed char(*)) malloc(i);
if(!(*di)) return(0x00);

r = concat_argv_rr(*di,offset+(si));
if(!r) return(0x00);

return(i);
}
