/* **** Notes

Cue to a lead of each argument

Remarks:
Return an addendum to point to the next leading address or to the null pointer.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_argt(signed char(*argp))) {

auto signed r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = cue(0x00,argp);
argp = (r+(argp));
if(!(EQ(HT,*argp))) return(r);

return(r+(cue_argt(argp)));
}
