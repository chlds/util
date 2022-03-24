/* **** Notes

Detect keys.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_dk_rr(signed(arg),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);

if(!(decode_keys(arg,&r,argp))) {
printf("%s \n","<< Error at fn. decode_keys()");
return(0x00);
}

AND(flag,0x00);
if(!r) {
if(0x01<(ct(argp))) OR(flag,0x01);
if(arg<(0x00)) OR(flag,0x01);
if(flag) {
printf("{%s} ","MetaKey:00h/0Eh");
return(0x01);
}}

return(agent_dk_rrr(r,argp));
}
