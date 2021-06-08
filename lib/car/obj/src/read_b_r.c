/* **** Notes

Read bytes to the delimiter.
//*/


# define CAR
# include <io.h>
# include "../../../incl/config.h"

signed(__cdecl read_b_r(signed(fd),signed char(delim),signed short(*flag),signed char(**argp))) {

auto signed char *b;
auto signed i,r;

if(!flag) return(0x00);
if(!argp) return(0x00);
if(!(*flag)) return(0x00);

r = ct(*argp);
r = (0x02+(r));
r = (r*(sizeof(**argp)));
if(r<(0x00)) return(0x00);
b = (signed char(*)) alloc(r);
if(!b) return(0x00);

r = cpy(b,*argp);
if(!r) *b = (0x00);

embed(0x00,*argp);
if(*argp) rl(*argp);

*argp = (b);
b = (r+(b));
r = _read(fd,b,sizeof(*b));
if(r<(0x00)) return(0x00);

*(r+(b)) = (0x00);
if(!(delim^(*b))) AND(*flag,0x00);
if(!r) {
AND(*flag,0x00);
return(0x00);
}

b = (0x00);

return(0x01+(read_b_r(fd,delim,flag,argp)));
}
