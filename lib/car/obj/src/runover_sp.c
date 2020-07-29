/* **** Notes

Run over space.
*/


signed(__cdecl runover_sp(signed char(*argp))) {

/* **** DATA, BSS and STACK */
auto signed char const(SP) = (' ');

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

if(SP^(*argp)) return(0x00);

argp++;
return(0x01+(runover_sp(argp)));
}
