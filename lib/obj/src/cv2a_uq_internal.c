/* **** Notes

Convert the unsigned (or signed) quad word to the letters.

radix: Put the radix at.
di: Put the leading address of a buffer to retrieve out of an unsigned or signed number at.
si: Put the address for an unsigned or signed quad word at.

Remarks:
//*/


signed(__cdecl cv2a_uq_internal(signed short(radix), signed char(*di), unsigned long long(si))) {

/* **** DATA, BSS and STACK */
auto signed char const(*table) = ("0123456789ABCDEF");
auto signed char const(MINUS) = ('-');

auto signed(r);

/* **** CODE/TEXT */
if(!di) return(0x00);

r = si%(radix);
--di;
*di = (*table+(r));

si = si/(radix);
if(si<(0x01)) return(0x01);

return(1+(cv2a_uq_internal(radix, di, si)));
}
