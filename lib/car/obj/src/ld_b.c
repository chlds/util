/* **** Notes

Load.

Remarks:
Call fn. rl later.
*/


# define CAR
# include <stdio.h>
# include "./../../../incl/config.h"

signed(__cdecl ld_b(signed(range),signed(offset),signed char(**di),signed char(*si/* path */))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;
auto fl_t fl;
auto signed char *perm = ("rdonly,binary");

if(range<(0x01)) return(0x00);
if(offset<(0x00)) return(0x00);
if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

if(!(offset<(sz_f(si)))) {
printf("%s \n","<< Over..");
return(0x00);
}

r = init_fl(&fl);
if(!r) {
printf("%s \n","<< Error at fn. init_fl()");
return(0x00);
}

*(CLI_INDEX+(R(fd,fl))) = (range);
*(CLI_OFFSET+(R(fd,fl))) = (offset);
r = xt(perm,si,&fl,ld_b_r);
b = (signed char(*)) (*(CLI_DI+(R(v,fl))));
if(!r) {
embed_l(0x00,b);
if(b) rl(b);
b = (0x00);
}

*di = (b);

return(r);
}