/* **** Notes

Count up to a non-blank place (or to the terminating null character).
*/


signed(__cdecl ct2nonblank(signed char(*argp))) {

/* **** DATA, BSS and STACK */
static signed char const(SP) = (' ');

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);
if(SP^(*argp)) return(0x00);

argp++;
return(0x01+(ct2nonblank(argp)));
}
