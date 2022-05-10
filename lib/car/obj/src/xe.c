/* **** Notes

Execute.

Remarks:
Refer at fn. ct_f.
*/


# define CAR
# include "./../../../config.h"

signed(__cdecl xe(void(*argp),signed(__cdecl**fn)(void(*argp)))) {

auto signed r;
auto signed(__cdecl*f)(void(*argp));

if(!argp) return(0x00);
if(!fn) return(0x00);
if(!(*fn)) return(0x00);

f = (*fn);
INC(fn);
if(!(f(argp))) return(0x00);

return(0x01+(xe(argp,fn)));
}
