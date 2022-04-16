/* **** Notes

Wrap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl message_box_mb_ok(void(*hdl),signed char(*text),signed char(*caption))) {
return(MessageBox(hdl,text,caption,MB_OK));
}
