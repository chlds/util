/* **** Notes

Find whitespace.
*/


signed(__cdecl find_ws(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(SP) = (' ');
auto signed char const(HT) = ('\t');
// auto signed char const(SP) = (0x20);
// auto signed char const(HT) = (0x09);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(!(SP^(*argp))) return(0x00);
if(!(HT^(*argp))) return(0x00);

argp++;
return(0x01+(find_ws(argp)));
}
