/* **** Notes

Concatenate

Remarks:
Call fn. rl later
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cat_a_b(signed char(**di),signed char(*si))) {
auto signed char *b;
auto signed r;
if(!di) return(0x00);
// if(!si) return(0x00);
// if(!(*di)) return(0x00);
r = ct(*di);
r = (r+(ct(si)));
r++;
r = (r*(sizeof(**di)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);
*b = (0x00);
r = cpy(b,*di);
embed(0x00,*di);
rl(*di);
*di = (b);
b = (r+(b));
r = (r+(cpy(b,si)));
b = (0x00);
return(r);
}
