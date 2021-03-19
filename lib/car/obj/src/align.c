/* **** Notes

Return the number of spaces to be indented at the terminating null character.

Remarks:
Based on one-byte characters
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl align(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!arg) return(0x00);
if(!argp) return(0x00);

i = ct(argp);

r = ct_only(HT,argp);

if(!r) {
r = (i%(arg));
r = (-r+(arg));
}

else {
r = align_backward(i,i+(argp));
r = (r%(arg));
r = (-r+(arg));
}

return(r);
}
