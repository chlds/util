/* **** Notes

Calculate
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl calc_3_5x(signed(arg))) {
auto signed r;
r = (arg);
SHR(r,0x01);
return(r+(calc_3x(arg)));
}
