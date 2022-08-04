/* **** Notes

Store bytes
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl str_b_r(signed(fd),void(*argp))) {
auto signed char **v;
if(!argp) return(0x00);
v = (signed char(**)) (argp);
return(str_b_rr(fd,v));
}
