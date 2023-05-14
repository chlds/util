/* **** Notes

Count function pointers
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_f_d(signed(__cdecl**f)(signed(arg)))) {
if(!f) return(0x00);
if(!(*f)) return(0x00);
f++;
return(0x01+(ct_f_d(f)));
}
