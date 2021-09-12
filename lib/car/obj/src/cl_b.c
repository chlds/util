/* **** Notes

Close.

Remarks:
Refer at fn. op_b.
*/


# define CAR
# include <io.h>
# include <stdio.h>
# include <stdarg.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include "./../../../incl/config.h"

signed(__cdecl cl_b(signed(arg))) {
return(close(arg));
}
