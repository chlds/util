/* **** Notes

Count letters to specific/special characters or to the terminating null character.

Remarks:
Refer at fn. ct_word

Add support for Unicode characters
*/


signed(__cdecl ct2specials(signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed const AH_8 = (0x80); // i.e., a sequential byte expressed in .io**.**** for an n-byte character in UTF-8.
static signed char const HYPHEN = ('-');
static signed char const SP = (' ');
static signed char const HT = ('\t');
// also
static signed char const LF = ('\n');

auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!('\t'^(*argp))) return(0x00);
if(!(' '^(*argp))) return(0x00);
if(!('-'^(*argp))) return(0x00);
// also
if(!(LF^(*argp))) return(0x00);


//* Support for Unicode characters
r = nbytechar(*argp);
if(!r) {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}
if(!(AH_8^(r))) {
printf("%s\n","<< Error at fn. nbytechar()");
return(0x00);
}
argp = (argp+(r));
//*/


// argp++;

return(0x01+(ct2specials(argp)));
}
