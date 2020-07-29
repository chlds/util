/* **** Notes

Count to a symbol or to the terminating null character.

Remarks:
Return the number of bytes to characters in UTF-8.
Count as a character for the Tab.
*/


# include <stdio.h>

signed(__cdecl count_to(signed char(*sym),signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed const AL_80 = (0x80); // i.e., a sequential byte expressed in .io**.**** for the n-byte characters based on UTF-8.
auto signed r;
auto signed char c;

/* **** CODE/TEXT */
if(!sym) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

c = (*argp);
r = (0x00);

while(*(sym+(r))) {
if(!(c^(*(sym+(r))))) return(0x00);
r++;
}

/*
r = nbytechar(*argp);
if(!(AL_80^(r))) {
printf("%s\n","<< Error at fn. nbytechar() returned with a sequential (0x80) byte");
return(0x00);
}
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(r);
}
argp = (r+(argp));
//*/

argp++;

return(0x01+(count_to(sym,argp)));
}
