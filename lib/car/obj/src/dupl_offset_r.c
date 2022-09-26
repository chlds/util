/* **** Notes

Duplicate
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl dupl_offset_r(signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!(EQ(arg,ct(argp)))) return(0x00);
if(*argp) {
if(!(ct_a(argp))) return(0x00);
}
r = (arg);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(b);
if(!(cpy(b,argp))) {
if(arg) {
embed(0x00,b);
rl(b);
b = (0x00);
}}
return(b);
}
