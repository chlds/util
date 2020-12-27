/* **** Notes

Count letters along with alignement of the tab to the current (or specific) address.

Remarks:
Along with alignement of the tab.
*/


signed(__cdecl ct_txt_here(signed(align),signed char(*di),signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed i,r;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!base) return(0x00);

i = (0x00);
r = ct_txt_here_internal(align,&i,di,base);
if(!r) return(0x00);

return(i);
}
