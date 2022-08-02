/* **** Notes

Write with a file descriptor
*/


# define CAR_H
# include <io.h>
# include "./../../../config.h"

signed(__cdecl wr_b(signed(fd),signed char(*argp),signed(arg))) {
return(write(fd,argp,arg));
}
