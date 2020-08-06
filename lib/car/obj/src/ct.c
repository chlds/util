/* **** Notes

Count letters to the terminating null character.
*/


signed(__cdecl ct(signed char(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

argp++;
return(0x01+(ct(argp)));
}
