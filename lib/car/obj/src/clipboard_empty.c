/*

Empty.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAR
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl clipboard_empty(void)) {
return(EmptyClipboard());
}
