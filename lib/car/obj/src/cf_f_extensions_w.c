/* **** Notes

Confirm file name extensions.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cf_f_extensions_w(signed short(*cache),signed short(*argp/* path */))) {

auto signed short *w;
auto signed r;

if(!cache) return(0x00);
if(!argp) return(0x00);

r = ct_w(cache);
if(!(r<(ct_w(argp)))) return(0x00);

w = (argp);
r = (0x01+(~r));
r = (r+(ct_w(w)));
w = (r+(w));
if(cmpr_w(&r,cache,w)) {
if(!r) return(0x01);
}

return(0x00);
}
