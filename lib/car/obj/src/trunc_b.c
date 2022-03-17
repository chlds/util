/* **** Notes

Truncate.
//*/


# define CAR
# include <stdio.h>
# include <stddef.h>
# include <errno.h>
# include "../../../incl/config.h"

signed(__cdecl trunc_b(signed char(*cache/* an extension for backups */),signed char(*path))) {

auto signed char *b;
auto signed r;
auto size_t size;

if(!path) return(0x00);

// check the file stat.
r = already_b(&size,path);
if(!r) {
if(EQ(size,~0x00)) printf("%s \n","<< No file");
else printf("%s \n","<< Error at fn. already_b()");
return(0x00);
}

if(DBG) printf("%zu%s \n",size,"bytes");

// backup
if(cache) {
r = backup_b(cache,path);
if(!r) {
// printf("%s \n","<< Error at fn. backup_b()");
// return(0x00);
// e.g., 0B written.
}}

return(trunc_b_r(path));
}
