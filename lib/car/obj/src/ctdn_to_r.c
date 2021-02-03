/* **** Notes

Count down letters to find an offset point.

Remarks:
Refer at util/incl/recur.h
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl ctdn_to_r(signed short(flag),signed(arg),signed char(*cache),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed char c;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);

if(!(*argp)) return(0x00);
if(!arg) return(0x00);

--arg;

AND(i,0x00);
while(*(cache+(i))) {
c = (*(cache+(i++)));
if(!(c^(*(arg+(argp))))) {
OR(flag,0x01);
if(0x01<(flag)) return(0x00);
}}

if(0x01&(flag)) AND(flag,0x00);
else OR(flag,0x10);

return(0x01+(ctdn_to_r(flag,arg,cache,argp)));
}
