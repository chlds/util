/* **** Notes

Count to the terminating null quad word.
*/


signed int(__cdecl ct_q(signed long long(*argp))) {

/* **** CODE/TEXT */
if(!argp) return(0);
if(!(*argp)) return(0);

argp++;
return(1+(ct_q(argp)));
}
