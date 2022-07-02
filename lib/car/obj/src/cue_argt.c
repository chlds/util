/* **** Notes

Cue to a lead of each argument

Remarks:
Return an addendum to point to the next leading address or to the null pointer.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cue_argt(signed char(*argp))) {
auto signed i,r;
auto signed char b[] = {
HT,LF,CR,SP,0x00,
};
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = cue(b,argp);
argp = (r+(argp));
i = ord(b,*argp);
if(!(i<(ct(b)))) return(r);
return(r+(cue_argt(argp)));
}
