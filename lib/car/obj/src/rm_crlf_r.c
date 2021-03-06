/* **** Notes

Remove the trailing CR/LF.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rm_crlf_r(signed(arg),signed char(*argp))) {

auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);
--argp;
if(!(CR^(*argp))) OR(flag,0x01);
if(!(LF^(*argp))) OR(flag,0x01);
if(flag) *argp = (0x00);
else return(0x00);

return(0x01+(rm_crlf_r(--arg,argp)));
}
