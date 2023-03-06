/* **** Notes

State
*/


# define CAW_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl control_key_state_beta(signed(arg))) {
auto signed r;
auto signed short mask = (0x8000);
auto signed short(__stdcall**ff)(signed(arg));
auto signed short(__stdcall*f)(signed(arg));
auto signed short(__stdcall*(fn[]))(signed(arg)) = {
GetKeyState,
GetAsyncKeyState,
0x00,
};
AND(r,0x00);
ff = (fn);
if(arg) ff++;
f = (*ff);
if(mask&(f(VK_CONTROL))) OR(r,0x01);
return(r);
}
