/* **** Notes

Sleep.
*/


# define CAR
# include <windows.h>
# include "./../../../incl/config.h"

void(__cdecl sleep_b(signed(arg))) {
auto signed min = (0x10);
if(arg) {
if(arg<(min)) arg = (min);
Sleep(arg);
}}
