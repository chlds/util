/* **** Notes

Remove the code of line break.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl rm_br_r(signed(arg),signed char(*argp))) {
auto signed short flag;
if(!arg) return(0x00);
if(!argp) return(0x00);
AND(flag,0x00);
if(!(CR^(*argp))) OR(flag,0x01);
if(!(LF^(*argp))) OR(flag,0x01);
if(!flag) return(0x00);
*argp = (0x00);
return(0x01+(rm_br_r(--arg,--argp)));
}
