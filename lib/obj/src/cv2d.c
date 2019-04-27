/* **** Notes

Convert to the (unsigned or) signed double word.

radix: Put the radix at.
di: Put the address to retrieve the unsigned or signed number at.
base: Put the leading address of an array for letters at.

Remarks:
A wrapper function to
initialise the arguments for fn. cv2d_internal e.g., to
determine the presence or absense of a sign.
*/


signed(__cdecl cv2d(signed short(radix), signed(*di), signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed const(LIMIT) = (3600);
auto signed short const(HEXA) = (0x10);
auto signed short const(BINA) = (0x02);
auto signed char const(MINUS) = ('-');

auto signed(r);
auto signed short(flag) = (0x00);

/* **** CODE/TEXT */
if(!base) return(0x00);
if(radix<(BINA)) radix = (BINA);
if(HEXA<(radix)) radix = (HEXA);

if(!(MINUS^(*base))) flag++;
if(*di) *di = (*di^(*di));

r = cv2d_internal(radix, di, base);

if(!r) return(0x00);

if(flag) *di = (0x01+(~(*di)));
// else printf("%s%lld\n", "*di is: ", *di);

return(r);
}
