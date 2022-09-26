/* **** Notes

Duplicate

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl dupl_backward(signed char(*argp))) {
auto signed char *b;
auto signed r;
if(!argp) return(0x00);
r = ct(argp);
if(r) {
r = ct_a_back(argp);
if(!r) return(0x00);
}
return(dupl_backward_r(r,argp));
}
