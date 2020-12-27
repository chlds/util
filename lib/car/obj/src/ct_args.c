/* **** Notes

Count the arguments with a loop to the terminating null character.
*/


# include "./../../../incl/config.h"

signed(__cdecl ct_args(signed char(*argp))) {

/* **** DATA */
auto signed QUANTUM = (0x10);
auto signed SNOOZE = (0x04);
auto signed DELAY = (0x02*(QUANTUM));

auto signed char delimiter = (' ');
auto signed i,l,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);

XOR(flag,flag);
XOR(r,r);
XOR(l,l);
XOR(i,i);

while(*(argp+(i))) {
if(delimiter^(*(argp+(i++)))) {
if(!flag) {
OR(flag,0x01);
r++;
}}
else XOR(flag,flag);
// CPU idling
if(!(l<(SNOOZE))) {
XOR(l,l);
Sleep(DELAY);
}
else l++;
}

return(r);
}
