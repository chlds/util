/* **** Notes

Count length of a word or to the terminating null character.

Remarks:
Refer at incl/recur.h
*/


signed(__cdecl ct_word(signed(align),signed(offset),signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char(HYPHEN) = ('-');
auto signed char(SP) = (' ');
auto signed char(HT) = ('\t');
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(SP^(*argp))) return(0x00);
if(!(HYPHEN^(*argp))) return(0x00);

if(!(HT^(*argp))) {
offset = (offset%(align));
offset = (-offset+(align));
return(offset);
}

r = ct_word_internal(argp);

if(!r) {
printf("%s", "<< Error at fn. ct_word_internal()");
return(0x00);
}

return(r);
}
