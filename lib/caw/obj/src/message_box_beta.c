/* **** Notes

Wrap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl message_box_beta(void(*hdl),signed char(*text),signed char(*caption),signed(type))) {
return(MessageBox(hdl,text,caption,type));
}
