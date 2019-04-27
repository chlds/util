/* **** Notes

Count letters to the terminating null character.

Remarks:
Being deprecated..
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

signed char(__cdecl ct_lett(signed int(*di), signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed int const(QUANTUM) = (0x10);
auto signed int const(SNOOZE) = (0x04);
auto signed int const(DELAY) = (0x02*(QUANTUM));

auto signed int(i), (j);
auto signed char(c);

/* **** CODE/TEXT */
if(!si) return(~(NIL));
if(!di) return(~(NIL));

XOR(j, j);
XOR(i, i);

while(*(si+(i))) {
(i++);
// CPU idling
if(j<(SNOOZE)) {
(j++);
}
else {
XOR(j, j);
Sleep(DELAY);
}}

*di = (i);

return(0x00);
}
