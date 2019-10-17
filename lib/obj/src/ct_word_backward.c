/* **** Notes

Count length of a word backward

Remarks:
Refer at incl/recur.h
Refer at fn. out_beta and fn. out_beta_internal
*/


signed(__cdecl ct_word_backward(signed(left),signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed char const(HYPHEN) = ('-');
static signed char const(SP) = (' ');
static signed char const(HT) = ('\t');

/* **** CODE/TEXT */
if(left<(0x00)) return(0x00);
if(!left) return(0x00);
if(!argp) return(0x00);

if(!(*(--argp))) return(0x00);

if(!(HT^(*argp))) return(0x00);
if(!(SP^(*argp))) return(0x00);
if(!(HYPHEN^(*argp))) return(0x00);

return(0x01+(ct_word_backward(--left,argp)));
}
