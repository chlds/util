/* **** Notes

Count offset out of the last arg.
*/


signed(__cdecl ct_offset_out_of_last(signed char(arg), signed char(*argp))) {

auto signed r;

/* **** CODE/TEXT */
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

r = ct(argp);
r = ct_offset_out_of_last_internal(arg,r,argp);

return(r);
}
