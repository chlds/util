/*

Get a byte or Unicode bytes for one character based on UTF-8 out of the key board.
Also get the Unicode character.

Remarks:
Return the number of bytes for one character.
*/


# include <stdio.h>

signed(__cdecl cli_in(signed *character,signed char *argp,signed argp_size)) {

auto signed const THRESHOLD = (0x01+(0x04));
auto signed c,i,r;

if(!argp) return(0x00);
if(argp_size<(THRESHOLD)) return(0x00);

c = _getch();
*argp = (signed char) (c);
argp++;

r = nbytechar(c);
if(!(0x80^(r))) {
printf("%s\n","<< Error at fn. nbytechar() returned with a sequential (0x80) byte");
return(0x00);
}
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(r);
}

i = (r);

while(--i) {
c = _getch();
*argp = (signed char) (c);
argp++;
}

*argp = (signed char) (0x00);

r = decode2uni(character,-r+(argp));

if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}

return(r);
}
