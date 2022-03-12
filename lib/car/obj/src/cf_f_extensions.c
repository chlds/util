/* **** Notes

Confirm file name extensions.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl cf_f_extensions(signed char(*cache),signed char(*argp/* path */))) {

auto signed char *b;
auto signed r;

if(!cache) return(0x00);
if(!argp) return(0x00);

r = ct(cache);
if(!(r<(ct(argp)))) return(0x00);

b = (argp);
r = (0x01+(~r));
r = (r+(ct(b)));
b = (r+(b));
if(cmpr(&r,cache,b)) {
if(!r) return(0x01);
}

return(0x00);
}
