/* **** Notes

Compare strings
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

signed(__cdecl cmp_lett(signed(*cache), signed char(*di), signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed const(QUANTUM) = (0x10);
auto signed const(SNOOZE) = (0x08);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto signed(i), (j), (l), (r);
auto signed char(c);

/* **** CODE/TEXT */
if(!cache) return(~(NIL));
if(!di) return(~(NIL));
if(!si) return(~(NIL));

XOR(l, l);
XOR(i, i);

while(*(si+(i))) {
c = (*(di+(i)));
if(!(c^(*(si+(i))))) {
}
else {
break;
}
i++;
// CPU idling
if(l<(SNOOZE)) {
l++;
}
else {
XOR(l, l);
Sleep(DELAY);
}}

c = (*(di+(i)));
*cache = (signed) (c+(1+(~(*(si+(i))))));

return(0x01);
}
