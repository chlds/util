/* **** Notes

Close

Remarks:
Refer at fn. op_b
*/


# define CAR_H
# include <io.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl cl_b(signed(arg))) {
return(close(arg));
}
