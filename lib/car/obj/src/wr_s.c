/* **** Notes

Write.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl wr_s(signed char(*di),signed char(*si))) {

auto signed char *b;
auto signed i,r;
auto signed short flag;

if(!di) return(0x00);
if(!si) return(0x00);

//*
r = trunc_b(0x00,di);
if(!r) {
printf("%s \n","<< Error at fn. trunc_b()");
return(0x00);
}
//*/

return(ed_b(di,si,wr_s_r));
}
