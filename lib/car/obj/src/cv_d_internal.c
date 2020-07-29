/* **** Notes

Convert a signed double word into letters.

Remarks:
Return (0x00) if the function fails.
//*/


signed(__cdecl cv_d_internal(signed short(radix),signed char(*di),signed(si))) {

/* **** DATA, BSS and STACK */
auto signed char *table = ("0123456789ABCDEF");

auto signed i,r;

/* **** CODE/TEXT */
if(!di) return(0x00);

if(si<(0x00)) si = (0x01+(~(si)));

r = si%(radix);
--di;
*di = (*(r+(table)));

si = si/(radix);
if(!si) return(0x01);

return(0x01+(cv_d_internal(radix,di,si)));
}
