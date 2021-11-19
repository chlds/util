/* **** Notes

Read bytes to the delimiter.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl rd_k_r(signed char(**di),signed char(*delim),signed(n),signed(fd))) {

auto signed char *b;
auto signed i,r;

if(!di) return(0x00);
if(!delim) return(0x00);
if(!n) return(0x00);
if(fd<(0x00)) return(0x00);

r = ct(*di);
r = (0x01+(r));
r++;
r = (r*(sizeof(**di)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

r = cpy_l(b,*di);
if(!r) *b = (0x00);

embed_l(0x00,*di);
if(*di) rl(*di);

*di = (b);
b = (r+(b));
r = rd_b(fd,b,sizeof(*b));
if(r<(0x00)) {
*b = (0x00);
b = (0x00);
embed_l(0x00,*di);
if(*di) rl(*di);
*di = (b);
return(0x00);
}

*(r+(b)) = (0x00);
if(!r) return(0x00);

r = ord(delim,*b);
if(r<(ct(delim))) return(0x01);

// stop
if(n<(0x00)) {
n++;
if(!n) return(0x01);
n++;
}

--n;
if(!n) {
if(EQ(0x80,nbytechar(*b))) n++;
if(EQ(0x02,nbytechar(*b))) n = (~0x00);
if(EQ(0x03,nbytechar(*b))) n = (~0x01);
}

return(0x01+(rd_k_r(di,delim,n,fd)));
}
