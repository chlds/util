/* **** Notes

Concatenate.

Remarks:
Release the *di later e.g., rl(di).
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl concatenate(signed(arg),signed char(**di),signed char(*si))) {
auto signed char *b;
auto signed r;
if(arg<(0x00)) return(0x00);
if(!di) return(0x00);
// if(!si) return(0x00);
// if(!(*di)) return(0x00);
r = ct(*di);
r = (r+(ct(si)));
r = (arg+(r));
r++;
r = (r*(sizeof(**di)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
if(!(cpy(b,*di))) *b = (0x00);
cpy(b+(ct(b)),si);
embed(0x00,*di);
if(*di) rl(*di);
*di = (b);
b = (0x00);
return(r);
}
