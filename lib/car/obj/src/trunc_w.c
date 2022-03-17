/* **** Notes

Truncate.
//*/


# define CAR
# include <stdio.h>
# include <stddef.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl trunc_w(signed short(*cache/* an extension for backups */),signed short(*path))) {

auto signed short *w;
auto signed r;
auto size_t size;

if(!path) return(0x00);

// check the file stat.
r = already_w(&size,path);
if(!r) {
if(EQ(size,~0x00)) printf("%s \n","<< No file");
else printf("%s \n","<< Error at fn. already_w()");
return(0x00);
}

if(DBG) printf("%zu%s \n",size,"bytes");

// backup
if(cache) {
r = backup_w(cache,path);
if(!r) {
// printf("%s \n","<< Error at fn. backup_w()");
// return(0x00);
// e.g., 0B written.
}}

return(trunc_w_r(path));
}
