/* **** Notes

Count length of a word or to the terminating null character.

Remarks:
Refer at incl/recur.h
*/


signed(__cdecl ct_word(signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed char const(HYPHEN) = ('-');
static signed char const(SP) = (' ');
static signed char const(HT) = ('\t');

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(HT^(*argp))) return(0x00);
if(!(SP^(*argp))) return(0x00);
if(!(HYPHEN^(*argp))) return(0x00);

argp++;
return(0x01+(ct_word(argp)));
}
