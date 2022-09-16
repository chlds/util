/* **** Notes

I/O

Remarks:
Based on UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl clih_fn(signed(arg),void(*argp))) {
auto signed r;
auto signed(__cdecl*f)(void(*argp));
auto signed(__cdecl*(fn[]))(void(*argp)) = {
clih_at_b,
clih_x_b,
0x00,
};
auto signed ctrlkey[] = {
CTRL_AT,
CTRL_X,
0x00,
};
auto signed *(ctrlkeys[]) = {
(0x00+(ctrlkey)),
(0x01+(ctrlkey)),
0x00,
};
if(arg<(0x00)) return(0x00);
if(!(arg<(CTRL_KEYS))) return(0x00);
// if(!argp) return(0x00);
r = ord_d_v(ctrlkeys,arg);
if(r<(ct_v_d(ctrlkeys))) {
f = (*(r+(fn)));
return(f(argp));
}
return(arg);
}
