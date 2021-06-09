/* **** Notes

Read bytes to the delimiter.
//*/


# define CAR
# include <io.h>
# include "../../../incl/config.h"

signed(__cdecl read2_b_r(signed char(**di),signed short(*flag),signed char(*delim),signed(fd))) {

auto signed char *b;
auto signed i,r;

if(!di) return(0x00);
if(!flag) return(0x00);
if(!(*flag)) return(0x00);

r = ct(*di);
r = (0x02+(r));
r = (r*(sizeof(**di)));
if(r<(0x00)) return(0x00);
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

r = cpy(b,*di);
if(!r) *b = (0x00);

embed(0x00,*di);
if(*di) rl(*di);

*di = (b);
b = (r+(b));
r = _read(fd,b,sizeof(*b));
if(r<(0x00)) return(0x00);

*(r+(b)) = (0x00);
if(!r) {
AND(*flag,0x00);
return(0x00);
}

r = ord(delim,*b);
if(r<(ct(delim))) AND(*flag,0x00);

b = (0x00);

return(0x01+(read2_b_r(di,flag,delim,fd)));
}
