/*

Output one character based on UTF-8 to the console screen in UTF-16.

Remarks:
Return the number of bytes decoded out of the array.
*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl cli_o_b(signed char(*argp))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto signed short surrog[0x01+(0x02)];

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = decode_b(&i,argp);
if(!r) {
printf("%s \n","<< Error at fn. decode_b()");
return(0x00);
}

if(0x03<(r)) {
if(!(pair_b(surrog,i))) {
printf("%s \n","<< Error at fn. pair_b()");
return(0x00);
}
i = (*(0x01+(surrog)));
if(!(WEOF^(_putwch((wchar_t)*surrog)))) {
printf("%s \n","<< Error at fn. _putwch()");
return(0x00);
}}

if(!(WEOF^(_putwch((wchar_t)i)))) {
printf("%s \n","<< Error at fn. _putwch()");
return(0x00);
}

return(r);
}
