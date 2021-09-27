/*

Rectangle.

Remarks:
Only in the Virtual Terminal
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl rect_b_r(signed(arg),rect_t(*argp))) {

auto signed radix = (0x0A);
auto signed char *(b[0x02]);
auto signed char **v;
auto signed x,y;
auto signed i,r;
auto signed short flag;

if(!(arg<(CLI_RULE))) return(0x00);
if(arg<(0x00)) return(0x00);
if(!argp) return(0x00);

AND(flag,0x00);
i = (0x02);
while(i) *(--i+(b)) = (0x00);
x = (signed) (*(arg+(R(right,*argp))));
y = (signed) (*(arg+(R(bottom,*argp))));

// Y
r = cv_d(radix,b,y);
if(!r) return(0x00);

// X
r = cv_d(radix,0x01+(b),x);
if(!r) OR(flag,0x01);

AND(r,0x00);
if(!flag) {
r = rect_b_r_r(*b,*(0x01+(b)));
if(!r) OR(flag,0x02);
}

v = (b);
i = (0x02);
if(0x01&(flag)) i = (0x01);
while(i) {
DEC(i);
embed(0x00,*v);
if(*v) rl(*v);
*v = (0x00);
INC(v);
}

if(flag) AND(r,0x00);

return(r);
}
