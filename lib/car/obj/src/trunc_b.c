/* **** Notes

Truncate.
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

signed(__cdecl trunc_b(signed char(*cache/* an extension for backups */),signed char(*path))) {

auto signed char *b;
auto signed r;
auto signed short flag;
auto struct stat stats;

if(!path) return(0x00);

// check the file stat.
r = stat(path,&stats);
if(!(r^(~0x00))) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
else printf("%s \n","<< Error at fn. stat()");
return(0x00);
}

if(DBG) printf("%d%s \n",R(st_size,stats),"bytes");

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
