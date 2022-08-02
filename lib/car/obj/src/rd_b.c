/* **** Notes

Read out of a file descriptor
*/


# define CAR_H
# include <io.h>
# include "./../../../config.h"

signed(__cdecl rd_b(signed(fd),signed char(*argp),signed(arg))) {
return(read(fd,argp,arg));
}
