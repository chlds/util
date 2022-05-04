/* **** Notes

Convert.

Remarks:
Call fn. rl later to release buffer.
A n-digit number at least
Refer at fn. cx.
Based on UTF-8
*/


# define CAR
# include "./../../../incl/config.h"

signed char *(__cdecl cv_r(signed(arg/* n-digit */),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed char *(a[]) = {
"0","00","000","0000","00000","000000","0000000",0x00,
};

if(!argp) return(0x00);

b = (argp);
r = ct(b);
r = (r+(0x01+(~arg)));
if(r<(0x00)) {
NOT(r);
r = (r%(ct_vb(a)));
b = cat_ahead(b,*(r+(a)));
}

return(b);
}
