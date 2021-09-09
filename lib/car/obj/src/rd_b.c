/* **** Notes

Read out of the file descriptor.
//*/


# define CAR
# include <io.h>
# include "../../../incl/config.h"

signed(__cdecl rd_b(signed(fd),signed char(*argp),signed(arg))) {
return(read(fd,argp,arg));
}
