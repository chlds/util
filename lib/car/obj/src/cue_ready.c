/* **** Notes

Cue to a lead of arguments.

Remarks:
Return an addendum to point to the next leading address or to the null pointer.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cue_ready(signed char(*argp))) {
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(SP^(*argp)) return(0x00);
argp++;
return(0x01+(cue_ready(argp)));
}
