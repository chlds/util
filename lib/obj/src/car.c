/* **** Notes

Count column digits for a double word.
//*/


signed(__cdecl car(signed short(radix),signed(arg))) {

/* **** DATA, BSS and STACK */
auto signed short const(HEXA) = (0x10);
auto signed short const(DECI) = (0x0A);
auto signed short const(BINA) = (0x02);

/* **** CODE/TEXT */
if(radix<(BINA)) radix = (DECI);
if(HEXA<(radix)) radix = (DECI);

if(arg<(0x00)) arg = (0x01+(~(arg)));

arg = (arg/(radix));
if(!arg) return(0x01);

return(0x01+(car(radix,arg)));
}
