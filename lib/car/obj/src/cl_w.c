/* **** Notes

Close

Remarks:
Refer at fn. op_w
*/


# define CAR_H
# include <io.h>
# include <errno.h>
# include "./../../../config.h"

signed(__cdecl cl_w(signed(arg))) {
return(_close(arg));
}
