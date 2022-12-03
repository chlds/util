/* **** Notes

Calculate
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl calc_3x(signed(arg))) {
auto signed r;
r = (arg);
SHL(arg,0x01);
arg = (r+(arg));
return(arg);
}
