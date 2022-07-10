/* **** Notes

Count letters up to specific/special characters or to the terminating null character

Remarks:
Refer at fn. cue
Add support for UTF-8
*/


# define CAR_H
# define STDIO_H
# include "./../../../config.h"

signed(__cdecl ct_to(signed char(*cache),signed char(*argp))) {
auto signed r;
auto signed AL_80 = (0x80); // i.e., a sequential byte expressed in .io**.**** for the n-byte characters based on UTF-8.
auto signed char sym[] = {
SP,HT,0x00,
};
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(CTRL_KEYS<((signed) 0xFF&(*argp)))) return(0x00);
if(cache) {
r = ord(cache,*argp);
if(r<(ct(cache))) return(0x00);
}
r = ord(sym,*argp);
if(r<(ct(sym))) return(0x00);
//* Add support for UTF-8
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
