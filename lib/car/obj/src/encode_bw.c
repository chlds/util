/*

Encode to Unicode bytes in UTF-8 out of Unicode characters in UTF-16.

Along with C library

Remarks:
Refer at fn. decode2uni and fn. encode2uni.
*/


# define BUFF (0x400)
# define CAR
# include "../../../incl/config.h"
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>

signed(__cdecl encode_bw(signed char(**di),signed short(*si))) {

/* **** DATA, BSS and STACK */
auto ENCODE_PACK pack;

auto signed char *p;
auto signed buff;
auto signed i,r;
auto signed short flag;

/* **** CODE/TEXT */
if(!di) return(0x00);
if(!si) return(0x00);

buff = (BUFF*(sizeof(signed char)));
if(buff<(0x08)) return(0x00);

p = (signed char(*)) malloc(buff);
if(!p) {
printf("%s\n","<< Error at fn. malloc()");
return(0x00);
}

R(flag,pack) = (0x00);
R(gauge,pack) = (buff);
R(size,pack) = (buff);
R(base,pack) = (p);
R(b,pack) = (p);
R(w,pack) = (si);
R(d,pack) = (0x00);
R(q,pack) = (0x00);
R(optl,pack) = (0x00);

flag = (0x00);
r = encode_bw_internal(&pack);
if(R(flag,pack)) flag++;
// if(!r) flag++;
if(flag) {
printf("%s\n","<< Error at fn. encode_bw_internal()");
free(R(base,pack));
R(base,pack) = (0x00);
p = (R(base,pack));
r = (0x00);
}

*di = R(base,pack);

p = (0x00);
R(optl,pack) = (0x00);
R(q,pack) = (0x00);
R(d,pack) = (0x00);
R(w,pack) = (0x00);
R(b,pack) = (p);
R(base,pack) = (p);
R(size,pack) = (0x00);
R(gauge,pack) = (0x00);
R(flag,pack) = (0x00);

return(r);
}
