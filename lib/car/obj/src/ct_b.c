/* **** Notes

Count to the terminating null byte.
*/


signed int(__cdecl ct_b(signed char(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0);
if(!(*argp)) return(0);

argp++;
return(1+(ct_b(argp)));
}
