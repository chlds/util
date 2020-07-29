/* **** Notes

Count the number of Unicode characters based on UTF-8 to the terminating null character.

Remarks:
Count as a character for the Tab.
*/


signed(__cdecl cli_count(signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed const AL_80 = (0x80); // i.e., a sequential byte expressed in .io**.**** for the n-byte characters based on UTF-8.
auto signed r;

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

argp = (argp+(r));

return(0x01+(cli_count(argp)));
}
