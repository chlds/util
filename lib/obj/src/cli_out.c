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

r = nbytechar(*argp);
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}

i = (r);

r = decode2uni(r,argp);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}

r = _putwch((wchar_t)r);
if(!(WEOF^(r))) {
printf("%s\n","<< Error at fn. _putwch()");
return(0x00);
}

return(i);
}
