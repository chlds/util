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

signed(__cdecl cli_in(signed(*character),signed char(*argp),signed(size))) {

/* **** DATA, BSS and STACK */
static signed char LOW = (0xE0);
static signed THRESHOLD = (0x01+(0x04));
static signed SEQ_FLAG = (0x80);

static signed high[] = {
(signed) (0x91),
(signed) (0x8D),
(signed) (0x8A),
(signed) (0x89),
(signed) (0x86),
(signed) (0x85),
(signed) (0x00),
};

auto signed c,i,r;
auto signed short flag;
auto signed char low;

/* **** CODE/TEXT */
if(!character) return(0x00);
if(!argp) return(0x00);
if(size<(THRESHOLD)) return(0x00);

// initialise
*character = (0x00);

c = _getch();
*argp = (signed char) (c);
argp++;

// check for function and arrow keys
if(!(0xE0^(c))) low = (0xE0);
else low = (0x00);

// also
if(!c) {
c = _getch();
r = cli_support_meta_keys(character,c/* second */,0x00/* first */);
if(!r) {
printf("%s\n","<< Error at fn. cli_support_meta_keys()");
return(0x00);
}
return(r);
}

r = nbytechar(c);
if(!(SEQ_FLAG^(r))) {
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
if(low) {
r = nbytechar(c);
if(!(0x01^(r))) {
// i.e., not a sequential byte in UTF-8
r = cli_support_meta_keys(character,c/* second */,0xE0/* first */);
if(!r) {
printf("%s\n","<< Error at fn. cli_support_meta_keys()");
return(0x00);
}
return(r);
}
if(!(LOW^(low))) {
// ..now have no good ideas on key F11 (0xE0,0x85,), key F12 (0xE0,0x86,), key ctrl-up (0xE0,0x8D,) and key ctrl-down (0xE0,0x91,).
low = (0x00);
i = (0x00);
while(*(high+(i))) {
if(!(c^(*(high+(i))))) low = ((signed char) *(high+(i)));
i++;
}
if(low) {
r = cli_support_meta_keys(character,low/* second */,LOW/* first */);
if(!r) {
printf("%s\n","<< Error at fn. cli_support_meta_keys()");
return(0x00);
}
return(r);
}}
else {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}}
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
