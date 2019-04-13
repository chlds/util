/* **** Notes

Call fn. catpp
*/


signed int(__cdecl catppp(signed char(***argp))) {

/* **** DATA, BSS and STACK */
auto signed int(r);

/* **** CODE/TEXT */
if(!argp) return(0);
if(!(*argp)) return(0);

r = catpp(*argp);

argp++;
return(1+(catppp(argp)));
}
