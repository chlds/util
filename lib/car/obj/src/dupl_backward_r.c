/* **** Notes

Duplicate

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl dupl_backward_r(signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
r = (arg);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
argp = (argp+(ct(argp)));
argp = (argp+(0x01+(~arg)));
if(!(cpy(b,argp))) {
if(arg) {
embed(0x00,b);
rl(b);
b = (0x00);
}}
return(b);
}
