/* **** Notes

Count letters to the terminating null character.

Remarks:
Along with alignement of the tab.
*/


signed(__cdecl ct_txt(signed(align),signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!base) return(0x00);

i = (0x00);
r = ct_txt_internal(align,&i,base);
if(!r) return(0x00);

return(i);
}
