/* **** Notes

Duplicate

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed char *(__cdecl dupl_b(signed(arg),signed char(*argp))) {
auto signed char *b;
auto signed r;
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
r = (arg);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
if(!(ncpy(arg,b,argp))) {
if(arg) {
embed(0x00,b);
rl(b);
b = (0x00);
}}
return(b);
}
