/* **** Notes

Return the number of spaces to be indented at the terminating null character.

Remarks:
Based on one-byte characters
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl align_b(signed(arg),signed char(*argp))) {

auto signed r;

if(arg<(0x00)) return(0x00);
if(!arg) return(0x00);
if(!argp) return(0x00);

r = ct(argp);
if(ct_only(HT,argp)) r = align_backward(r,r+(argp));

r = (r%(arg));

return(arg+(0x01+(~r)));
}
