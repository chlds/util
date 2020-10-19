/* **** Notes

Count weeks.
*/


# define CAR

# include "../../../incl/config.h"
# include <time.h>

signed(__cdecl ct_weeks(time_t(criterion),time_t(sec))) {

/* **** DATA, BSS and STACK */
auto y,w,d,h,m;
auto i,r;

/* **** CODE/TEXT */
if(criterion<(0x00)) return(0x00);
if(sec<(0x00)) return(0x00);

sec = (-criterion+(sec));
if(sec<(0x00)) return(0x00);

m = (60);
h = (60*(m));
d = (24*(h));
w = (7*(d));
y = (53*(w));
if(y<(sec)) return(0x00);

r = ct_weeks_internal(w,sec);

return(r);
}
