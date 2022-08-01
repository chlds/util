/* **** Notes

Convert

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl cv_r(signed(arg/* n-digit */),signed char(*argp))) {
auto signed char *b;
auto signed r;
auto signed char *(a[]) = {
"",
"0",
"00",
"000",
"0000",
"00000",
"000000",
"0000000",
"00000000",
"000000000",
"0000000000",
"00000000000",
"000000000000",
"0000000000000",
"00000000000000",
"000000000000000",
0x00,
};
if(!argp) return(0x00);
b = (argp);
r = (arg+(0x01+(~(ct(b)))));
if(0x00<(r)) {
r = (r%(ct_v_b(a)));
b = cat_ahead(b,*(r+(a)));
}
return(b);
}
