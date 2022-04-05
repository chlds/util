/* **** Notes

Wrap.
*/

# define CCR
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl delete_object_beta(void(*argp))) {
return(DeleteObject(argp));
}
