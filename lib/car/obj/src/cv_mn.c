/* **** Notes

Convert to time out of characters.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_mn(signed short(*mn),signed char(*argp))) {

auto signed char *b;
auto signed r;

if(!mn) return(0x00);
if(!argp) return(0x00);

b = (argp);
r = ctdn2(':',b);
if(r<(0x01)) return(0x00);

b = (r+(b));
b++;
r = ct_digits(b);
if(r<(0x02)) return(0x00);

if(!(cv_da_first(0x0A,&r,b))) return(0x00);
if(59<(r)) return(0x00);
if(r<(0x00)) return(0x00);
*mn = (r);

return(0x01);
}
