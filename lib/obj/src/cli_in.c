/*

Get a byte or Unicode bytes for one character based on UTF-8 out of the key board.
Also get the Unicode character.

Remarks:
Return the number of bytes for one character.

Notes:
Call fn. _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
*/


# include <stdio.h>
# include "../../../incl/cli.h"

signed(__cdecl cli_in(signed *character,signed char *argp,signed argp_size)) {

auto signed const THRESHOLD = (0x01+(0x04));
auto signed c,i,r;

if(!argp) return(0x00);
if(argp_size<(THRESHOLD)) return(0x00);

c = _getch();
*argp = (signed char) (c);
argp++;


if(!c) {
*character = (0x00);
// call fn. _getch twice to read <Ctrl-@>.
// the second call returns (0x03).
c = _getch();
if(!(c^(0x03))) return(0x01);
else {
printf("%s\n","<< Error at fn. _getch()");
return(0x00);
}}


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
