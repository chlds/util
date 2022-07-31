/* **** Notes

Execute

Remarks:
Refer at fn. ct_f.
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl xe(signed(arg/* continue */),void(*argp),signed(__cdecl**fn)(void(*argp)))) {
auto signed r;
auto signed(__cdecl*f)(void(*argp));
if(!argp) return(0x00);
if(!fn) return(0x00);
if(!(*fn)) return(0x00);
AND(r,0x00);
f = (*fn);
INC(fn);
if(f(argp)) OR(r,0x01);
if(!r) {
if(!arg) return(0x00);
}
return(r+(xe(arg,argp,fn)));
}
