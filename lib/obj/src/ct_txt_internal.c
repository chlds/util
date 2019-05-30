/* **** Notes

Count letters to the terminating null character.

Remarks:
Along with alignement of the tab.
*/


signed(__cdecl ct_txt_internal(signed(align), signed(*argp), signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed char const(HT) = (0x09);
auto signed(count), (r);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x00);

if(!(HT^(*base))) {
count = (*argp);
r = (count%(align));
r = (-r+(align));
(*argp) = (r+(*argp));
}

else (*argp)++;

base++;
return(1+(ct_txt_internal(align, argp, base)));
}
