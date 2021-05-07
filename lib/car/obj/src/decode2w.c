/*

Decode bytes into characters based on UTF-16.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl decode2w(signed(size),signed short(*di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,l,r;
auto signed short surrog;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

if(size<(sizeof(*di))) {
*di = (0x00);
return(0x00);
}

if(!(*si)) {
*di = (0x00);
return(0x00);
}

r = decode_b(&i,si);
if(!r) {
*di = (0x00);
printf("%s \n","<< Error at fn. decode_b()");
return(0x00);
}

AND(l,0x00);
si = (r+(si));
if(0x03<(r)) {
r = decode_surrogate_first(&surrog,i);
if(!r) {
*di = (0x00);
printf("%s \n","<< Error at fn. decode_surrogate_first()");
return(0x00);
}
*di = (surrog);
di++;
size = (size+(0x01+(~(sizeof(*di)))));
if(size<(sizeof(*di))) {
*(--di) = (0x00);
return(0x00);
}
l++;
r = decode_surrogate_second(&surrog,i);
if(!r) {
*(--di) = (0x00);
printf("%s \n","<< Error at fn. decode_surrogate_second()");
return(0x00);
}
i = (signed) (surrog);
}

*di = (signed short) (i);
di++;
size = (size+(0x01+(~(sizeof(*di)))));
l++;

return(l+(decode2w(size,di,si)));
}
