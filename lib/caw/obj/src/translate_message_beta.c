/* **** Notes

Wrap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl translate_message_beta(void(*argp))) {
return(TranslateMessage(argp));
}
