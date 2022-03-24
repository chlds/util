/* **** Notes

Detect keys.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl agent_dk_r(signed(arg),signed char(*argp))) {

auto signed char *b;
auto signed r;
auto signed short flag;

if(!arg) return(0x00);
if(!argp) return(0x00);

b = (argp);
if(arg<(0x00)) printf("(00h) ");

while(*b) {
r = (signed) (0xFF&(*b));
printf("%02Xh ",r);
b++;
}

return(agent_dk_rr(arg,argp));
}
