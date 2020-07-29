/* **** Notes

Count to the terminating null double word.
*/


signed int(__cdecl ct_d(signed int(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0);
if(!(*argp)) return(0);

argp++;
return(1+(ct_d(argp)));
}
