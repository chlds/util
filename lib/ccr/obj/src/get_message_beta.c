/* **** Notes

Wrap.
*/

# define CCR
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl get_message_beta(void(*msg),void(*hdl),signed(min),signed(max))) {
return(GetMessage(msg,hdl,min,max));
}
