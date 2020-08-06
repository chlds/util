/* **** Notes

Return the number of spaces that are output when the tab key is pressed.

Remarks:
along with fn. align_backward
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl align(signed(arg),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(HT) = ('\t');
auto signed cache, len, r;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!arg) return(0x00);
if(!argp) return(0x00);

len = ct(argp);

r = ct_only(HT,argp);

if(!r) {
r = (len%(arg));
r = (-r+(arg));
}

else {
r = align_backward(len,len+(argp));
r = (r%(arg));
r = (-r+(arg));
}

return(r);
}
