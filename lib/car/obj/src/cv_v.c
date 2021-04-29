/* **** Notes

Split out of an array for letters.

Remarks:
After calling fn. cv_v, please call fn. rl_v to unmap the buffer allocated on the RAM.
*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl cv_v(signed char(***di),signed char(*si))) {

auto signed char *b;
auto signed dif;
auto signed i,l,r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);

// count arguments
r = ct_ars(&i,si);
if(!r) return(0x00);
else l = (i);

// allocate a buffer on the RAM.
i++;
*di = (signed char(**)) alloc(i*(sizeof(**di)));
if(!(*di)) return(0x00);
else *(--i+(*di)) = /* (signed char(*)) */ (0x00);

// allocate each buffer on the RAM.
AND(flag,0x00);
AND(dif,0x00);
AND(i,0x00);
while(i<(l)) {
r = cue2(dif+(si));
dif = (r+(dif));
r = ct2(SP,dif+(si));
dif = (r+(dif));
r++;
b = (signed char(*)) alloc(r*(sizeof(***di)));
*(i+(*di)) = (b);
if(!b) {
printf("%s \n","<< Error at fn. alloc()");
OR(flag,0x01);
break;
}
i++;
}

if(flag) {
if(!(rl_v(di))) printf("<< Oops.. at fn. rl_v() \n");
return(0x00);
}

// copy to each buffer.
XOR(dif,dif);
XOR(i,i);
while(i<(l)) {
r = cue2(dif+(si));
dif = (r+(dif));
b = (*(i+(*di)));
r = cpy2(SP,b,dif+(si));
dif = (r+(dif));
if(!r) {
printf("%s \n","<< Error at fn. cpy2()");
OR(flag,0x01);
break;
}
i++;
}

if(flag) {
if(!(rl_v(di))) printf("<< Oops.. at fn. rl_v() \n");
return(0x00);
}

return(i);
}
