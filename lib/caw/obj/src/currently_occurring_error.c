/*

Retrieve the calling thread's last-error code value.

Remarks:
Functions executed by the calling thread
set this value by calling the SetLastError function.
*/


# include "./incl/config.h"

signed(__cdecl currently_occurring_error(void)) {
return(GetLastError());
}
