/* **** Notes

Convert to an signed interger out of the letters.

Remarks:
Being deprecated..
*/


# define C_CODE_STDS
# include "./../../../incl/config.h"

signed char(__cdecl cv_lett(signed(*di), signed char(*si))) {

/* **** DATA, BSS and STACK */
// auto signed const(LIMIT) = (3600);
auto signed const(RADIX) = (0x0A);
auto signed const(TABLE) = (0x0A);

auto signed const(QUANTUM) = (0x10);
auto signed const(DELAY) = (0x02*(QUANTUM));

auto signed char const(*table) = ("0123456789ABCDEF");

auto signed(i), (j), (l), (r);
auto signed(d), (s);
auto signed char(c);

/* **** CODE/TEXT */
if(!si) return(~(NIL));
if(!di) return(~(NIL));

XOR(l, l);
XOR(i, i);
XOR(d, d);

while(*(si+(l))) {
c = (*(si+(l++)));
XOR(i, i);
while(i<(TABLE)) {
if(!(c^(*(table+(i))))) {
d = (i+RADIX*(d)) /* % (LIMIT) */ ;
break;
}
else {
i++;
}}
// CPU idling
Sleep(DELAY);
}

/* **** Set to argument DI */
if(!('-'^(*si))) {
if(!('-'^(*(si+(1))))) {
*(di) = (d);
}
else {
*(di) = (1+(~(d)));
}}

else {
*(di) = (d);
}

return(0x00);
}
