/* **** Notes

Wrap.
*/

# define CCR
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl message_box_beta(void(*hdl),signed char(*text),signed char(*caption),signed(type))) {
return(MessageBox(hdl,text,caption,type));
}
