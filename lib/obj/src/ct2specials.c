/* **** Notes

Count letters to specific/special characters or to the terminating null character.

Remarks:
refer at fn. ct_word
*/


signed(__cdecl ct2specials(signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed char const HYPHEN = ('-');
static signed char const SP = (' ');
static signed char const HT = ('\t');
// also
static signed char const LF = ('\n');

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!('\t'^(*argp))) return(0x00);
if(!(' '^(*argp))) return(0x00);
if(!('-'^(*argp))) return(0x00);
// also
if(!(LF^(*argp))) return(0x00);

argp++;
return(0x01+(ct2specials(argp)));
}
