/* **** Notes

Wrap.
*/


# include "./incl/config.h"

signed(__cdecl message_box_mb_ok(void(*hdl),signed char(*text),signed char(*caption))) {
return(MessageBox(hdl,text,caption,MB_OK));
}
