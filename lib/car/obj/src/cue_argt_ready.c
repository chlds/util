/* **** Notes

Cue to a lead of arguments.

Remarks:
Return an addendum to point to the next leading address or to the null pointer.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cue_argt_ready(signed char(*argp))) {

auto signed r;
auto signed char b[] = {
HT,LF,CR,SP,0x00,
};

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ord(b,*argp);
if(!(r<(ct(b)))) return(0x00);

argp++;

return(0x01+(cue_argt_ready(argp)));
}
