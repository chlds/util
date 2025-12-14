# define CAR_H
# include <io.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl flush(signed char(*argp/*path*/))) {
auto signed r;
auto signed s;
auto signed a = (_O_RDWR|(_O_BINARY));
if(!argp) return(0x00);
AND(r,0x00);
s = _open(argp,a);
if(s<(0x00)) return(r);
if(!(fsyncs(s))) OR(r,0x01);
if(_close(s)) return(0x00);
return(r);
}
