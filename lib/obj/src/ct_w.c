/* **** Notes

Count to the terminating null word.
*/


signed int(__cdecl ct_w(signed short(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0);
if(!(*argp)) return(0);

argp++;
return(1+(ct_w(argp)));
}
