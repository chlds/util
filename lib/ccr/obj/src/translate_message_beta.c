/* **** Notes

Wrap.
*/

# define CCR
# include <windows.h>
# include "../../../incl/config.h"

signed(__cdecl translate_message_beta(void(*argp))) {
return(TranslateMessage(argp));
}
