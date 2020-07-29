/* **** Notes

Split out of an array for letters.

Remarks:
Please use fn. spltfree to unmap the allocated buffer on the RAM after using fn. splt.
Using along with fn. ct_ars, fn. malloc, fn. cue2, fn. ct2 and fn. cpy2
*/


# define C_CODE_STDS
# define C_AS
# include "./../../../incl/config.h"

signed(__cdecl splt(signed char(***di), signed char(*base))) {

/* **** DATA, BSS and STACK */
auto signed char const(WS) = (' ');
auto signed(dif), (limit);
auto signed(i), (r);
auto signed short(flag);

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!base) return(0x00);

// Count arguments
r = ct_ars(&i, base);

if(!r) return(0x00);
else limit = (i);

// Allocate a buffer on the RAM.
i++;
*di = (signed char(**)) malloc(i*(sizeof(signed char(*))));

if(!(*di)) return(0x00);
else *(--i+(*di)) = /* (signed char(*)) */ (0x00);

// Allocate each buffer on the RAM.
XOR(dif, dif);
XOR(i, i);
while(i<(limit)) {
r = cue2(dif+(base));
dif = (dif+(r));
r = ct2(WS, (dif+(base)));
dif = (dif+(r));
r++;
*(i+(*di)) = (signed char(*)) malloc(r*(sizeof(signed char)));
if(!(*(i+(*di)))) printf("%s\n", "<< Error at *(i+(*di)) = (signed char(*)) malloc() in fn. splt");
i++;
}

// Copy to each buffer.
XOR(dif, dif);
XOR(i, i);
while(i<(limit)) {
r = cue2(dif+(base));
dif = (dif+(r));
r = cpy2(WS, *(i+(*di)), (dif+(base)));
if(!r) printf("<< Error at r = cpy2()");
else dif = (dif+(r));
i++;
}

return(i);
}
