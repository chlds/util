/* **** Notes

Convert to the unsigned (or signed) quad word.

radix: Put the radix at.
di: Put the address to retrieve the unsigned or signed number at.
base: Put the leading address of an array for letters at.

Remarks:
Use an initialisation wrapper function to
initialise the arguments e.g., to
determine the presence or absense of a sign.
*/


signed(__cdecl cv2uq_internal(signed short(radix), unsigned long long(*di), signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed const(LIMIT) = (3600);
auto signed char const(*table) = ("0123456789ABCDEF");

auto signed(r);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!base) return(0x00);
if(!(*base)) return(0x00);

r = tablescan(*base, table);

if(r<(radix)) *di = (r+radix*(*di)) /* % LIMIT */ ;

base++;
return(1+(cv2uq_internal(radix, di, base)));
}
