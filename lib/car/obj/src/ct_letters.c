/* **** Notes

Count the number of Unicode letters based on UTF-8 to the terminating null character.

Remarks:
Refer at fn. ct_characters.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl ct_letters(signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed const AL_80 = (0x80); // i.e., a sequential byte expressed in .io**.**** for the n-byte characters based on UTF-8.
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = nbytechar(*argp);
if(!(AL_80^(r))) {
printf("%s\n","<< Error at fn. nbytechar() returned with a sequential (0x80) byte");
return(0x00);
}
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(r);
}

AND(flag,0x00);
if(!(SP^(*argp))) flag++;
if(!(HT^(*argp))) flag++;

argp = (argp+(r));

r = (0x01);
if(flag) AND(r,0x00);

return(r+(ct_letters(argp)));
}
