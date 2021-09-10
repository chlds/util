/* **** Notes

Read bytes to the delimiter.
//*/


# define CAR
# include "../../../incl/config.h"

signed(__cdecl rd_f_r(signed char(**di),signed char(*delim),signed(fd))) {

auto signed char *b;
auto signed i,r;

if(!di) return(0x00);
if(!delim) return(0x00);
if(fd<(0x00)) return(0x00);

r = ct(*di);
r = (0x02+(r));
r = (r*(sizeof(**di)));
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

r = cpy(b,*di);
if(!r) *b = (0x00);

embed(0x00,*di);
if(*di) rl(*di);

*di = (b);
b = (r+(b));
r = rd_b(fd,b,sizeof(*b));
if(r<(0x00)) {
*b = (0x00);
b = (0x00);
embed(0x00,*di);
if(*di) rl(*di);
*di = (b);
return(0x00);
}

*(r+(b)) = (0x00);
if(!r) return(0x00);

r = ord(delim,*b);
if(r<(ct(delim))) return(0x01);

return(0x01+(rd_f_r(di,delim,fd)));
}
