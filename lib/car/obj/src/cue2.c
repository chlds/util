/* **** Notes

Cue to a lead of each argument

Remarks:
Return an addendum to point to the next leading address or to the null pointer.
Effective to use along with fn. cpy2
Using for fn. splt
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue2(signed char(*argp))) {

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(SP^(*argp)) return(0x00);

argp++;

return(0x01+(cue2(argp)));
}
