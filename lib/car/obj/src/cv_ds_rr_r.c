/* **** Notes

Convert into an array of double words out of data type size_t.

Remarks:
Call fn. rl later.
Refer at fn. cv_sd.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cv_ds_rr_r(signed(arg),signed(*argp))) {

auto signed *d;
auto signed r;
auto signed short flag;

if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

// limit
if(!(arg<(OBJS))) return(0x00);

AND(*(arg+(argp)),0x00);
INC(arg);
INC(*(arg+(argp)));
r = (*(arg+(argp)));
if(!(r<(0x00))) return(0x01);

return(0x01+(cv_ds_rr_r(arg,argp)));
}
