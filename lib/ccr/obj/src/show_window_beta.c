/* **** Notes

Wrap.
*/

# define CCR
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl show_window_beta(void(*hdl),signed(arg))) {
return(ShowWindow(hdl,arg));
}
