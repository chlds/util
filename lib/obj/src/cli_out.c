/*

Output one character to the console screen.

Remarks:
Return the number of bytes for one character.
*/


# include <stdio.h>

signed(__cdecl cli_out(signed char(*argp))) {

auto signed char *p;
auto signed i,r;

if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = decode2uni(&i,argp);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}

i = _putwch((wchar_t)i);
if(!(WEOF^(i))) {
printf("%s\n","<< Error at fn. _putwch()");
return(0x00);
}

return(r);
}
