/* **** Notes

Remove trails.
*/


# define CAR
# include "./../../../incl/config.h"

signed(__cdecl rm_trails_r(signed(arg),signed char(*cache),signed char(*argp))) {

auto signed char *b = ("\t\n\r ");
auto signed r;

if(!arg) return(0x00);
if(!argp) return(0x00);

--argp;
r = ord(b,*argp);
if(!(r<(ct(b)))) {
if(cache) {
r = ord(cache,*argp);
if(!(r<(ct(cache)))) return(0x00);
}}

*argp = (0x00);

return(0x01+(rm_trails_r(--arg,cache,argp)));
}
