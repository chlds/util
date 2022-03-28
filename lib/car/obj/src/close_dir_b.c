/* **** Notes

Unmap.
*/


# define CAR
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl close_dir_b(void(*argp))) {
return(FindClose(argp));
}
