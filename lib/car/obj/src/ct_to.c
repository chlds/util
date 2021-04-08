/* **** Notes

Count letters up to specific/special characters or to the terminating null character.

Remarks:
Refer at fn. cue
Add support for Unicode characters
Based on UTF-8
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl ct_to(signed char(*cache),signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed const AL_80 = (0x80); // i.e., a sequential byte expressed in .io**.**** for the n-byte characters based on UTF-8.
static signed char sym[] = {
SP,HT,0x00,
};
auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(CTRL_KEYS<((signed) 0xFF&(*argp)))) return(0x00);

if(cache) {
r = ord(cache,*argp);
if(r<(ct(cache))) return(0x00);
}

r = ord(sym,*argp);
if(r<(ct(sym))) return(0x00);

//* Support for Unicode characters
r = nbytechar(*argp);
if(!(AL_80^(r))) {
printf("%s \n","<< Error at fn. nbytechar() returned with a sequential (0x80) byte");
return(0x00);
}
if(!r) {
printf("%s \n","<< Error at fn. nbytechar()");
return(r);
}
argp = (r+(argp));
//*/

// argp++;

return(r+(ct_to(cache,argp)));
}
