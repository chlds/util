/* **** Notes

Clip

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl clip_rl(signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
b = (argp);
r = ct(b);
r = (r+(0x01+(~arg)));
b = (0x00);
if(!(r<(0x00))) {
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(b) {
if(!(cpy(b,arg+(argp)))) *b = (0x00);
}}
embed(0x00,argp);
rl(argp);
argp = (0x00);
return(b);
}
