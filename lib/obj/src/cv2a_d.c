/* **** Notes

Convert the (unsigned or) signed double word to the letters.

radix: Put the radix at.
di: Put the leading address of a buffer to retrieve out of an unsigned or signed number at.
si: Put the address for an unsigned or signed double word at.

Remarks:
Consider how to check the buffer size of a pointer put on arguments..
//*/


signed(__cdecl cv2a_d(signed short(radix), signed char(*di), signed(si))) {

/* **** DATA, BSS and STACK */
auto signed char const(*table) = ("0123456789ABCDEF");
auto signed char const(MINUS) = ('-');
auto signed short const(HEXA) = (0x10);
auto signed short const(BINA) = (0x02);

auto signed(r);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(radix<(BINA)) radix = (BINA);
if(HEXA<(radix)) radix = (HEXA);

/* **** Pending..
if(r<(sizeof(di))) di = (di+(r));
else return(0x00);
//*/

r = col_d(radix, si);
if(!r) return(0x00);
// else printf("%s%d\n", "r = col_d(si) is: ", r);

if(si<(0x00)) {
*di = ('-');
si = (1+(~(si)));
r = (0x02+(r));
}
else r = (0x01+(r));

di = (di+(r));
--di;
*di = (0x00);
r = cv2a_d_internal(radix, di, si);
if(!r) return(0x00);

return(r);
}
