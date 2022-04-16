/*

Empty.

Remarks:
Refer at fn. clipboard_map and clipboard_unmap.
*/


# define CAW_H
# define STDIO_H
# define WIN32_H
# include "./../../../config.h"

signed(__cdecl clipboard_empty(void)) {
return(EmptyClipboard());
}
