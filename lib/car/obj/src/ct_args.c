/* **** Notes

Count the arguments with a loop to the terminating null character.

argp: Put the leading address of an array for letters at.
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

signed int(__cdecl ct_args(signed char(*argp))) {

/* **** DATA */
auto signed int const(QUANTUM) = (0x10);
auto signed int const(SNOOZE) = (0x04);
auto signed int const(DELAY) = (0x02*(QUANTUM));

auto signed char const(delimiter) = (' ');

auto signed int(i), (l), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!argp) return(0x00);

XOR(flag, flag);
XOR(r, r);
XOR(l, l);
XOR(i, i);

while(*(argp+(i))) {
if(!(delimiter^(*(argp+(i++))))) {
XOR(flag, flag);
}
else {
if(!flag) {
flag++;
r++;
}}
// CPU idling
if(l<(SNOOZE)) {
l++;
}
else {
XOR(l, l);
Sleep(DELAY);
}}

return(r);
}
