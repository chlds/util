/* **** Notes

Map the time.

Remarks:
Call fn. rl later.
//*/


# define CALEND
# define CAR
# include "../../../incl/config.h"

signed(__cdecl chrono_time_r(signed(arg),signed char(**di),signed short(*si))) {

auto signed char *b;
auto time_t t;
auto signed r;
auto signed short flag;

if(arg<(0x01)) return(0x00);
if(!di) return(0x00);
if(!si) return(0x00);

AND(flag,0x00);
b = (0x00);
if(!(cv_d(0x0A,&b,*(--arg+(si))))) return(0x00);
if(!(concatenate(0x00,di,b))) OR(flag,0x01);
rl(b);
b = (0x00);
if(flag) return(0x00);
if(arg) {
if(!(concatenate(0x00,di,":"))) return(0x00);
}

return(0x01+(chrono_time_r(arg,di,si)));
}
