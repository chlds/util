/* **** Notes

Confer.

Remarks:
Refer at fn. ctdn_to and fn. ctdn_to_r.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cf(signed short(*flag),signed char(*cache),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed char c;

/* **** CODE/TEXT */
if(!flag) return(0x00);
if(!cache) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(*cache)) return(0x00);

if(0x01&(*flag)) return(0x00);

c = (*cache);
cache++;
if(!(c^(*argp))) OR(*flag,0x01);

return(0x01+(cf(flag,cache,argp)));
}
