/* **** Notes

Write.
//*/


# define CAR
# include <stdio.h>
# include "../../../incl/config.h"

signed(__cdecl write_pages(signed char(*di),page_t(*si))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto size_t size;
auto signed char *perm = ("wronly,binary,");

if(!di) return(0x00);
if(!si) return(0x00);

b = (*(CLI_BASE+(R(b,*si))));
if(b) return(0x00);

// check the file stat.
r = already_b(&size,di);
if(!r) {
if(EQ(size,~0x00)) printf("%s \n","<< No file..");
else printf("%s \n","<< Error at fn. already_b()");
return(0x00);
}

if(DBG) printf("%lld%s \n",size,"bytes");

return(xt(perm,di,si,wr_pages));
}
