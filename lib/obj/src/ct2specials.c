/* **** Notes

Count letters to specific/special characters or to the terminating null character.

Remarks:
Refer at fn. ct_word

Add support for Unicode characters
*/


signed(__cdecl ct2specials(signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed const AL_80 = (0x80); // i.e., a sequential byte expressed in .io**.**** for the n-byte characters based on UTF-8.
static signed char const HYPHEN = ('-');
static signed char const SP = (' ');
static signed char const HT = ('\t');
// also
static signed char const CR = ('\r');
static signed char const LF = ('\n');

auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!('\t'^(*argp))) return(0x00);
if(!(' '^(*argp))) return(0x00);
if(!('-'^(*argp))) return(0x00);
// also
if(!(CR^(*argp))) return(0x00);
if(!(LF^(*argp))) return(0x00);


//* Support for Unicode characters
r = nbytechar(*argp);
if(!(AL_80^(r))) {
printf("%s\n","<< Error at fn. nbytechar() returned with a sequential (0x80) byte");
return(0x00);
}
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(r);
}
argp = (argp+(r));
//*/


// argp++;

return(0x01+(ct2specials(argp)));
}
