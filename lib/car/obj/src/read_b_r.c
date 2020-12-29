/* **** Notes

Read bytes to the delimiter.
//*/


# define CAR

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl read_b_r(signed(fd),signed char(delim),signed short(*flag),signed char(**b))) {

/* **** DATA, BSS and STACK */
auto signed char *p;
auto signed i,l,r;

/* **** CODE/TEXT */
if(*flag) return(0x00);
if(!b) return(0x00);

r = ct(*b);
r = (0x02+(r));
r = (r*(sizeof(**b)));
i = (r);
if(r<(0x00)) return(0x00);
p = (signed char(*)) malloc(r);
if(!p) return(0x00);

r = cpy(p,*b);
if(!r) *p = (0x00);
l = (r);
r = _read(fd,l+(p),sizeof(**b));
if(r<(0x00)) return(0x00);
if(!r) OR(*flag,0x02);
if(!(delim^(*(l+(p))))) INC(*flag);
*(r+(l+(p))) = (0x00);

if(*b) {
embed(0x00,*b);
free(*b);
}
*b = (p);
p = (0x00);

return(0x01+(read_b_r(fd,delim,flag,b)));
}
