/* **** Notes

Convert to time out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_hr(signed short(*hr),signed short(*mn),signed char(*si))) {

/* **** DATA, BSS and STACK */
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!hr) return(0x00);
if(!mn) return(0x00);
if(!si) return(0x00);

*hr = (0x00);
*mn = (0x00);

r = ct2(':',si);
if(!r) return(0x00);
si = (r+(si));
--si;
if(--r) --si;

r = cv_da_first(0x0A,&i,si);
if(!r) return(0x00);
if(23<(i)) return(0x00);
if(-0x01<(i)) *hr = (i);
else return(0x00);

r = cv_da_first(0x0A,&i,r+(si));
if(!r) return(0x00);
if(59<(i)) return(0x00);
if(-0x01<(i)) *mn = (i);
else return(0x00);

return(0x01);
}
