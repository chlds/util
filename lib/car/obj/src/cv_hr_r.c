/* **** Notes

Convert to time out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_hr_r(signed short(*hr),signed short(*mn),signed char(*si))) {

auto signed i,r;
auto signed short flag;

if(!hr) return(0x00);
if(!mn) return(0x00);
if(!si) return(0x00);

AND(*hr,0x00);
AND(*mn,0x00);

r = ct2(':',si);
if(!r) return(0x00);
if(!(r^(ct(si)))) return(0x00);

si = (r+(si));
--si;
if(--r) --si;

r = cv_da_first(0x0A,&i,si);
if(!r) return(0x00);
if(i<(0x00)) i = (0x01+(~i));
if(23<(i)) return(0x00);
*hr = (i);

si = (r+(si));

r = cv_da_first(0x0A,&i,si);
if(!r) return(0x00);
if(i<(0x00)) return(0x00);
if(59<(i)) return(0x00);
*mn = (i);

return(0x01);
}
