/* **** Notes

Size.

Remarks:
Return a negative value on failure.
*/


# define CAR
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl sz_f(signed char(*argp))) {

auto signed r;
auto struct stat stats;

if(!argp) return(~0x00);
if(!(*argp)) return(~0x00);

r = stat(argp,&stats);
if(EQ(r,~0x00)) {
if(EQ(ENOENT,errno)) printf("%s \n","<< No file..");
else printf("%s \n","<< Error at fn. stat()");
return(r);
}

return(R(st_size,stats));
}
