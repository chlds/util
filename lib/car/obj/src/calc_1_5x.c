/* **** Notes

Calculate
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl calc_1_5x(signed(arg))) {
auto signed r;
r = (arg);
SHR(arg,0x01);
arg = (r+(arg));
return(arg);
}
