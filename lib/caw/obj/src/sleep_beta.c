/* **** Notes

Sleep.
*/


# define CAW_H
# define WIN32_H
# include "./../../../config.h"

void(__cdecl sleep_beta(signed(arg))) {
auto signed min = (0x10);
if(arg) {
if(arg<(min)) arg = (min);
Sleep(arg);
}}
