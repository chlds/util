/* **** Notes

Cue to a lead of each argument

Remarks:
Return an addendum to point to the next leading address or to the null pointer.
Effective to use along with fn. cpy2
Using for fn. splt
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue2(signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed char const(WS) = (' ');

/* **** CODE/TEXT */
if(!base) return(0x00);
if(!(*base)) return(0x00);

if(WS^(*base)) return(0x00);

base++;

return(0x01+(cue2(base)));
}
