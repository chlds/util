/* **** Notes

Read.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl rd_s(signed char(**di),signed char(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(*di) return(0x00);
if(!si) return(0x00);

r = ed_b(si,di,rd_s_r);
if(!r) {
printf("%s \n","<< Error at fn. ed_b()");
if(*di) rl(*di);
*di = (0x00);
}

return(r);
}
