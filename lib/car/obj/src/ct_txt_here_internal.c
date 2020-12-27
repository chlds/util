/* **** Notes

Count letters along with alignement of the tab to the current (or specific) address.

Remarks:
Along with alignement of the tab.
*/


signed(__cdecl ct_txt_here_internal(signed(align),signed(*argp),signed char(*di),signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed char const HT = (0x09);
auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!di) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x00);

if(di==(base)) return(0x00);
if(di<(base)) return(0x00);

if(!(HT^(*base))) {
r = (*argp);
r = (r%(align));
r = (-r+(align));
*argp = (r+(*argp));
}
else (*argp)++;

base++;

return(0x01+(ct_txt_here_internal(align,argp,di,base)));
}
