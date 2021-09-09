/* **** Notes

Write to the file descriptor.
//*/


# define CAR
# include <io.h>
# include "../../../incl/config.h"

signed(__cdecl wr_b(signed(fd),signed char(*argp),signed(arg))) {
return(write(fd,argp,arg));
}
