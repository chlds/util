/*

Set at the cursor position

Remarks:
Only in the Virtual Terminal
*/


# define CAR_H
# include "./../../../config.h"

signed(__cdecl coord_b_r(signed(arg),coord_t(*argp))) {
auto signed char **v;
auto signed x,y;
auto signed i,r;
auto signed short flag;
auto signed char *(a[0x02]);
auto signed radix = (0x0A);
if(!(arg<(OBJS))) return(0x00);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);
AND(flag,0x00);
i = (0x02);
while(i) *(--i+(a)) = (0x00);
x = (signed) (*(arg+(R(x,*argp))));
y = (signed) (*(arg+(R(y,*argp))));
// Y
v = (a);
r = cv_d(radix,v,y);
if(!r) return(0x00);
// X
v++;
r = cv_d(radix,v,x);
if(!r) OR(flag,0x01);
AND(r,0x00);
if(!flag) {
r = coord_b_r_r(*a,*v);
if(!r) OR(flag,0x02);
}
v = (a);
i = (0x02);
if(0x01&(flag)) i = (0x01);
while(i) {
DEC(i);
embed(0x00,*v);
rl(*v);
*v = (0x00);
INC(v);
}
if(flag) AND(r,0x00);
return(r);
}
