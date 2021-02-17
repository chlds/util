/* **** Notes

Release.

Remarks:
Refer at fn. keep and fn. keep_w.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl release(signed(arg),void(**argp))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed i,r;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
if(!(*argp)) return(0x00);

b = (signed char(*)) (*argp);

r = embed(arg,b);
if(!r) {
r = cli_message(r,"<< Error at fn. embed() \n");
return(0x00);
}

rl(b);
b = (0x00);
*argp = (b);

return(r);
}
