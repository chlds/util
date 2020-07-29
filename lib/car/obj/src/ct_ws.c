/* **** Notes

Count the whitespace.
*/


signed(__cdecl ct_ws(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(WS) = (' ');
// auto signed char const(WS) = (0x20);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(WS^(*argp)) return(0x00);

argp++;
return(1+(ct_ws(argp)));
}
