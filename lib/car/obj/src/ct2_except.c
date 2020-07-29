/* **** Notes

Count letters to the terminating null character except for a letter you'd select.
*/


signed(__cdecl ct2_except(signed char(cache), signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed(d), (r);

/* **** CODE/TEXT */
if(!base) return(0x00);
if(!(*base)) return(0x00);

d = (d^(d));

r = ct2_except_internal(cache, &d, base);

return(d);
}
