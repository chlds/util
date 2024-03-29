/* **** Notes

Open

Remarks:
Put a null pointer at the end of arguments if you do not need the third argument
*/


# define CAR_H
# include <io.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "./../../../config.h"

signed(__cdecl op_b(signed char(*path),signed(*argp),...)) {
auto signed **d;
if(!path) return(~0x00);
if(!argp) return(~0x00);
d = (&argp);
d++;
if(*d) return(open(path,*argp,**d));
return(open(path,*argp));
}
