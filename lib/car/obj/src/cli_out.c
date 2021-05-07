/*

Output one character based on UTF-8 to the console screen.

Remarks:
Return the number of bytes decoded out of the array.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_out(signed char(*argp))) {

auto signed char *p;
auto signed i,l,r;
auto signed short surrog;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = decode_b(&i,argp);
if(!r) {
printf("%s \n","<< Error at fn. decode_b()");
return(0x00);
}

l = (r);

if(0x03<(l)) {
r = decode_surrogate_first(&surrog,i);
if(!r) {
printf("%s \n","<< Error at fn. decode_surrogate_first()");
return(0x00);
}
r = _putwch((wchar_t)surrog);
if(!(WEOF^(r))) {
printf("%s \n","<< Error at fn. _putwch()");
return(0x00);
}
r = decode_surrogate_second(&surrog,i);
if(!r) {
printf("%s \n","<< Error at fn. decode_surrogate_second()");
return(0x00);
}
i = (signed) (surrog);
}

r = _putwch((wchar_t)i);
if(!(WEOF^(r))) {
printf("%s \n","<< Error at fn. _putwch()");
return(0x00);
}

return(l);
}
