/* **** Notes

Count letters to specific/special characters or to the terminating null character.

Remarks:
refer at fn. ct_word_internal
*/


signed(__cdecl ct2specials(signed char(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!('\t'^(*argp))) return(0x00);
if(!(' '^(*argp))) return(0x00);
if(!('-'^(*argp))) return(0x00);
// or..

argp++;
return(0x01+(ct2specials(argp)));
}
