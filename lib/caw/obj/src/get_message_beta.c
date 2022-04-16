/* **** Notes

Wrap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl get_message_beta(void(*msg),void(*hdl),signed(min),signed(max))) {
return(GetMessage(msg,hdl,min,max));
}
