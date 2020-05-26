/*

Get a byte or bytes encoded in UTF-8 for one character based on UTF-8 out of the key board.
Also get the Unicode character.

Remarks:
Return the number of bytes for one character.

Notes:
Call fn. _getch twice to read <Ctrl-@>.
The first call returns (0x00) and the second call returns (0x03)..
*/


# define BUFF (0x08)

# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include "../../../incl/cli.h"

signed(__cdecl cli_in_w(signed(*character),signed char(*argp),signed(size))) {

/* **** DATA, BSS and STACK */
static signed char LOW = (0xE0);
static signed THRESHOLD = (0x01+(0x04));
static signed SEQ_FLAG = (0x80);
static signed SECOND = (0xDC00);
static signed FIRST = (0xD800);

static signed high[] = {
(signed) (0x91),
(signed) (0x8D),
(signed) (0x8A),
(signed) (0x89),
(signed) (0x86),
(signed) (0x85),
(signed) (0x00),
};

auto signed short buff[BUFF];
auto signed short *w;
auto signed char *b;
auto signed surrog;

auto signed c,i,r;
auto signed short flag;
auto signed char low;

/* **** CODE/TEXT */
if(!character) return(0x00);
if(!argp) return(0x00);
if(size<(THRESHOLD)) return(0x00);

// initialise
*character = (0x00);

w = (buff);
surrog = (0x00);
c = _getwch();
*w = (c);
w++;
if(!(FIRST^(c&(FIRST)))) {
surrog = _getwch();
if(SECOND^(surrog&(SECOND))) surrog = (0x00);
else {
*w = (surrog);
w++;
}}
*w = (0x00);

// check for function and arrow keys
flag = (0x00);
low = (0x00);
if(!(0xE0^(c))) {
flag++;
low = (0xE0);
}
if(!c) flag++;

if(flag) {
c = _getwch();
r = cli_support_meta_keys(character,c/* second */,low/* first */);
if(!r) {
printf("%s\n","<< Error at fn. cli_support_meta_keys()");
return(0x00);
}
return(r);
}

if(surrog) {
r = encode_surrogate_bw(size,argp,surrog/* second */,c/* first */);
if(!r) {
printf("%s\n","<< Error at fn. encode_surrogate_bw()");
return(0x00);
}}

else {
r = encode_bw(&b,buff);
if(!r) {
printf("%s\n","<< Error at fn. encode_bw()");
return(0x00);
}
r = cpy(argp,b);
free(b);
b = (0x00);
}

r = decode2uni(character,argp);
if(!r) {
printf("%s\n","<< Error at fn. decode2uni()");
return(0x00);
}

return(r);
}
