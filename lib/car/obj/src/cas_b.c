/* **** Notes

Cascade

Remarks:
Based on UTF-8
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cas_b(signed char **argp)) {
auto signed r;
r = cas_b_r(argp);
if(!r) return(0x00);
r = (r+(~0x00));
return(r);
}
