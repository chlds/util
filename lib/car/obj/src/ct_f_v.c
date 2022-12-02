/* **** Notes

Count function pointers
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl ct_f_v(void*(__cdecl**f)(void(*argp)))) {
if(!f) return(0x00);
if(!(*f)) return(0x00);
f++;
return(0x01+(ct_f_v(f)));
}
