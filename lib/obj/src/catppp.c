/* **** Notes

Call fn. catpp
*/


signed(__cdecl catppp(signed char(***argp))) {

/* **** DATA, BSS and STACK */
auto signed(r);

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = catpp(*argp);

argp++;
return(1+(catppp(argp)));
}
