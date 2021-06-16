/* **** Notes

Convert to time out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_hr(signed short(*hr),signed short(*mn),signed char(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!hr) return(0x00);
if(!mn) return(0x00);
if(!si) return(0x00);

b = (si);
r = ct(b);
r++;
r = (r*(sizeof(*b)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

r = cpy(b,si);
if(r) r = cv_hr_r(hr,mn,b);

embed(0x00,b);
if(b) rl(b);
b = (0x00);

return(r);
}
