/* **** Notes

Count length of a word or to the terminating null character.
*/


signed(__cdecl ct_word(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(HYPHEN) = ('-');
auto signed char(SP) = (' ');

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(!(SP^(*argp))) return(0x00);
if(!(HYPHEN^(*argp))) return(0x00);

argp++;
return(0x01+(ct_word(argp)));
}
