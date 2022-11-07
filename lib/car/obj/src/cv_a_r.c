/* **** Notes

Convert
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl cv_a_r(signed(arg),signed char(*di),signed char(*si))) {
auto signed char *sm = ("abcdefghijklmnopqrstuvwxyz");
auto signed char *ca = ("ABCDEFGHIJKLMNOPQRSTUVWXYZ");
auto signed char *d,*s;
auto signed r;
if(!di) return(0x00);
if(!si) return(0x00);
r = cpy(di,si);
if(!r) return(0x00);
d = (sm);
s = (ca);
if(arg) {
d = (ca);
s = (sm);
}
return(cv_l(d,s,di,si));
}
