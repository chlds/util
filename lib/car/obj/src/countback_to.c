/* **** Notes

Count back to a symbol or to the leading address.

Remarks:
Return the number of bytes to characters in UTF-8.
Count as a character for the Tab.
*/


# include <stdio.h>

signed(__cdecl countback_to(signed char(*edge),signed char(*sym),signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed const AL_80 = (0x80); // i.e., a sequential byte expressed in .io**.**** for the n-byte characters based on UTF-8.

auto signed r;
auto signed char c;

/* **** CODE/TEXT */
if(!edge) return(0x00);
if(!sym) return(0x00);
if(!argp) return(0x00);

if(argp<(edge)) return(0x00);

if(EQ(edge,argp)) return(0x00);

if(!(*(--argp))) return(0x00);

--argp;
/*
while(0x01) {
r = nbytechar(*argp);
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(r);
}
if(AL_80^(r)) break;
--argp;
}
//*/

c = (*argp);
r = (0x00);

while(*(sym+(r))) {
if(!(c^(*(sym+(r))))) return(0x01);
r++;
}

return(0x01+(countback_to(edge,sym,argp)));
}
