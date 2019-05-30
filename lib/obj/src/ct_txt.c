/* **** Notes

Count letters to the terminating null character.

Remarks:
Along with alignement of the tab.
Also using along with fn. ct_txt_internal
*/


signed(__cdecl ct_txt(signed(align), signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed(count), (r);

/* **** CODE/TEXT */
if(!base) return(0x00);

count = (count^(count));

r = ct_txt_internal(align, &count, base);

if(!r) return(0x00);

return(count);
}
