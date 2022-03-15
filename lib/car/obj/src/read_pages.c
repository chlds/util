/* **** Notes

Read.
//*/


# define CAR
# include <io.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl read_pages(page_t(*di),signed char(*si))) {

auto signed char *b;
auto signed fd;
auto signed r;
auto signed short flag;
auto size_t size;
auto signed char *perm = ("rdonly,binary,");

if(!di) return(0x00);
if(!si) return(0x00);

r = already_b(&size,si);
if(!r) {
if(EQ(size,~0x00)) printf("%s \n","<< No file..");
else printf("%s \n","<< Error at fn. already_b()");
return(0x00);
}

if(DBG) printf("%zu%s \n",size,"bytes");

r = init_pages(0x00,di);
if(!r) {
printf("%s \n","<< Error at fn. init_pages()");
return(0x00);
}

return(xt(perm,si,di,rd_pages));
}
