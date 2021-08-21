/* **** Notes

Confirm.
*/


# define CALEND
# define CAR

# include <io.h>
# include <conio.h>
# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <errno.h>
# include "./../../../incl/config.h"

signed(__cdecl cf_dir(signed char(*argp))) {

auto signed char *b;
auto signed i,r;
auto struct _stat stats;

if(!argp) return(0x00);

r = ct(argp);
if(r<(0x01)) return(0x00);
if('/'^(*(--r+(argp)))) return(0x00);

r = _stat(argp,&stats);
if(!(r^(~0x00))) return(0x00);
if(EQ(EINVAL,r)) return(0x00);

return(0x01);
}
