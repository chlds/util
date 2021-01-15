/* **** Notes

Concatenate.

Remarks:
Release the *di later e.g., rl(di).
Refer at fn. rl.
Along with C library
//*/


# define CAR
# include <stdlib.h>
# include "../../../incl/config.h"

signed(__cdecl concatenate(signed(arg),signed char(**di),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed char *b;
auto signed r;
auto signed short flag;

/* **** CODE/TEXT */
if(arg<(0x00)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);
// if(!(*di)) return(0x00);

r = ct(*di);
r = (r+(ct(si)));
r = (arg+(r));
r++;
r = (r*(sizeof(**di)));
if(r<(0x01)) return(0x00);

b = (signed char(*)) malloc(r);
if(!b) return(0x00);

if(!(cpy(b,*di))) *b = (0x00);
cpy(b+(ct(b)),si);

embed(0x00,*di);
if(*di) free(*di);

*di = (b);
b = (0x00);

return(r);
}
