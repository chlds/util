/* **** Notes

Wrap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl delete_object_beta(void(*argp))) {
return(DeleteObject(argp));
}
