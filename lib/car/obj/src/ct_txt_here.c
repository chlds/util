/* **** Notes

Count letters along with alignement of the tab to the current (or specific) address.

Remarks:
Along with alignement of the tab.
Also using along with fn. ct_txt_here_internal
*/


signed(__cdecl ct_txt_here(signed(align), signed char(*di), signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed(count), (r);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!base) return(0x00);

count = (count^(count));

r = ct_txt_here_internal(align,&count,di,base);

if(!r) return(0x00);

return(count);
}
