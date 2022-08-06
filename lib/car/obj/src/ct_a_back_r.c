/* **** Notes

Count backward
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_a_back_r(signed char(*argp))) {
auto signed r;
auto signed sequentialflag = (0x80);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
r = nbytechar(*argp);
if(!r) return(0x00);
if(sequentialflag^(r)) return(0x01);
return(0x01+(ct_a_back_r(--argp)));
}
